#include "caver/resource/protobuf_decoder.h"
#include <cstring>
#include <iostream>

namespace caver {

static bool readVarint(const uint8_t*& ptr, const uint8_t* end, uint64_t& outVal) {
    outVal = 0;
    int shift = 0;
    while (ptr < end && shift < 64) {
        uint8_t byte = *ptr++;
        outVal |= static_cast<uint64_t>(byte & 0x7F) << shift;
        if ((byte & 0x80) == 0) {
            return true;
        }
        shift += 7;
    }
    return false;
}

bool ProtoMessage::parseFromBytes(const uint8_t* data, size_t size) {
    fields.clear();
    const uint8_t* ptr = data;
    const uint8_t* end = data + size;

    while (ptr < end) {
        uint64_t key = 0;
        if (!readVarint(ptr, end, key)) break;

        uint32_t fieldNumber = static_cast<uint32_t>(key >> 3);
        WireType wireType = static_cast<WireType>(key & 0x07);

        ProtoField field;
        field.fieldNumber = fieldNumber;
        field.wireType = wireType;

        switch (wireType) {
            case WireType::Varint: {
                if (!readVarint(ptr, end, field.varintVal)) return false;
                break;
            }
            case WireType::Fixed64: {
                if (ptr + 8 > end) return false;
                std::memcpy(&field.fixed64Val, ptr, 8);
                ptr += 8;
                break;
            }
            case WireType::LengthDelimited: {
                uint64_t length = 0;
                if (!readVarint(ptr, end, length)) return false;
                if (ptr + length > end) return false;
                field.bytesVal.assign(ptr, ptr + length);
                ptr += length;
                break;
            }
            case WireType::Fixed32: {
                if (ptr + 4 > end) return false;
                std::memcpy(&field.fixed32Val, ptr, 4);
                ptr += 4;
                break;
            }
            case WireType::StartGroup:
            case WireType::EndGroup:
                // Deprecated in Protobuf syntax, safely skip
                break;
            default:
                // Unknown wire type, cannot proceed safely
                return false;
        }

        fields.push_back(std::move(field));
    }

    return true;
}

const ProtoField* ProtoMessage::findField(uint32_t fieldNumber) const {
    for (const auto& field : fields) {
        if (field.fieldNumber == fieldNumber) return &field;
    }
    return nullptr;
}

std::vector<const ProtoField*> ProtoMessage::findFields(uint32_t fieldNumber) const {
    std::vector<const ProtoField*> result;
    for (const auto& field : fields) {
        if (field.fieldNumber == fieldNumber) result.push_back(&field);
    }
    return result;
}

std::string ProtoMessage::getString(uint32_t fieldNumber, const std::string& def) const {
    const auto* f = findField(fieldNumber);
    if (f && f->wireType == WireType::LengthDelimited) {
        return f->asString();
    }
    return def;
}

uint64_t ProtoMessage::getVarint(uint32_t fieldNumber, uint64_t def) const {
    const auto* f = findField(fieldNumber);
    if (f && f->wireType == WireType::Varint) {
        return f->varintVal;
    }
    return def;
}

int64_t ProtoMessage::getInt64(uint32_t fieldNumber, int64_t def) const {
    return static_cast<int64_t>(getVarint(fieldNumber, static_cast<uint64_t>(def)));
}

int32_t ProtoMessage::getInt32(uint32_t fieldNumber, int32_t def) const {
    return static_cast<int32_t>(getVarint(fieldNumber, static_cast<uint32_t>(def)));
}

bool ProtoMessage::getBool(uint32_t fieldNumber, bool def) const {
    return getVarint(fieldNumber, def ? 1 : 0) != 0;
}

float ProtoMessage::getFloat(uint32_t fieldNumber, float def) const {
    const auto* f = findField(fieldNumber);
    if (f) {
        if (f->wireType == WireType::Fixed32) return f->asFloat();
        if (f->wireType == WireType::Varint) return static_cast<float>(f->varintVal);
    }
    return def;
}

Vector2 ProtoMessage::getVector2(uint32_t fieldNumber) const {
    auto subMsg = getEmbeddedMessage(fieldNumber);
    if (!subMsg) return Vector2(0, 0);
    // In Protobuf schemas for Vector2: X is tag 1 (fixed32 or float), Y is tag 2
    // Field 1 tag: 13 -> field 1 (13 >> 3 = 1, wire_type 5 = fixed32)
    // Field 2 tag: 21 -> field 2 (21 >> 3 = 2, wire_type 5 = fixed32)
    float x = subMsg->getFloat(1, 0.0f);
    float y = subMsg->getFloat(2, 0.0f);
    return Vector2(x, y);
}

Vector3 ProtoMessage::getVector3(uint32_t fieldNumber) const {
    auto subMsg = getEmbeddedMessage(fieldNumber);
    if (!subMsg) return Vector3(0, 0, 0);
    // Vector3: X=field 1 (tag 13), Y=field 2 (tag 21), Z=field 3 (tag 29)
    float x = subMsg->getFloat(1, 0.0f);
    float y = subMsg->getFloat(2, 0.0f);
    float z = subMsg->getFloat(3, 0.0f);
    return Vector3(x, y, z);
}

std::optional<ProtoMessage> ProtoMessage::getEmbeddedMessage(uint32_t fieldNumber) const {
    const auto* f = findField(fieldNumber);
    if (f && f->wireType == WireType::LengthDelimited) {
        ProtoMessage msg;
        if (msg.parseFromBytes(f->bytesVal.data(), f->bytesVal.size())) {
            return msg;
        }
    }
    return std::nullopt;
}

std::vector<ProtoMessage> ProtoMessage::getEmbeddedMessages(uint32_t fieldNumber) const {
    std::vector<ProtoMessage> result;
    auto matchingFields = findFields(fieldNumber);
    for (const auto* f : matchingFields) {
        if (f->wireType == WireType::LengthDelimited) {
            ProtoMessage msg;
            if (msg.parseFromBytes(f->bytesVal.data(), f->bytesVal.size())) {
                result.push_back(std::move(msg));
            }
        }
    }
    return result;
}

} // namespace caver

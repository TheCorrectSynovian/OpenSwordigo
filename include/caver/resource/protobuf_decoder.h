#ifndef CAVER_PROTOBUF_DECODER_H
#define CAVER_PROTOBUF_DECODER_H

#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
#include <optional>
#include <caver/math/caver_math.h>

namespace caver {

enum class WireType : uint8_t {
    Varint = 0,
    Fixed64 = 1,
    LengthDelimited = 2,
    StartGroup = 3,
    EndGroup = 4,
    Fixed32 = 5
};

struct ProtoField {
    uint32_t fieldNumber{0};
    WireType wireType{WireType::Varint};
    uint64_t varintVal{0};
    uint32_t fixed32Val{0};
    uint64_t fixed64Val{0};
    std::vector<uint8_t> bytesVal;

    std::string asString() const {
        return std::string(bytesVal.begin(), bytesVal.end());
    }

    float asFloat() const {
        float f;
        std::memcpy(&f, &fixed32Val, sizeof(float));
        return f;
    }

    double asDouble() const {
        double d;
        std::memcpy(&d, &fixed64Val, sizeof(double));
        return d;
    }
};

class ProtoMessage {
public:
    std::vector<ProtoField> fields;

    bool parseFromBytes(const uint8_t* data, size_t size);
    bool parseFromBytes(const std::vector<uint8_t>& buffer) {
        return parseFromBytes(buffer.data(), buffer.size());
    }

    const ProtoField* findField(uint32_t fieldNumber) const;
    std::vector<const ProtoField*> findFields(uint32_t fieldNumber) const;

    std::string getString(uint32_t fieldNumber, const std::string& def = "") const;
    uint64_t getVarint(uint32_t fieldNumber, uint64_t def = 0) const;
    int64_t getInt64(uint32_t fieldNumber, int64_t def = 0) const;
    int32_t getInt32(uint32_t fieldNumber, int32_t def = 0) const;
    bool getBool(uint32_t fieldNumber, bool def = false) const;
    float getFloat(uint32_t fieldNumber, float def = 0.0f) const;
    Vector2 getVector2(uint32_t fieldNumber) const;
    Vector3 getVector3(uint32_t fieldNumber) const;

    std::optional<ProtoMessage> getEmbeddedMessage(uint32_t fieldNumber) const;
    std::vector<ProtoMessage> getEmbeddedMessages(uint32_t fieldNumber) const;
};

} // namespace caver

#endif // CAVER_PROTOBUF_DECODER_H

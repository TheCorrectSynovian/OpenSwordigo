/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e04fc
 * Function: Caver::Proto::Item::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Item * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall Caver::Proto::Item::SerializeWithCachedSizes(Item *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x40);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(3,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(4,*(string **)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(5,*(string **)(this + 0x28),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x30],param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(7,*(int *)(this + 0x34),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(8,*(int *)(this + 0x38),param_1);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(9,*(int *)(this + 0x3c),param_1);
    return;
  }
  return;
}



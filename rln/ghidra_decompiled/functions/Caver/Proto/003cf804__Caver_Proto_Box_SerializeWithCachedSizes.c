/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf804
 * Function: Caver::Proto::Box::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Box * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */

void __thiscall Caver::Proto::Box::SerializeWithCachedSizes(Box *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x24);
  }
  if ((uVar1 >> 5 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x20),param_1);
  return;
}



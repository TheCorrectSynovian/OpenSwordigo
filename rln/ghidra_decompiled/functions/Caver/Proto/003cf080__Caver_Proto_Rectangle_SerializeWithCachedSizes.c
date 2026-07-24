/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf080
 * Function: Caver::Proto::Rectangle::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Rectangle * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Rectangle::SerializeWithCachedSizes(Rectangle *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x14),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x18),param_1);
  return;
}



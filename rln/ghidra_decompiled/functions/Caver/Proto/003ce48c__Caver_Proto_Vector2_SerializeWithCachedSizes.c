/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce48c
 * Function: Caver::Proto::Vector2::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(Vector2 * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const
    */

void __thiscall
Caver::Proto::Vector2::SerializeWithCachedSizes(Vector2 *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x14);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(1,*(float *)(this + 0xc),param_1);
    uVar1 = *(uint *)(this + 0x14);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x10),param_1);
  return;
}



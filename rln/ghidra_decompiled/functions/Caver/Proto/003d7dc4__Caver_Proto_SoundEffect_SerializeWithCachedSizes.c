/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d7dc4
 * Function: Caver::Proto::SoundEffect::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SoundEffect * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffect::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SoundEffect::SerializeWithCachedSizes(SoundEffect *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x28);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x28);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(2,*(string **)(this + 0x18),param_1);
    uVar1 = *(uint *)(this + 0x28);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x20),param_1);
    uVar1 = *(uint *)(this + 0x28);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return;
  }
  google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x24),param_1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411590
 * Function: Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(SoundEffectComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::SoundEffectComponent::SerializeWithCachedSizes
          (SoundEffectComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x1c),param_1);
    uVar1 = *(uint *)(this + 0x20);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(3,*(float *)(this + 0x18),param_1);
    return;
  }
  return;
}



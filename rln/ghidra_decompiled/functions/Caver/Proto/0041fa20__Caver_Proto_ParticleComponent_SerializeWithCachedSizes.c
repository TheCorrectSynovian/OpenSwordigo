/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fa20
 * Function: Caver::Proto::ParticleComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ParticleComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ParticleComponent::SerializeWithCachedSizes
          (ParticleComponent *this,CodedOutputStream *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x1c);
  if ((uVar1 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteString(1,*(string **)(this + 0x10),param_1);
    uVar1 = *(uint *)(this + 0x1c);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    return;
  }
                    /* try { // try from 0041fa74 to 0051fa87 has its CatchHandler @ 0041fbe8 */
  google::protobuf::internal::WireFormatLite::WriteFloat(2,*(float *)(this + 0x18),param_1);
  return;
}



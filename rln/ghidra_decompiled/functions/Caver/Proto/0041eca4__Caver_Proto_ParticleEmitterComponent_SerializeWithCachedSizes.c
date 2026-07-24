/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041eca4
 * Function: Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ParticleEmitterComponent * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ParticleEmitterComponent::SerializeWithCachedSizes
          (ParticleEmitterComponent *this,CodedOutputStream *param_1)

{
  ParticleEmitterComponent *pPVar1;
  uint uVar2;
  long lVar3;
  
                    /* try { // try from 0041ecc0 to 0051ecfb has its CatchHandler @ 0041f0b0 */
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteInt32
                (2,*(int *)(*(long *)(this + 0x20) + lVar3 * 4),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 >> 1 & 1) != 0) {
                    /* try { // try from 0041ed6c to 0051eda7 has its CatchHandler @ 0041f018 */
    google::protobuf::internal::WireFormatLite::WriteInt32(3,*(int *)(this + 0x10),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(4,*(int *)(this + 0x18),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteInt32(5,*(int *)(this + 0xc),param_1);
                    /* try { // try from 0041eda8 to 0051f2b3 has its CatchHandler @ 0041ead4 */
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(6,(bool)this[0x1c],param_1);
  }
                    /* try { // try from 0041ed1c to 0051ed2f has its CatchHandler @ 0041f0ac */
  if (0 < *(int *)(this + 0x48)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteMessage
                (7,*(MessageLite **)(*(long *)(this + 0x40) + lVar3 * 8),param_1);
      lVar3 = lVar3 + 1;
                    /* try { // try from 0041ed40 to 0051ed4b has its CatchHandler @ 0041f074 */
    } while (lVar3 < *(int *)(this + 0x48));
  }
  uVar2 = *(uint *)(this + 0x88);
  if ((uVar2 >> 2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteBool(8,(bool)this[0x14],param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    pPVar1 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
    if (*(long *)(this + 0x78) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (9,*(MessageLite **)(pPVar1 + 0x78),param_1);
    uVar2 = *(uint *)(this + 0x88);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    pPVar1 = *(ParticleEmitterComponent **)PTR_default_instance__007e5ba8;
    if (*(long *)(this + 0x80) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (10,*(MessageLite **)(pPVar1 + 0x80),param_1);
    return;
  }
  return;
}



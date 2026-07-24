/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041d85c
 * Function: Caver::Proto::ParticleEmitter::SerializeWithCachedSizes
 * Signature: undefined __thiscall SerializeWithCachedSizes(ParticleEmitter * this, CodedOutputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*)
   const */

void __thiscall
Caver::Proto::ParticleEmitter::SerializeWithCachedSizes
          (ParticleEmitter *this,CodedOutputStream *param_1)

{
  ParticleEmitter *pPVar1;
  uint uVar2;
  long lVar3;
  
                    /* try { // try from 0041d868 to 0051d86f has its CatchHandler @ 0041d878 */
                    /* try { // try from 0041d870 to 0051d87b has its CatchHandler @ 0041d77c */
  uVar2 = *(uint *)(this + 0x50);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0041d868 with catch @ 0041d878
                        */
  if ((uVar2 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteEnum(1,*(int *)(this + 0xc),param_1);
    uVar2 = *(uint *)(this + 0x50);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pPVar1 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
    if (*(long *)(this + 0x18) != 0) {
      pPVar1 = this;
    }
    google::protobuf::internal::WireFormatLite::WriteMessage
              (2,*(MessageLite **)(pPVar1 + 0x18),param_1);
  }
  if (0 < *(int *)(this + 0x38)) {
    lVar3 = 0;
    do {
      google::protobuf::internal::WireFormatLite::WriteFloat
                (3,*(float *)(*(long *)(this + 0x30) + lVar3 * 4),param_1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x38));
  }
  uVar2 = *(uint *)(this + 0x50);
  if ((uVar2 >> 3 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(4,*(float *)(this + 0x20),param_1);
    uVar2 = *(uint *)(this + 0x50);
  }
  if ((uVar2 >> 4 & 1) != 0) {
                    /* catch() { ... } // from try @ 0041d9e0 with catch @ 0041d92c */
    google::protobuf::internal::WireFormatLite::WriteFloat(5,*(float *)(this + 0x24),param_1);
    uVar2 = *(uint *)(this + 0x50);
  }
  if ((uVar2 >> 5 & 1) != 0) {
    google::protobuf::internal::WireFormatLite::WriteFloat(6,*(float *)(this + 0x28),param_1);
                    /* try { // try from 0041d954 to 0051d967 has its CatchHandler @ 0041db8c */
    uVar2 = *(uint *)(this + 0x50);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    return;
  }
                    /* try { // try from 0041d974 to 0051d97f has its CatchHandler @ 0041db20 */
  pPVar1 = *(ParticleEmitter **)PTR_default_instance__007e4cf0;
  if (*(long *)(this + 0x10) != 0) {
    pPVar1 = this;
  }
  google::protobuf::internal::WireFormatLite::WriteMessage
            (7,*(MessageLite **)(pPVar1 + 0x10),param_1);
  return;
}



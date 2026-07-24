/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004237b0
 * Function: Caver::Proto::ParticleFieldComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ParticleFieldComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::ParticleFieldComponent::MergePartialFromCodedStream
          (ParticleFieldComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
                    /* catch() { ... } // from try @ 004237f0 with catch @ 004237c0 */
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* try { // try from 004237dc to 005237ef has its CatchHandler @ 00423814 */
      uVar2 = (uint)*pbVar1;
      *(uint *)(param_1 + 0x20) = uVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
                    /* try { // try from 004237f0 to 00523817 has its CatchHandler @ 004237c0 */
      uVar2 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar2;
    }
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
                    /* catch() { ... } // from try @ 004237dc with catch @ 00423814 */
                    /* catch() { ... } // from try @ 004238ec with catch @ 00423818
                       catch() { ... } // from try @ 0042399c with catch @ 00423818 */
    uVar3 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar2);
  } while ((uVar3 & 1) != 0);
  return 0;
}



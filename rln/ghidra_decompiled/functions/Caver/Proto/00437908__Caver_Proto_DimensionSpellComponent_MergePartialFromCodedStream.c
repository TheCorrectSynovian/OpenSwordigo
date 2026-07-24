/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437908
 * Function: Caver::Proto::DimensionSpellComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(DimensionSpellComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionSpellComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::DimensionSpellComponent::MergePartialFromCodedStream
          (DimensionSpellComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
      uVar2 = (uint)*pbVar1;
      *(uint *)(param_1 + 0x20) = uVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
                    /* try { // try from 0043793c to 00537977 has its CatchHandler @ 00437dc4 */
    }
    else {
      uVar2 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar2;
    }
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
    uVar3 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar2);
  } while ((uVar3 & 1) != 0);
                    /* try { // try from 00437978 to 005382c7 has its CatchHandler @ 004373ac */
  return 0;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437614
 * Function: Caver::Proto::DimensionObjectComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(DimensionObjectComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DimensionObjectComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

undefined8 __thiscall
Caver::Proto::DimensionObjectComponent::MergePartialFromCodedStream
          (DimensionObjectComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
                    /* try { // try from 00437638 to 0053763f has its CatchHandler @ 00437fe8 */
      uVar2 = (uint)*pbVar1;
      *(uint *)(param_1 + 0x20) = uVar2;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
    }
    else {
      uVar2 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar2;
                    /* try { // try from 00437664 to 00537673 has its CatchHandler @ 004380bc */
    }
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
    uVar3 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar2);
  } while ((uVar3 & 1) != 0);
  return 0;
}



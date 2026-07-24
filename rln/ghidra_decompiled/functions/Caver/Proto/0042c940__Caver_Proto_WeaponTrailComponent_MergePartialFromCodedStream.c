/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042c940
 * Function: Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(WeaponTrailComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::WeaponTrailComponent::MergePartialFromCodedStream
          (WeaponTrailComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  FloatColor *this_00;
  uint local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 0042c890 with catch @ 0042c944 */
                    /* catch() { ... } // from try @ 0042c844 with catch @ 0042c954 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  do {
    while ((pbVar1 = *(byte **)(param_1 + 8), *(byte **)(param_1 + 0x10) <= pbVar1 ||
           (bVar2 = *pbVar1, (char)bVar2 < '\0'))) {
      uVar4 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      *(uint *)(param_1 + 0x20) = uVar4;
      if (uVar4 != 10) goto LAB_0042c998;
LAB_0042c9d0:
                    /* try { // try from 0042c9d0 to 0052c9d3 has its CatchHandler @ 0042caa8 */
      this_00 = *(FloatColor **)(this + 0x10);
                    /* catch() { ... } // from try @ 0042c9a4 with catch @ 0042c9d8 */
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | 1;
      if (this_00 == (FloatColor *)0x0) {
        this_00 = operator_new(0x20);
                    /* catch() { ... } // from try @ 0042c92c with catch @ 0042c9ec */
        FloatColor::FloatColor(this_00);
                    /* catch() { ... } // from try @ 0042c8bc with catch @ 0042c9f4 */
        *(FloatColor **)(this + 0x10) = this_00;
      }
      pbVar1 = *(byte **)(param_1 + 8);
      if ((*(byte **)(param_1 + 0x10) <= pbVar1) || ((char)*pbVar1 < '\0')) {
                    /* try { // try from 0042ca24 to 0052ca27 has its CatchHandler @ 0042ca44 */
        uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
        if ((uVar6 & 1) != 0) goto LAB_0042ca30;
        goto LAB_0042caac;
      }
      local_4c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar1 + 1;
LAB_0042ca30:
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      if (*(int *)(param_1 + 0x3c) <= iVar5) goto LAB_0042caac;
                    /* catch() { ... } // from try @ 0042ca24 with catch @ 0042ca44 */
      iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
      uVar6 = FloatColor::MergePartialFromCodedStream(this_00,param_1);
                    /* catch() { ... } // from try @ 0042c8ec with catch @ 0042ca60 */
      if (((uVar6 & 1) == 0) || (param_1[0x24] == (CodedInputStream)0x0)) goto LAB_0042caac;
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
                    /* try { // try from 0042ca94 to 0052ca9f has its CatchHandler @ 0042caa8 */
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar7 = 1;
                    /* try { // try from 0042caa0 to 0052cab3 has its CatchHandler @ 0042c7cc */
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
                    /* catch() { ... } // from try @ 0042c9d0 with catch @ 0042caa8
                       catch() { ... } // from try @ 0042ca94 with catch @ 0042caa8 */
LAB_0042cab8:
                    /* try { // try from 0042cac4 to 0052cac7 has its CatchHandler @ 0042cad8 */
        if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar7);
        }
                    /* try { // try from 0042cac8 to 0052caeb has its CatchHandler @ 0042cab4 */
                    /* catch() { ... } // from try @ 0042cac4 with catch @ 0042cad8 */
        return;
      }
    }
    uVar4 = (uint)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar2 == 10) goto LAB_0042c9d0;
LAB_0042c998:
                    /* try { // try from 0042c9a4 to 0052c9a7 has its CatchHandler @ 0042c9d8 */
    if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
                    /* catch() { ... } // from try @ 0042cac8 with catch @ 0042cab4 */
      uVar7 = 1;
      goto LAB_0042cab8;
    }
    uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar4);
  } while ((uVar6 & 1) != 0);
LAB_0042caac:
  uVar7 = 0;
  goto LAB_0042cab8;
}



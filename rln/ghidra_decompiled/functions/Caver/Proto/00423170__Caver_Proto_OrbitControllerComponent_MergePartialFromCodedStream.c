/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423170
 * Function: Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(OrbitControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::OrbitControllerComponent::MergePartialFromCodedStream
          (OrbitControllerComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  Vector3 *this_00;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
LAB_0042319c:
  pbVar1 = *(byte **)(param_1 + 8);
  if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar3 = *pbVar1, (char)bVar3 < '\0')) {
    uVar6 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
    uVar9 = uVar6 & 0xffffffff;
    *(int *)(param_1 + 0x20) = (int)uVar6;
    if ((int)uVar6 != 0) goto LAB_004231dc;
LAB_004233a4:
    uVar7 = 1;
    goto LAB_004233b0;
  }
  uVar9 = (ulong)bVar3;
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
                    /* try { // try from 004231bc to 005231ff has its CatchHandler @ 004231bc
                       catch() { ... } // from try @ 004231bc with catch @ 004231bc
                       catch() { ... } // from try @ 004232e0 with catch @ 004231bc
                       catch() { ... } // from try @ 00423334 with catch @ 004231bc */
  *(byte **)(param_1 + 8) = pbVar1 + 1;
  if (bVar3 == 0) goto LAB_004233a4;
LAB_004231dc:
  iVar5 = (int)(uVar9 >> 3);
  uVar8 = (uint)uVar9;
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      if ((uVar8 & 7) != 5) goto LAB_00423278;
LAB_00423318:
      uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(param_1,&local_4c);
      if ((uVar6 & 1) == 0) goto LAB_004233ac;
                    /* try { // try from 00423330 to 00523333 has its CatchHandler @ 00423350 */
      *(uint *)(this + 0x18) = local_4c;
                    /* try { // try from 00423334 to 00523387 has its CatchHandler @ 004231bc */
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 2;
      pcVar2 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00423330 with catch @ 00423350 */
      if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x1d')) {
        *(char **)(param_1 + 8) = pcVar2 + 1;
        goto LAB_0042335c;
      }
    }
    else {
                    /* try { // try from 00423200 to 00523207 has its CatchHandler @ 00423300 */
      if ((iVar5 == 3) && ((uVar8 & 7) == 5)) {
LAB_0042335c:
        uVar6 = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback
                          (param_1,&local_4c);
        if ((uVar6 & 1) == 0) goto LAB_004233ac;
                    /* catch() { ... } // from try @ 004232dc with catch @ 0042336c */
        *(uint *)(this + 0x1c) = local_4c;
        *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
                    /* try { // try from 00423388 to 005233cb has its CatchHandler @ 00423388
                       catch() { ... } // from try @ 00423388 with catch @ 00423388
                       catch() { ... } // from try @ 00423504 with catch @ 00423388
                       catch() { ... } // from try @ 00423584 with catch @ 00423388 */
        if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0)
           ) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x24] = (CodedInputStream)0x1;
LAB_004233b0:
          if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail(uVar7);
          }
                    /* try { // try from 004233cc to 005233d7 has its CatchHandler @ 0042354c */
          return;
        }
      }
      else {
LAB_00423278:
        if ((uVar8 & 7) == 4) goto LAB_004233a4;
        uVar6 = google::protobuf::internal::WireFormatLite::SkipField(param_1,uVar8);
        if ((uVar6 & 1) == 0) goto LAB_004233ac;
      }
    }
    goto LAB_0042319c;
  }
  if ((uVar8 & 7) != 2) goto LAB_00423278;
  this_00 = *(Vector3 **)(this + 0x10);
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  if (this_00 == (Vector3 *)0x0) {
    this_00 = operator_new(0x20);
    Vector3::Vector3(this_00);
    *(Vector3 **)(this + 0x10) = this_00;
  }
  pbVar1 = *(byte **)(param_1 + 8);
  if ((pbVar1 < *(byte **)(param_1 + 0x10)) && (-1 < (char)*pbVar1)) {
    local_4c = (uint)*pbVar1;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
  }
  else {
    uVar6 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_4c);
    if ((uVar6 & 1) == 0) goto LAB_004233ac;
  }
  iVar5 = *(int *)(param_1 + 0x38);
                    /* try { // try from 004232a4 to 005232ab has its CatchHandler @ 004232fc */
  *(int *)(param_1 + 0x38) = iVar5 + 1;
  if (iVar5 < *(int *)(param_1 + 0x3c)) {
    iVar5 = google::protobuf::io::CodedInputStream::PushLimit(param_1,local_4c);
    uVar6 = Vector3::MergePartialFromCodedStream(this_00,param_1);
    if (((uVar6 & 1) != 0) && (param_1[0x24] != (CodedInputStream)0x0)) {
                    /* try { // try from 004232dc to 005232df has its CatchHandler @ 0042336c */
                    /* try { // try from 004232e0 to 0052332f has its CatchHandler @ 004231bc */
      google::protobuf::io::CodedInputStream::PopLimit(param_1,iVar5);
      if (0 < *(int *)(param_1 + 0x38)) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      }
      pcVar2 = *(char **)(param_1 + 8);
                    /* catch() { ... } // from try @ 004232a4 with catch @ 004232fc */
                    /* catch() { ... } // from try @ 00423200 with catch @ 00423300 */
      if ((pcVar2 < *(char **)(param_1 + 0x10)) && (*pcVar2 == '\x15')) {
        *(char **)(param_1 + 8) = pcVar2 + 1;
        goto LAB_00423318;
      }
      goto LAB_0042319c;
    }
  }
LAB_004233ac:
  uVar7 = 0;
  goto LAB_004233b0;
}



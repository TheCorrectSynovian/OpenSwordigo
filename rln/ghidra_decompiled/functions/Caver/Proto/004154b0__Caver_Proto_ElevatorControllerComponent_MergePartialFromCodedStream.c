/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004154b0
 * Function: Caver::Proto::ElevatorControllerComponent::MergePartialFromCodedStream
 * Signature: undefined __thiscall MergePartialFromCodedStream(ElevatorControllerComponent * this, CodedInputStream * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ElevatorControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*)
    */

void __thiscall
Caver::Proto::ElevatorControllerComponent::MergePartialFromCodedStream
          (ElevatorControllerComponent *this,CodedInputStream *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
LAB_004154d8:
  do {
    pbVar1 = *(byte **)(param_1 + 8);
    if ((*(byte **)(param_1 + 0x10) <= pbVar1) || (bVar2 = *pbVar1, (char)bVar2 < '\0')) {
      uVar5 = google::protobuf::io::CodedInputStream::ReadTagFallback(param_1);
      uVar7 = uVar5 & 0xffffffff;
      *(int *)(param_1 + 0x20) = (int)uVar5;
      if ((int)uVar5 != 0) goto LAB_00415518;
LAB_00415644:
      uVar6 = 1;
      goto LAB_00415650;
    }
    uVar7 = (ulong)bVar2;
    *(uint *)(param_1 + 0x20) = (uint)bVar2;
    *(byte **)(param_1 + 8) = pbVar1 + 1;
    if (bVar2 == 0) goto LAB_00415644;
LAB_00415518:
    iVar4 = (int)(uVar7 >> 3);
    if (iVar4 != 1) {
      if ((iVar4 == 2) && ((uVar7 & 7) == 0)) {
        pbVar9 = *(byte **)(param_1 + 8);
                    /* catch() { ... } // from try @ 00415568 with catch @ 00415538 */
        if (pbVar9 < *(byte **)(param_1 + 0x10)) goto LAB_00415540;
        goto LAB_004155f4;
      }
LAB_00415590:
      if (((uint)uVar7 & 7) == 4) goto LAB_00415644;
      uVar5 = google::protobuf::internal::WireFormatLite::SkipField(param_1,(uint)uVar7);
      if ((uVar5 & 1) == 0) {
LAB_0041564c:
        uVar6 = 0;
        goto LAB_00415650;
      }
      goto LAB_004154d8;
    }
    if ((uVar7 & 7) != 0) goto LAB_00415590;
    pbVar1 = *(byte **)(param_1 + 8);
    pbVar8 = *(byte **)(param_1 + 0x10);
                    /* try { // try from 00415568 to 0051558f has its CatchHandler @ 00415538 */
    if ((pbVar1 < pbVar8) && (-1 < (char)*pbVar1)) {
      pbVar9 = pbVar1 + 1;
      local_3c = (uint)*pbVar1;
      *(byte **)(param_1 + 8) = pbVar9;
    }
    else {
      uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
      if ((uVar5 & 1) == 0) goto LAB_0041564c;
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar8 = *(byte **)(param_1 + 0x10);
    }
    *(uint *)(this + 0xc) = local_3c;
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
    if ((pbVar9 < pbVar8) && (*pbVar9 == 0x10)) {
      pbVar9 = pbVar9 + 1;
      *(byte **)(param_1 + 8) = pbVar9;
      if (pbVar9 < pbVar8) {
LAB_00415540:
        if ((char)*pbVar9 < '\0') goto LAB_004155f4;
        local_3c = (uint)*pbVar9;
                    /* try { // try from 00415554 to 00515567 has its CatchHandler @ 0041558c */
        *(byte **)(param_1 + 8) = pbVar9 + 1;
      }
      else {
LAB_004155f4:
        uVar5 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(param_1,&local_3c);
        if ((uVar5 & 1) == 0) goto LAB_0041564c;
      }
      if (local_3c - 1 < 3) {
        *(uint *)(this + 0x10) = local_3c;
        *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 2;
      }
      if ((*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x2c) != 0))
      {
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
        param_1[0x24] = (CodedInputStream)0x1;
LAB_00415650:
        if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar6);
        }
        return;
      }
    }
  } while( true );
}



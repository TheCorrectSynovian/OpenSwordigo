/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dccfc
 * Function: google::protobuf::internal::ExtensionSet::SwapElements
 * Signature: undefined __thiscall SwapElements(ExtensionSet * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SwapElements(int, int, int) */

void __thiscall
google::protobuf::internal::ExtensionSet::SwapElements
          (ExtensionSet *this,int param_1,int param_2,int param_3)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  ExtensionSet *pEVar6;
  LogMessage *pLVar7;
  long lVar8;
  ExtensionSet *pEVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pEVar1 = this + 8;
  pEVar9 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar9 != (ExtensionSet *)0x0) {
    pEVar6 = pEVar9 + 0x18;
    if (param_1 <= *(int *)(pEVar9 + 0x20)) {
      pEVar2 = pEVar9;
      pEVar6 = pEVar9 + 0x10;
    }
    pEVar9 = *(ExtensionSet **)pEVar6;
  }
  if (pEVar2 != pEVar1) {
    pEVar9 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar9 = pEVar2;
    }
    if (pEVar9 != pEVar1) goto LAB_005dcdbc;
  }
                    /* try { // try from 005dcd7c to 006dcda3 has its CatchHandler @ 005dcfb8 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x215);
  pLVar7 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar7 = (LogMessage *)LogMessage::operator<<(pLVar7,"Index out-of-bounds (field is empty).");
                    /* try { // try from 005dcda4 to 006dcfef has its CatchHandler @ 005dcac0 */
  LogFinisher::operator=(aLStack_60,pLVar7);
  LogMessage::~LogMessage(aLStack_58);
  pEVar9 = pEVar1;
LAB_005dcdbc:
  switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)pEVar9[0x30] * 4)) {
  case 1:
  case 3:
  case 6:
  case 8:
    uVar10 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_2 << 2;
    uVar11 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_3 << 2;
    lVar8 = **(long **)(pEVar9 + 0x28);
    uVar3 = *(undefined4 *)(lVar8 + uVar10);
    *(undefined4 *)(lVar8 + uVar10) = *(undefined4 *)(lVar8 + uVar11);
    *(undefined4 *)(lVar8 + uVar11) = uVar3;
    break;
  case 2:
  case 4:
  case 5:
  case 9:
  case 10:
    uVar10 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_2 << 3;
    uVar11 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_3 << 3;
    lVar8 = **(long **)(pEVar9 + 0x28);
    uVar12 = *(undefined8 *)(lVar8 + uVar10);
    *(undefined8 *)(lVar8 + uVar10) = *(undefined8 *)(lVar8 + uVar11);
    *(undefined8 *)(lVar8 + uVar11) = uVar12;
    break;
  case 7:
    lVar8 = **(long **)(pEVar9 + 0x28);
    uVar4 = *(undefined1 *)(lVar8 + param_2);
    *(undefined1 *)(lVar8 + param_2) = *(undefined1 *)(lVar8 + param_3);
    *(undefined1 *)(lVar8 + param_3) = uVar4;
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



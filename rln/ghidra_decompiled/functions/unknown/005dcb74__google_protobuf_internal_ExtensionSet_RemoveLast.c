/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dcb74
 * Function: google::protobuf::internal::ExtensionSet::RemoveLast
 * Signature: undefined __thiscall RemoveLast(ExtensionSet * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::RemoveLast(int) */

void __thiscall google::protobuf::internal::ExtensionSet::RemoveLast(ExtensionSet *this,int param_1)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  long lVar3;
  ExtensionSet *pEVar4;
  LogMessage *pLVar5;
  long *plVar6;
  ExtensionSet *pEVar7;
  long lVar8;
  LogFinisher aLStack_50 [8];
  LogMessage aLStack_48 [32];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  pEVar1 = this + 8;
  pEVar7 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar7 != (ExtensionSet *)0x0) {
    pEVar4 = pEVar7 + 0x18;
    if (param_1 <= *(int *)(pEVar7 + 0x20)) {
      pEVar2 = pEVar7;
      pEVar4 = pEVar7 + 0x10;
    }
    pEVar7 = *(ExtensionSet **)pEVar4;
  }
  if (pEVar2 != pEVar1) {
    pEVar7 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar7 = pEVar2;
    }
    if (pEVar7 != pEVar1) goto LAB_005dcc28;
  }
  LogMessage::LogMessage(aLStack_48,3,&DAT_00698a0c,0x1ec);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_48,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_50,pLVar5);
  LogMessage::~LogMessage(aLStack_48);
  pEVar7 = pEVar1;
LAB_005dcc28:
                    /* try { // try from 005dcc28 to 006dcc4f has its CatchHandler @ 005dcfc4 */
  switch(*(undefined4 *)(PTR_kFieldTypeToCppTypeMap_007e7828 + (ulong)(byte)pEVar7[0x30] * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(int *)(*(long *)(pEVar7 + 0x28) + 8) = *(int *)(*(long *)(pEVar7 + 0x28) + 8) + -1;
    break;
  case 9:
    plVar6 = *(long **)(pEVar7 + 0x28);
    lVar8 = (long)(int)plVar6[1] + -1;
    *(int *)(plVar6 + 1) = (int)lVar8;
    plVar6 = *(long **)(*plVar6 + lVar8 * 8);
    FUN_00668cb8(plVar6,0,*(undefined8 *)(*plVar6 + -0x18),0);
    break;
  case 10:
    plVar6 = *(long **)(pEVar7 + 0x28);
    lVar8 = (long)(int)plVar6[1] + -1;
                    /* try { // try from 005dcc98 to 006dccbf has its CatchHandler @ 005dcfd0 */
    *(int *)(plVar6 + 1) = (int)lVar8;
    (**(code **)(**(long **)(*plVar6 + lVar8 * 8) + 0x20))();
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dbc20
 * Function: google::protobuf::internal::ExtensionSet::SetRepeatedEnum
 * Signature: undefined __thiscall SetRepeatedEnum(ExtensionSet * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetRepeatedEnum(int, int, int) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetRepeatedEnum
          (ExtensionSet *this,int param_1,int param_2,int param_3)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  long lVar3;
  ExtensionSet *pEVar4;
  LogMessage *pLVar5;
  ExtensionSet *pEVar6;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pEVar1 = this + 8;
                    /* try { // try from 005dbc48 to 006dbc53 has its CatchHandler @ 005dbea0 */
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* try { // try from 005dbc54 to 006dbcf3 has its CatchHandler @ 005db9f0 */
  while (pEVar6 != (ExtensionSet *)0x0) {
    pEVar4 = pEVar6 + 0x18;
    if (param_1 <= *(int *)(pEVar6 + 0x20)) {
      pEVar2 = pEVar6;
      pEVar4 = pEVar6 + 0x10;
    }
    pEVar6 = *(ExtensionSet **)pEVar4;
  }
  if (pEVar2 != pEVar1) {
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005dbce0;
  }
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x141);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005dbce0:
  *(int *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 4) = param_3;
                    /* try { // try from 005dbcf4 to 006dbd0b has its CatchHandler @ 005dbea0 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



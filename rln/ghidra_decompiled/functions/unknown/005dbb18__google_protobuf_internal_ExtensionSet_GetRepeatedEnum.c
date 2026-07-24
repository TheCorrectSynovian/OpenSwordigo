/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dbb18
 * Function: google::protobuf::internal::ExtensionSet::GetRepeatedEnum
 * Signature: undefined __thiscall GetRepeatedEnum(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetRepeatedEnum(int, int) const */

void __thiscall
google::protobuf::internal::ExtensionSet::GetRepeatedEnum
          (ExtensionSet *this,int param_1,int param_2)

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
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
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
    if (pEVar6 != pEVar1) goto LAB_005dbbd4;
  }
                    /* try { // try from 005dbb90 to 006dbb97 has its CatchHandler @ 005dbe9c */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x13a);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 005dbbbc to 006dbbd3 has its CatchHandler @ 005dbea0 */
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005dbbd4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005dbbf8 to 006dbc03 has its CatchHandler @ 005dbeb0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 4));
}



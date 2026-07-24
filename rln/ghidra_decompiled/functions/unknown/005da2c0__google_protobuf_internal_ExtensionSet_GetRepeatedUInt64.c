/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da2c0
 * Function: google::protobuf::internal::ExtensionSet::GetRepeatedUInt64
 * Signature: undefined __thiscall GetRepeatedUInt64(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(int, int) const */

void __thiscall
google::protobuf::internal::ExtensionSet::GetRepeatedUInt64
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
                    /* try { // try from 005da318 to 006da31f has its CatchHandler @ 005da624 */
  if (pEVar2 != pEVar1) {
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005da37c;
  }
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x115);
                    /* try { // try from 005da34c to 006da353 has its CatchHandler @ 005da7b8 */
                    /* try { // try from 005da354 to 006da36b has its CatchHandler @ 005da714 */
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005da37c:
                    /* try { // try from 005da38c to 006da38f has its CatchHandler @ 005da7b8 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8));
}



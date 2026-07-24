/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d97a8
 * Function: google::protobuf::internal::ExtensionSet::SetRepeatedInt64
 * Signature: undefined __thiscall SetRepeatedInt64(ExtensionSet * this, int param_1, int param_2, long param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetRepeatedInt64(int, int, long) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetRepeatedInt64
          (ExtensionSet *this,int param_1,int param_2,long param_3)

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
                    /* catch() { ... } // from try @ 005d977c with catch @ 005d97dc */
  while (pEVar6 != (ExtensionSet *)0x0) {
    pEVar4 = pEVar6 + 0x18;
    if (param_1 <= *(int *)(pEVar6 + 0x20)) {
      pEVar2 = pEVar6;
      pEVar4 = pEVar6 + 0x10;
    }
    pEVar6 = *(ExtensionSet **)pEVar4;
                    /* try { // try from 005d97fc to 006d9823 has its CatchHandler @ 005d982c */
  }
  if (pEVar2 != pEVar1) {
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005d9868;
  }
                    /* try { // try from 005d9824 to 006d982f has its CatchHandler @ 005d9710 */
                    /* catch() { ... } // from try @ 005d97fc with catch @ 005d982c */
                    /* catch() { ... } // from try @ 005d98e0 with catch @ 005d9830 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x113);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
                    /* try { // try from 005d9848 to 006d984f has its CatchHandler @ 005d98ec */
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005d9868:
  *(long *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8) = param_3;
                    /* try { // try from 005d987c to 006d9887 has its CatchHandler @ 005d9894 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005d987c with catch @ 005d9894 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



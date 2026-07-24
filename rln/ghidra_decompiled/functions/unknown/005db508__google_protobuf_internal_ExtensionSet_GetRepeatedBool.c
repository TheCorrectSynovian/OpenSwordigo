/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005db508
 * Function: google::protobuf::internal::ExtensionSet::GetRepeatedBool
 * Signature: undefined __thiscall GetRepeatedBool(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetRepeatedBool(int, int) const */

void __thiscall
google::protobuf::internal::ExtensionSet::GetRepeatedBool
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
                    /* catch() { ... } // from try @ 005daf8c with catch @ 005db554
                       catch() { ... } // from try @ 005db020 with catch @ 005db554 */
    pEVar6 = *(ExtensionSet **)pEVar4;
                    /* catch() { ... } // from try @ 005daec4 with catch @ 005db558
                       catch() { ... } // from try @ 005daf58 with catch @ 005db558 */
  }
  if (pEVar2 != pEVar1) {
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005db5c4;
  }
                    /* try { // try from 005db57c to 006db5fb has its CatchHandler @ 005db604 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x118);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
                    /* catch() { ... } // from try @ 005db1c4 with catch @ 005db5a8 */
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
                    /* catch() { ... } // from try @ 005db184 with catch @ 005db5b4 */
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005db5c4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005db5fc to 006db607 has its CatchHandler @ 005dad60 */
  __stack_chk_fail(*(char *)(**(long **)(pEVar6 + 0x28) + (long)param_2) != '\0');
}



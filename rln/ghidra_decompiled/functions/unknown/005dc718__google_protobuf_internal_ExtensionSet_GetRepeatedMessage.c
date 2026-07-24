/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc718
 * Function: google::protobuf::internal::ExtensionSet::GetRepeatedMessage
 * Signature: undefined __thiscall GetRepeatedMessage(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetRepeatedMessage(int, int) const */

void __thiscall
google::protobuf::internal::ExtensionSet::GetRepeatedMessage
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
                    /* try { // try from 005dc778 to 006dc783 has its CatchHandler @ 005dc478 */
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
                    /* catch() { ... } // from try @ 005dc68c with catch @ 005dc780 */
                    /* catch() { ... } // from try @ 005dc798 with catch @ 005dc784 */
    if (pEVar6 != pEVar1) goto LAB_005dc7d4;
  }
                    /* try { // try from 005dc794 to 006dc797 has its CatchHandler @ 005dc7a8 */
                    /* try { // try from 005dc798 to 006dc7bb has its CatchHandler @ 005dc784 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x1be);
                    /* catch() { ... } // from try @ 005dc794 with catch @ 005dc7a8 */
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005dc7d4:
                    /* catch() { ... } // from try @ 005dc85c with catch @ 005dc7d8
                       catch() { ... } // from try @ 005dc908 with catch @ 005dc7d8 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8));
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d96a0
 * Function: google::protobuf::internal::ExtensionSet::GetRepeatedInt64
 * Signature: undefined __thiscall GetRepeatedInt64(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetRepeatedInt64(int, int) const */

void __thiscall
google::protobuf::internal::ExtensionSet::GetRepeatedInt64
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
  
                    /* try { // try from 005d96b4 to 006d96cf has its CatchHandler @ 005d9604 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005d968c with catch @ 005d96bc */
  pEVar1 = this + 8;
                    /* catch() { ... } // from try @ 005d961c with catch @ 005d96c0 */
  pEVar6 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* try { // try from 005d96d0 to 006d96db has its CatchHandler @ 005d96dc */
  while (pEVar6 != (ExtensionSet *)0x0) {
                    /* catch() { ... } // from try @ 005d96d0 with catch @ 005d96dc */
                    /* try { // try from 005d96e0 to 006d96e3 has its CatchHandler @ 005d96e8 */
    pEVar4 = pEVar6 + 0x18;
    if (param_1 <= *(int *)(pEVar6 + 0x20)) {
      pEVar2 = pEVar6;
      pEVar4 = pEVar6 + 0x10;
    }
                    /* catch() { ... } // from try @ 005d96e0 with catch @ 005d96e8 */
    pEVar6 = *(ExtensionSet **)pEVar4;
  }
  if (pEVar2 != pEVar1) {
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005d975c;
  }
                    /* catch() { ... } // from try @ 005d9780 with catch @ 005d9710
                       catch() { ... } // from try @ 005d9824 with catch @ 005d9710 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x113);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005d975c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005d977c to 006d977f has its CatchHandler @ 005d97dc */
                    /* try { // try from 005d9780 to 006d97fb has its CatchHandler @ 005d9710 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8));
}



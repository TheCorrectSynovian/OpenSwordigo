/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d9198
 * Function: google::protobuf::internal::ExtensionSet::SetRepeatedInt32
 * Signature: undefined __thiscall SetRepeatedInt32(ExtensionSet * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetRepeatedInt32(int, int, int) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetRepeatedInt32
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
  
                    /* try { // try from 005d91a0 to 006d91ab has its CatchHandler @ 005d908c */
                    /* catch() { ... } // from try @ 005d9178 with catch @ 005d91a8 */
                    /* catch() { ... } // from try @ 005d925c with catch @ 005d91ac */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pEVar1 = this + 8;
                    /* try { // try from 005d91c4 to 006d91cb has its CatchHandler @ 005d9268 */
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
                    /* try { // try from 005d91f8 to 006d9203 has its CatchHandler @ 005d9210 */
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
    if (pEVar6 != pEVar1) goto LAB_005d9258;
  }
                    /* catch() { ... } // from try @ 005d91f8 with catch @ 005d9210 */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x112);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
                    /* try { // try from 005d9234 to 006d925b has its CatchHandler @ 005d9264 */
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005d9258:
                    /* try { // try from 005d925c to 006d9277 has its CatchHandler @ 005d91ac */
  *(int *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 4) = param_3;
                    /* catch() { ... } // from try @ 005d9234 with catch @ 005d9264 */
                    /* catch() { ... } // from try @ 005d91c4 with catch @ 005d9268 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* try { // try from 005d9278 to 006d9283 has its CatchHandler @ 005d9284 */
                    /* catch() { ... } // from try @ 005d9278 with catch @ 005d9284 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d9288 to 006d928b has its CatchHandler @ 005d9290 */
  __stack_chk_fail();
}



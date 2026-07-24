/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dc248
 * Function: google::protobuf::internal::ExtensionSet::MutableRepeatedString
 * Signature: undefined __thiscall MutableRepeatedString(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::MutableRepeatedString(int, int) */

void __thiscall
google::protobuf::internal::ExtensionSet::MutableRepeatedString
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
  
                    /* catch() { ... } // from try @ 005dc004 with catch @ 005dc25c */
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
                    /* try { // try from 005dc2a8 to 006dc2ef has its CatchHandler @ 005dbf44 */
                    /* catch() { ... } // from try @ 005dc188 with catch @ 005dc2ac */
    pEVar6 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar6 = pEVar2;
    }
                    /* catch() { ... } // from try @ 005dc158 with catch @ 005dc2b0 */
                    /* catch() { ... } // from try @ 005dbf7c with catch @ 005dc2b4 */
    if (pEVar6 != pEVar1) goto LAB_005dc304;
  }
                    /* catch() { ... } // from try @ 005dc080 with catch @ 005dc2c8
                       catch() { ... } // from try @ 005dc114 with catch @ 005dc2c8 */
                    /* catch() { ... } // from try @ 005dbfb8 with catch @ 005dc2cc
                       catch() { ... } // from try @ 005dc04c with catch @ 005dc2cc */
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x17e);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 005dc2f0 to 006dc317 has its CatchHandler @ 005dc320 */
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005dc304:
                    /* try { // try from 005dc318 to 006dc323 has its CatchHandler @ 005dbf44 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 005dc230 with catch @ 005dc320
                       catch() { ... } // from try @ 005dc2f0 with catch @ 005dc320 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8));
}



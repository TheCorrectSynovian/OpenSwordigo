/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da3c8
 * Function: google::protobuf::internal::ExtensionSet::SetRepeatedUInt64
 * Signature: undefined __thiscall SetRepeatedUInt64(ExtensionSet * this, int param_1, int param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetRepeatedUInt64(int, int, unsigned long) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetRepeatedUInt64
          (ExtensionSet *this,int param_1,int param_2,ulong param_3)

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
  
                    /* try { // try from 005da3c8 to 006da3cf has its CatchHandler @ 005da6fc */
                    /* try { // try from 005da3dc to 006da45f has its CatchHandler @ 005da898 */
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
    if (pEVar6 != pEVar1) goto LAB_005da488;
  }
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x115);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
                    /* try { // try from 005da464 to 006da46b has its CatchHandler @ 005da6f8 */
                    /* try { // try from 005da46c to 006da47f has its CatchHandler @ 005da6f4 */
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
  LogFinisher::operator=(aLStack_60,pLVar5);
                    /* try { // try from 005da480 to 006da493 has its CatchHandler @ 005da760 */
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005da488:
  *(ulong *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8) = param_3;
                    /* try { // try from 005da4a0 to 006da4af has its CatchHandler @ 005da6c0 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



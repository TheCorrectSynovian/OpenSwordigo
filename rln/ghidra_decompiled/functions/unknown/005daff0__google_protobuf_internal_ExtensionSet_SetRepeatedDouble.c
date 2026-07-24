/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005daff0
 * Function: google::protobuf::internal::ExtensionSet::SetRepeatedDouble
 * Signature: undefined __thiscall SetRepeatedDouble(ExtensionSet * this, int param_1, int param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::SetRepeatedDouble(int, int, double) */

void __thiscall
google::protobuf::internal::ExtensionSet::SetRepeatedDouble
          (ExtensionSet *this,int param_1,int param_2,double param_3)

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
                    /* try { // try from 005db020 to 006db047 has its CatchHandler @ 005db554 */
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
                    /* try { // try from 005db064 to 006db073 has its CatchHandler @ 005db4c8 */
    if (pEVar6 != pEVar1) goto LAB_005db0b4;
  }
  LogMessage::LogMessage(aLStack_58,3,&DAT_00698a0c,0x117);
  pLVar5 = (LogMessage *)
           LogMessage::operator<<(aLStack_58,"CHECK failed: iter != extensions_.end(): ");
                    /* try { // try from 005db094 to 006db0a3 has its CatchHandler @ 005db4c4 */
  pLVar5 = (LogMessage *)LogMessage::operator<<(pLVar5,"Index out-of-bounds (field is empty).");
                    /* try { // try from 005db0a4 to 006db183 has its CatchHandler @ 005dad60 */
  LogFinisher::operator=(aLStack_60,pLVar5);
  LogMessage::~LogMessage(aLStack_58);
  pEVar6 = pEVar1;
LAB_005db0b4:
  *(double *)(**(long **)(pEVar6 + 0x28) + (long)param_2 * 8) = param_3;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



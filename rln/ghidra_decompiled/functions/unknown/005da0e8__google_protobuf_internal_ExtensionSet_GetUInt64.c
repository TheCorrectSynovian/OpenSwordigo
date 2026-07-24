/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005da0e8
 * Function: google::protobuf::internal::ExtensionSet::GetUInt64
 * Signature: undefined __thiscall GetUInt64(ExtensionSet * this, int param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetUInt64(int, unsigned long) const */

ulong __thiscall
google::protobuf::internal::ExtensionSet::GetUInt64(ExtensionSet *this,int param_1,ulong param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar4 != (ExtensionSet *)0x0) {
    pEVar3 = pEVar4 + 0x18;
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      pEVar2 = pEVar4;
      pEVar3 = pEVar4 + 0x10;
    }
    pEVar4 = *(ExtensionSet **)pEVar3;
  }
  if (pEVar2 != pEVar1) {
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
                    /* try { // try from 005da12c to 006da133 has its CatchHandler @ 005da75c */
                    /* try { // try from 005da134 to 006da147 has its CatchHandler @ 005da758 */
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
                    /* try { // try from 005da148 to 006da1ab has its CatchHandler @ 005da834 */
      return *(ulong *)(pEVar4 + 0x28);
    }
  }
  return param_2;
}



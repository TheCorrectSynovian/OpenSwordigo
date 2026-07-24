/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8d4c
 * Function: google::protobuf::internal::ExtensionSet::GetInt32
 * Signature: undefined __thiscall GetInt32(ExtensionSet * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetInt32(int, int) const */

int __thiscall
google::protobuf::internal::ExtensionSet::GetInt32(ExtensionSet *this,int param_1,int param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* catch() { ... } // from try @ 005d8e04 with catch @ 005d8d54 */
  while (pEVar4 != (ExtensionSet *)0x0) {
                    /* try { // try from 005d8d6c to 006d8d73 has its CatchHandler @ 005d8e10 */
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
    if ((pEVar4 != pEVar1) && (pEVar4[0x32] == (ExtensionSet)0x0)) {
      return *(int *)(pEVar4 + 0x28);
    }
  }
                    /* try { // try from 005d8da0 to 006d8dab has its CatchHandler @ 005d8db8 */
  return param_2;
}



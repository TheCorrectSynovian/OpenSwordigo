/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8a18
 * Function: google::protobuf::internal::ExtensionSet::Has
 * Signature: undefined __thiscall Has(ExtensionSet * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Has(int) const */

bool __thiscall google::protobuf::internal::ExtensionSet::Has(ExtensionSet *this,int param_1)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* catch() { ... } // from try @ 005d89c0 with catch @ 005d8a20 */
  while (pEVar4 != (ExtensionSet *)0x0) {
    pEVar3 = pEVar4 + 0x18;
    if (param_1 <= *(int *)(pEVar4 + 0x20)) {
      pEVar2 = pEVar4;
      pEVar3 = pEVar4 + 0x10;
    }
                    /* try { // try from 005d8a40 to 006d8a67 has its CatchHandler @ 005d8a70 */
    pEVar4 = *(ExtensionSet **)pEVar3;
  }
  if (pEVar2 != pEVar1) {
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
    if (pEVar4 != pEVar1) {
                    /* try { // try from 005d8a68 to 006d8a73 has its CatchHandler @ 005d8954 */
                    /* catch() { ... } // from try @ 005d8a40 with catch @ 005d8a70 */
      return pEVar4[0x32] == (ExtensionSet)0x0;
    }
    return false;
  }
                    /* catch() { ... } // from try @ 005d8b24 with catch @ 005d8a74 */
  return false;
}



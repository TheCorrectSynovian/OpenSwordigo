/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d94c8
 * Function: google::protobuf::internal::ExtensionSet::GetInt64
 * Signature: undefined __thiscall GetInt64(ExtensionSet * this, int param_1, long param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::GetInt64(int, long) const */

long __thiscall
google::protobuf::internal::ExtensionSet::GetInt64(ExtensionSet *this,int param_1,long param_2)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  ExtensionSet *pEVar4;
  
  pEVar1 = this + 8;
  pEVar4 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
  while (pEVar4 != (ExtensionSet *)0x0) {
                    /* catch() { ... } // from try @ 005d9554 with catch @ 005d94e4
                       catch() { ... } // from try @ 005d95f8 with catch @ 005d94e4 */
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
      return *(long *)(pEVar4 + 0x28);
    }
  }
  return param_2;
}



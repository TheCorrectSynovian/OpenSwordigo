/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8bb4
 * Function: google::protobuf::internal::ExtensionSet::ClearExtension
 * Signature: undefined __thiscall ClearExtension(ExtensionSet * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ClearExtension(int) */

void __thiscall
google::protobuf::internal::ExtensionSet::ClearExtension(ExtensionSet *this,int param_1)

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
                    /* try { // try from 005d8bec to 006d8bef has its CatchHandler @ 005d8c4c */
                    /* try { // try from 005d8bf0 to 006d8c6b has its CatchHandler @ 005d8b80 */
    pEVar4 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar4 = pEVar2;
    }
    if (pEVar4 != pEVar1) {
      Extension::Clear((Extension *)(pEVar4 + 0x28));
      return;
    }
  }
  return;
}



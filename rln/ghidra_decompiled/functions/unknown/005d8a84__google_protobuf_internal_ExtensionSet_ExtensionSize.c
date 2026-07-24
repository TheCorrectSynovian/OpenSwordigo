/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8a84
 * Function: google::protobuf::internal::ExtensionSet::ExtensionSize
 * Signature: undefined __thiscall ExtensionSize(ExtensionSet * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ExtensionSize(int) const */

undefined8 __thiscall
google::protobuf::internal::ExtensionSet::ExtensionSize(ExtensionSet *this,int param_1)

{
  ExtensionSet *pEVar1;
  ExtensionSet *pEVar2;
  ExtensionSet *pEVar3;
  undefined8 uVar4;
  ExtensionSet *pEVar5;
  
  pEVar1 = this + 8;
  pEVar5 = *(ExtensionSet **)(this + 0x10);
  pEVar2 = pEVar1;
                    /* try { // try from 005d8a8c to 006d8a93 has its CatchHandler @ 005d8b30 */
  while (pEVar5 != (ExtensionSet *)0x0) {
    pEVar3 = pEVar5 + 0x18;
    if (param_1 <= *(int *)(pEVar5 + 0x20)) {
      pEVar2 = pEVar5;
      pEVar3 = pEVar5 + 0x10;
    }
    pEVar5 = *(ExtensionSet **)pEVar3;
  }
  if (pEVar2 != pEVar1) {
                    /* try { // try from 005d8ac0 to 006d8acb has its CatchHandler @ 005d8ad8 */
    pEVar5 = pEVar1;
    if (*(int *)(pEVar2 + 0x20) <= param_1) {
      pEVar5 = pEVar2;
    }
    if (pEVar5 != pEVar1) {
      uVar4 = Extension::GetSize((Extension *)(pEVar5 + 0x28));
      return uVar4;
    }
  }
                    /* catch() { ... } // from try @ 005d8ac0 with catch @ 005d8ad8 */
  return 0;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005df878
 * Function: google::protobuf::internal::ExtensionSet::ByteSize
 * Signature: undefined __thiscall ByteSize(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ByteSize() const */

int __thiscall google::protobuf::internal::ExtensionSet::ByteSize(ExtensionSet *this)

{
  int iVar1;
  int iVar2;
  ExtensionSet *pEVar3;
  
  pEVar3 = *(ExtensionSet **)(this + 0x18);
  if (pEVar3 == this + 8) {
    iVar2 = 0;
  }
  else {
                    /* try { // try from 005df898 to 006df8b7 has its CatchHandler @ 005df898
                       catch() { ... } // from try @ 005df898 with catch @ 005df898
                       catch() { ... } // from try @ 005df8c0 with catch @ 005df898
                       catch() { ... } // from try @ 005df8f0 with catch @ 005df898 */
    iVar2 = 0;
    do {
      iVar1 = Extension::ByteSize((Extension *)(pEVar3 + 0x28),*(int *)(pEVar3 + 0x20));
      iVar2 = iVar1 + iVar2;
      pEVar3 = (ExtensionSet *)FUN_0064c6a0(pEVar3);
                    /* try { // try from 005df8b8 to 006df8bf has its CatchHandler @ 005df8d8 */
    } while (pEVar3 != this + 8);
  }
                    /* catch() { ... } // from try @ 005df8b8 with catch @ 005df8d8 */
  return iVar2;
}



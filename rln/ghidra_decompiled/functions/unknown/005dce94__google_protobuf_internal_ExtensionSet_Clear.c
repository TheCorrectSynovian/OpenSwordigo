/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005dce94
 * Function: google::protobuf::internal::ExtensionSet::Clear
 * Signature: undefined __thiscall Clear(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::Clear() */

void __thiscall google::protobuf::internal::ExtensionSet::Clear(ExtensionSet *this)

{
  ExtensionSet *pEVar1;
  
  for (pEVar1 = *(ExtensionSet **)(this + 0x18); pEVar1 != this + 8;
      pEVar1 = (ExtensionSet *)FUN_0064c640(pEVar1)) {
    Extension::Clear((Extension *)(pEVar1 + 0x28));
  }
  return;
}



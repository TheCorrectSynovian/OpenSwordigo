/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d87a8
 * Function: google::protobuf::internal::ExtensionSet::ExtensionSet
 * Signature: undefined __thiscall ExtensionSet(ExtensionSet * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionSet::ExtensionSet() */

void __thiscall google::protobuf::internal::ExtensionSet::ExtensionSet(ExtensionSet *this)

{
  ExtensionSet *pEVar1;
  
                    /* try { // try from 005d87a8 to 006d87b7 has its CatchHandler @ 005d87b8 */
  pEVar1 = this + 8;
  *(undefined8 *)pEVar1 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(ExtensionSet **)(this + 0x18) = pEVar1;
  *(ExtensionSet **)(this + 0x20) = pEVar1;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}



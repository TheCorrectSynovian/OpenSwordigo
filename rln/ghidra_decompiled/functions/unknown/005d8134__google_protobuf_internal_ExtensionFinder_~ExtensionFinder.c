/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d8134
 * Function: google::protobuf::internal::ExtensionFinder::~ExtensionFinder
 * Signature: undefined __thiscall ~ExtensionFinder(ExtensionFinder * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::ExtensionFinder::~ExtensionFinder() */

void __thiscall google::protobuf::internal::ExtensionFinder::~ExtensionFinder(ExtensionFinder *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
                    /* try { // try from 005d8134 to 006d8157 has its CatchHandler @ 005d8458 */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x5d8138);
  (*pcVar1)();
}



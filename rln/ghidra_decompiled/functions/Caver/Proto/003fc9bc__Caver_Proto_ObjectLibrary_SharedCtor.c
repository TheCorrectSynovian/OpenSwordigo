/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc9bc
 * Function: Caver::Proto::ObjectLibrary::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ObjectLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLibrary::SharedCtor() */

void __thiscall Caver::Proto::ObjectLibrary::SharedCtor(ObjectLibrary *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_name__007e6d40;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}



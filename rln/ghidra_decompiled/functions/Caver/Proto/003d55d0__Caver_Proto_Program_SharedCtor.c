/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d55d0
 * Function: Caver::Proto::Program::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Program * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::SharedCtor() */

void __thiscall Caver::Proto::Program::SharedCtor(Program *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e7d20;
  puVar1 = PTR__default_bytes__007e7070;
  *(undefined **)(this + 0x18) = PTR__default_string__007e54d8;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



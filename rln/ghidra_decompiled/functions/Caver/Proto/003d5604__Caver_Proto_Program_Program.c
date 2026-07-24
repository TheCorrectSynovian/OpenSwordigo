/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5604
 * Function: Caver::Proto::Program::Program
 * Signature: undefined __thiscall Program(Program * this, Program * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::Program(Caver::Proto::Program const&) */

void __thiscall Caver::Proto::Program::Program(Program *this,Program *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e61c0;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_name__007e7d20;
  puVar1 = PTR__default_string__007e54d8;
  *(undefined **)(this + 0x20) = PTR__default_bytes__007e7070;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar3;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ebf5c
 * Function: Caver::Proto::StateProperties::StateProperties
 * Signature: undefined __thiscall StateProperties(StateProperties * this, StateProperties * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&) */

void __thiscall
Caver::Proto::StateProperties::StateProperties(StateProperties *this,StateProperties *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6290 + 0x10;
  *(StateProperties **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1;
  *(undefined4 *)(this + 0x48) = 0;
  MergeFrom(this,param_1);
  return;
}



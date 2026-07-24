/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040cb4c
 * Function: Caver::Proto::DamageComponent::DamageComponent
 * Signature: undefined __thiscall DamageComponent(DamageComponent * this, DamageComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::DamageComponent(Caver::Proto::DamageComponent const&) */

void __thiscall
Caver::Proto::DamageComponent::DamageComponent(DamageComponent *this,DamageComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7a18;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x15) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x28) = 0x100;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x2c) = 0;
  MergeFrom(this,param_1);
  return;
}



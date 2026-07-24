/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00363e64
 * Function: Caver::DamageComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(DamageComponent * this, DamageComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::InitWithComponent(Caver::DamageComponent const*) */

void __thiscall
Caver::DamageComponent::InitWithComponent(DamageComponent *this,DamageComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0xa4);
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 0xac);
  *(undefined8 *)(this + 0xa4) = uVar1;
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  this[0xd0] = param_1[0xd0];
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  this[0xa0] = param_1[0xa0];
  this[0xd1] = param_1[0xd1];
  return;
}



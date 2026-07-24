/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037ded8
 * Function: Caver::PhysicsObjectComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PhysicsObjectComponent * this, PhysicsObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsObjectComponent::InitWithComponent(Caver::PhysicsObjectComponent const*) */

void __thiscall
Caver::PhysicsObjectComponent::InitWithComponent
          (PhysicsObjectComponent *this,PhysicsObjectComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  this[0x70] = param_1[0x70];
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  this[0xed] = param_1[0xed];
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  return;
}



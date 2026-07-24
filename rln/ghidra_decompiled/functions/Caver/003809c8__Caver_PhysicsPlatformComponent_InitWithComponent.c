/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003809c8
 * Function: Caver::PhysicsPlatformComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PhysicsPlatformComponent * this, PhysicsPlatformComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PhysicsPlatformComponent::InitWithComponent(Caver::PhysicsPlatformComponent const*) */

void __thiscall
Caver::PhysicsPlatformComponent::InitWithComponent
          (PhysicsPlatformComponent *this,PhysicsPlatformComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
  *(undefined8 *)(this + 0x94) = uVar1;
  return;
}



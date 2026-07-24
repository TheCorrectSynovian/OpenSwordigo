/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1d48
 * Function: Caver::FireEmitterComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(FireEmitterComponent * this, FireEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireEmitterComponent::InitWithComponent(Caver::FireEmitterComponent const*) */

void __thiscall
Caver::FireEmitterComponent::InitWithComponent
          (FireEmitterComponent *this,FireEmitterComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  return;
}



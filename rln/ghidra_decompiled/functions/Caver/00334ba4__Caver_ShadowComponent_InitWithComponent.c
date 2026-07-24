/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00334ba4
 * Function: Caver::ShadowComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ShadowComponent * this, ShadowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShadowComponent::InitWithComponent(Caver::ShadowComponent const*) */

void __thiscall
Caver::ShadowComponent::InitWithComponent(ShadowComponent *this,ShadowComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(this + 0x84) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(this + 0x7c) = uVar1;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321ad8
 * Function: Caver::LightComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(LightComponent * this, LightComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightComponent::InitWithComponent(Caver::LightComponent const*) */

void __thiscall
Caver::LightComponent::InitWithComponent(LightComponent *this,LightComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(this + 0x9c) = *(undefined8 *)(param_1 + 0x9c);
  *(undefined8 *)(this + 0x94) = uVar1;
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  return;
}



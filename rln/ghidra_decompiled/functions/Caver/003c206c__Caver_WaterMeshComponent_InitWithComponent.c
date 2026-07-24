/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c206c
 * Function: Caver::WaterMeshComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(WaterMeshComponent * this, WaterMeshComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::InitWithComponent(Caver::WaterMeshComponent const*) */

void __thiscall
Caver::WaterMeshComponent::InitWithComponent(WaterMeshComponent *this,WaterMeshComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xb0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xc0) = uVar1;
  return;
}



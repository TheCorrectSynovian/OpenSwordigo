/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00326c0c
 * Function: Caver::ModelTransformControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(ModelTransformControllerComponent * this, ModelTransformControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelTransformControllerComponent::InitWithComponent(Caver::ModelTransformControllerComponent
   const*) */

void __thiscall
Caver::ModelTransformControllerComponent::InitWithComponent
          (ModelTransformControllerComponent *this,ModelTransformControllerComponent *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  return;
}



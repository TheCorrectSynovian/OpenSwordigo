/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00403de0
 * Function: Caver::Proto::ModelComponent::Swap
 * Signature: undefined __thiscall Swap(ModelComponent * this, ModelComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::Swap(Caver::Proto::ModelComponent*) */

void __thiscall Caver::Proto::ModelComponent::Swap(ModelComponent *this,ModelComponent *param_1)

{
  undefined4 uVar1;
  ModelComponent MVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    MVar2 = this[0x38];
    this[0x38] = param_1[0x38];
    param_1[0x38] = MVar2;
    uVar3 = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



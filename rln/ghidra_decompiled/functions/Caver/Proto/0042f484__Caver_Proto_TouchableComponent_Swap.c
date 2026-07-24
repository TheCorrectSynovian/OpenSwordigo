/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f484
 * Function: Caver::Proto::TouchableComponent::Swap
 * Signature: undefined __thiscall Swap(TouchableComponent * this, TouchableComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TouchableComponent::Swap(Caver::Proto::TouchableComponent*) */

void __thiscall
Caver::Proto::TouchableComponent::Swap(TouchableComponent *this,TouchableComponent *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined8 *)(this + 8);
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return;
}



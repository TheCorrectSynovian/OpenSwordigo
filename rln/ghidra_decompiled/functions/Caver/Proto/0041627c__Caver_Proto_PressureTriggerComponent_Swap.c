/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041627c
 * Function: Caver::Proto::PressureTriggerComponent::Swap
 * Signature: undefined __thiscall Swap(PressureTriggerComponent * this, PressureTriggerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PressureTriggerComponent::Swap(Caver::Proto::PressureTriggerComponent*) */

void __thiscall
Caver::Proto::PressureTriggerComponent::Swap
          (PressureTriggerComponent *this,PressureTriggerComponent *param_1)

{
  undefined4 uVar1;
  PressureTriggerComponent PVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar3 = *(undefined8 *)(this + 8);
    PVar2 = this[0x10];
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    this[0x10] = param_1[0x10];
    param_1[0x10] = PVar2;
    uVar4 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 004162cc to 005162f3 has its CatchHandler @ 0041653c */
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  return;
}



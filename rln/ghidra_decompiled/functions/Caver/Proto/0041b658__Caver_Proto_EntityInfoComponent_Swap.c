/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b658
 * Function: Caver::Proto::EntityInfoComponent::Swap
 * Signature: undefined __thiscall Swap(EntityInfoComponent * this, EntityInfoComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::Swap(Caver::Proto::EntityInfoComponent*) */

void __thiscall
Caver::Proto::EntityInfoComponent::Swap(EntityInfoComponent *this,EntityInfoComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



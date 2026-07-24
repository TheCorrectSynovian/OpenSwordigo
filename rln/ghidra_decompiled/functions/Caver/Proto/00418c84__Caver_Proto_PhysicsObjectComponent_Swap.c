/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418c84
 * Function: Caver::Proto::PhysicsObjectComponent::Swap
 * Signature: undefined __thiscall Swap(PhysicsObjectComponent * this, PhysicsObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::Swap(Caver::Proto::PhysicsObjectComponent*) */

void __thiscall
Caver::Proto::PhysicsObjectComponent::Swap
          (PhysicsObjectComponent *this,PhysicsObjectComponent *param_1)

{
  undefined4 uVar1;
  PhysicsObjectComponent PVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    PVar2 = this[0xc];
    this[0xc] = param_1[0xc];
    param_1[0xc] = PVar2;
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    PVar2 = this[0x28];
    this[0x28] = param_1[0x28];
    param_1[0x28] = PVar2;
    uVar3 = *(undefined8 *)(this + 0x2c);
    *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(param_1 + 0x2c) = uVar3;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



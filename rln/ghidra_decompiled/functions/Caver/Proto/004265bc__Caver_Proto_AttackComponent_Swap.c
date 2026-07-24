/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004265bc
 * Function: Caver::Proto::AttackComponent::Swap
 * Signature: undefined __thiscall Swap(AttackComponent * this, AttackComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::Swap(Caver::Proto::AttackComponent*) */

void __thiscall Caver::Proto::AttackComponent::Swap(AttackComponent *this,AttackComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x44);
    *(undefined8 *)(this + 0x44) = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)(param_1 + 0x44) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417558
 * Function: Caver::Proto::ProgramComponent::Swap
 * Signature: undefined __thiscall Swap(ProgramComponent * this, ProgramComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::Swap(Caver::Proto::ProgramComponent*) */

void __thiscall
Caver::Proto::ProgramComponent::Swap(ProgramComponent *this,ProgramComponent *param_1)

{
  undefined4 uVar1;
  ProgramComponent PVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    PVar2 = this[0xc];
    this[0xc] = param_1[0xc];
    param_1[0xc] = PVar2;
    PVar2 = this[0xd];
    this[0xd] = param_1[0xd];
    param_1[0xd] = PVar2;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



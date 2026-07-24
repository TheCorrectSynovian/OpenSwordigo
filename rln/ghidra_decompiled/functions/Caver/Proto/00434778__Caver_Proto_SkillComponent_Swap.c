/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434778
 * Function: Caver::Proto::SkillComponent::Swap
 * Signature: undefined __thiscall Swap(SkillComponent * this, SkillComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SkillComponent::Swap(Caver::Proto::SkillComponent*) */

void __thiscall Caver::Proto::SkillComponent::Swap(SkillComponent *this,SkillComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}



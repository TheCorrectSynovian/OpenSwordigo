/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382584
 * Function: Caver::FireBreathComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(FireBreathComponent * this, FireBreathComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FireBreathComponent::InitWithComponent(Caver::FireBreathComponent const*) */

void __thiscall
Caver::FireBreathComponent::InitWithComponent
          (FireBreathComponent *this,FireBreathComponent *param_1)

{
  undefined8 uVar1;
  
  SpellComponent::InitWithComponent((SpellComponent *)this,(SpellComponent *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0xf0) = uVar1;
  return;
}



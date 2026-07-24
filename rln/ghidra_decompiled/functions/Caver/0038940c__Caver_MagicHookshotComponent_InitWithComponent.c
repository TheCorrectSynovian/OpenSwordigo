/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038940c
 * Function: Caver::MagicHookshotComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MagicHookshotComponent * this, MagicHookshotComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::InitWithComponent(Caver::MagicHookshotComponent const*) */

void __thiscall
Caver::MagicHookshotComponent::InitWithComponent
          (MagicHookshotComponent *this,MagicHookshotComponent *param_1)

{
  undefined8 uVar1;
  
  SpellComponent::InitWithComponent((SpellComponent *)this,(SpellComponent *)param_1);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  uVar1 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(this + 0x128) = uVar1;
  return;
}



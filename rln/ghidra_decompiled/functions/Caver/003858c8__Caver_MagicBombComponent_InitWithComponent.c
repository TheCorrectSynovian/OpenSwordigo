/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003858c8
 * Function: Caver::MagicBombComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MagicBombComponent * this, MagicBombComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBombComponent::InitWithComponent(Caver::MagicBombComponent const*) */

void __thiscall
Caver::MagicBombComponent::InitWithComponent(MagicBombComponent *this,MagicBombComponent *param_1)

{
  undefined8 uVar1;
  
  SpellComponent::InitWithComponent((SpellComponent *)this,(SpellComponent *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(this + 0xd0) = uVar1;
  return;
}



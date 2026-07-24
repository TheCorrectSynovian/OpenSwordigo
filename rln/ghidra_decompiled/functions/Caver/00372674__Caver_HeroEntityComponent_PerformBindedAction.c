/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00372674
 * Function: Caver::HeroEntityComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(HeroEntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::HeroEntityComponent::PerformBindedAction(int) */

void __thiscall
Caver::HeroEntityComponent::PerformBindedAction(HeroEntityComponent *this,int param_1)

{
  EntityComponent::PerformBindedAction((int)this + -0x10);
  return;
}



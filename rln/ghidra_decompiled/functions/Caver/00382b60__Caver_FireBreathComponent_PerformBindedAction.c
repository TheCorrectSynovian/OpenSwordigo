/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00382b60
 * Function: Caver::FireBreathComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(FireBreathComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::FireBreathComponent::PerformBindedAction(int) */

void __thiscall
Caver::FireBreathComponent::PerformBindedAction(FireBreathComponent *this,int param_1)

{
  SpellComponent::PerformBindedAction((int)this + -0x10);
  return;
}



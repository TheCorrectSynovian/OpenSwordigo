/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385db8
 * Function: Caver::MagicBombComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(MagicBombComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicBombComponent::PerformBindedAction(int) */

void __thiscall Caver::MagicBombComponent::PerformBindedAction(MagicBombComponent *this,int param_1)

{
  SpellComponent::PerformBindedAction((int)this + -0x10);
  return;
}



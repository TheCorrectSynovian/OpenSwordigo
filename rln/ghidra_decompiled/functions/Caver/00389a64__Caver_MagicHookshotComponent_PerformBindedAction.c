/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389a64
 * Function: Caver::MagicHookshotComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(MagicHookshotComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicHookshotComponent::PerformBindedAction(int) */

void __thiscall
Caver::MagicHookshotComponent::PerformBindedAction(MagicHookshotComponent *this,int param_1)

{
  SpellComponent::PerformBindedAction((int)this + -0x10);
  return;
}



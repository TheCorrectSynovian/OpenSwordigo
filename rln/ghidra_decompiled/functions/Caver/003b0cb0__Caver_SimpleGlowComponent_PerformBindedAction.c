/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b0cb0
 * Function: Caver::SimpleGlowComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(SimpleGlowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SimpleGlowComponent::PerformBindedAction(int) */

void __thiscall
Caver::SimpleGlowComponent::PerformBindedAction(SimpleGlowComponent *this,int param_1)

{
  GlowComponent::PerformBindedAction((int)this + -0x10);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cb37c
 * Function: Caver::WeaponGlowComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(WeaponGlowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WeaponGlowComponent::PerformBindedAction(int) */

void __thiscall
Caver::WeaponGlowComponent::PerformBindedAction(WeaponGlowComponent *this,int param_1)

{
  GlowComponent::PerformBindedAction((int)this + -0x10);
  return;
}



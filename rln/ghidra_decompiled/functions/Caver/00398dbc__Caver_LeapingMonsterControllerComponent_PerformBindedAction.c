/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398dbc
 * Function: Caver::LeapingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(LeapingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::LeapingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::LeapingMonsterControllerComponent::PerformBindedAction
          (LeapingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



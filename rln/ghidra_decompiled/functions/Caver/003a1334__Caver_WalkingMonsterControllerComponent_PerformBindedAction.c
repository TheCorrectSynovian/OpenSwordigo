/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1334
 * Function: Caver::WalkingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(WalkingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::WalkingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::WalkingMonsterControllerComponent::PerformBindedAction
          (WalkingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



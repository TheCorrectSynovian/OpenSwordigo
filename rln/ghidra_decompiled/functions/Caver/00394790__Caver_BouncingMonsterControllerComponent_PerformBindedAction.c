/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394790
 * Function: Caver::BouncingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(BouncingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BouncingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::BouncingMonsterControllerComponent::PerformBindedAction
          (BouncingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



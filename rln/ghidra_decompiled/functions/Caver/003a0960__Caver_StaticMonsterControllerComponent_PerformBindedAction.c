/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0960
 * Function: Caver::StaticMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(StaticMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::StaticMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::StaticMonsterControllerComponent::PerformBindedAction
          (StaticMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



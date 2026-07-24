/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039dbbc
 * Function: Caver::SkellyMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(SkellyMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SkellyMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::SkellyMonsterControllerComponent::PerformBindedAction
          (SkellyMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



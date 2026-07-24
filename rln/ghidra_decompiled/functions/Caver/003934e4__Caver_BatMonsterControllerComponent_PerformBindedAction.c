/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003934e4
 * Function: Caver::BatMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(BatMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BatMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::BatMonsterControllerComponent::PerformBindedAction
          (BatMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



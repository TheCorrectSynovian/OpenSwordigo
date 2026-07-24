/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395e38
 * Function: Caver::ChargingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(ChargingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ChargingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::ChargingMonsterControllerComponent::PerformBindedAction
          (ChargingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



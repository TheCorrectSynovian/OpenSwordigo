/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c6e4
 * Function: Caver::ShootingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(ShootingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ShootingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::ShootingMonsterControllerComponent::PerformBindedAction
          (ShootingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



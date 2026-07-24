/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bf1c
 * Function: Caver::ProjectileMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(ProjectileMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::ProjectileMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::ProjectileMonsterControllerComponent::PerformBindedAction
          (ProjectileMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



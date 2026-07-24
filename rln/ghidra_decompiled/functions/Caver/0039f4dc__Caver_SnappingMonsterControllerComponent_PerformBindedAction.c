/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f4dc
 * Function: Caver::SnappingMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(SnappingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SnappingMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::SnappingMonsterControllerComponent::PerformBindedAction
          (SnappingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



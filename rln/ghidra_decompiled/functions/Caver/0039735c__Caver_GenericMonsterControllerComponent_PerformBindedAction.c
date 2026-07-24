/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039735c
 * Function: Caver::GenericMonsterControllerComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(GenericMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GenericMonsterControllerComponent::PerformBindedAction(int) */

void __thiscall
Caver::GenericMonsterControllerComponent::PerformBindedAction
          (GenericMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::PerformBindedAction((int)this + -0x10);
  return;
}



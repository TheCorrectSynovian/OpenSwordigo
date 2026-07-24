/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037bdb0
 * Function: Caver::MonsterEntityComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(MonsterEntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MonsterEntityComponent::PerformBindedAction(int) */

void __thiscall
Caver::MonsterEntityComponent::PerformBindedAction(MonsterEntityComponent *this,int param_1)

{
  EntityComponent::PerformBindedAction((int)this + -0x10);
  return;
}



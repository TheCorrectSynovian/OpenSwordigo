/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037d92c
 * Function: Caver::MonsterEntityComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(MonsterEntityComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::HandleMessage(int, void*) */

void __thiscall
Caver::MonsterEntityComponent::HandleMessage(MonsterEntityComponent *this,int param_1,void *param_2)

{
  if (param_1 == 0xe) {
    HandleDamageImpact(this,param_2);
  }
  EntityComponent::HandleMessage((EntityComponent *)this,param_1,param_2);
  return;
}



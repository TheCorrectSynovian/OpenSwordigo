/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00342204
 * Function: Caver::Component::RegisterInterface
 * Signature: undefined __thiscall RegisterInterface(Component * this, ComponentManager * param_1, long param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Component::RegisterInterface(Caver::ComponentManager*, long) */

void __thiscall
Caver::Component::RegisterInterface(Component *this,ComponentManager *param_1,long param_2)

{
  ComponentManager::RegisterComponentInterface(param_1,param_2,this);
  return;
}



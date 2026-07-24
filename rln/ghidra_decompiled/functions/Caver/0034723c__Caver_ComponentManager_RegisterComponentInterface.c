/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034723c
 * Function: Caver::ComponentManager::RegisterComponentInterface
 * Signature: undefined __thiscall RegisterComponentInterface(ComponentManager * this, long param_1, Component * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::RegisterComponentInterface(long, Caver::Component*) */

void __thiscall
Caver::ComponentManager::RegisterComponentInterface
          (ComponentManager *this,long param_1,Component *param_2)

{
  ComponentManager *pCVar1;
  ComponentManager *pCVar2;
  ComponentManager *pCVar3;
  ComponentCollection *this_00;
  ComponentManager *pCVar4;
  
  pCVar1 = this + 8;
  pCVar4 = *(ComponentManager **)(this + 0x10);
  pCVar2 = pCVar1;
  while (pCVar4 != (ComponentManager *)0x0) {
    pCVar3 = pCVar4 + 0x18;
    if (param_1 <= *(long *)(pCVar4 + 0x20)) {
      pCVar2 = pCVar4;
      pCVar3 = pCVar4 + 0x10;
    }
    pCVar4 = *(ComponentManager **)pCVar3;
  }
  if (pCVar2 != pCVar1) {
    pCVar4 = pCVar1;
    if (*(long *)(pCVar2 + 0x20) <= param_1) {
      pCVar4 = pCVar2;
    }
    if (pCVar4 != pCVar1) {
      this_00 = (ComponentCollection *)ComponentCollectionForInterface(this,param_1);
      ComponentCollection::AddComponent(this_00,param_2);
      return;
    }
  }
  return;
}



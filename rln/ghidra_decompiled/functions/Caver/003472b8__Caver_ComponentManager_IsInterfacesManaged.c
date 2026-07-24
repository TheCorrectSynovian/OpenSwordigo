/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003472b8
 * Function: Caver::ComponentManager::IsInterfacesManaged
 * Signature: undefined __thiscall IsInterfacesManaged(ComponentManager * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::IsInterfacesManaged(long) */

bool __thiscall Caver::ComponentManager::IsInterfacesManaged(ComponentManager *this,long param_1)

{
  ComponentManager *pCVar1;
  ComponentManager *pCVar2;
  ComponentManager *pCVar3;
  ComponentManager *pCVar4;
  ComponentManager *pCVar5;
  
  pCVar5 = *(ComponentManager **)(this + 0x10);
  pCVar1 = this + 8;
  pCVar3 = pCVar1;
  pCVar4 = pCVar1;
  if (pCVar5 != (ComponentManager *)0x0) {
    do {
      pCVar2 = pCVar5 + 0x18;
      if (param_1 <= *(long *)(pCVar5 + 0x20)) {
        pCVar4 = pCVar5;
        pCVar2 = pCVar5 + 0x10;
      }
      pCVar5 = *(ComponentManager **)pCVar2;
    } while (pCVar5 != (ComponentManager *)0x0);
    if ((pCVar4 != pCVar1) && (*(long *)(pCVar4 + 0x20) <= param_1)) {
      pCVar3 = pCVar4;
    }
  }
  return pCVar3 != pCVar1;
}



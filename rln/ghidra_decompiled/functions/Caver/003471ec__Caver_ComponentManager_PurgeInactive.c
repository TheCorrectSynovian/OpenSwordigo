/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003471ec
 * Function: Caver::ComponentManager::PurgeInactive
 * Signature: undefined __thiscall PurgeInactive(ComponentManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::PurgeInactive() */

void __thiscall Caver::ComponentManager::PurgeInactive(ComponentManager *this)

{
  ComponentManager *pCVar1;
  
  for (pCVar1 = *(ComponentManager **)(this + 0x48); this + 0x38 != pCVar1;
      pCVar1 = (ComponentManager *)FUN_0064c640(pCVar1)) {
    if (*(ComponentCollection **)(pCVar1 + 0x28) != (ComponentCollection *)0x0) {
      ComponentCollection::PurgeInactive(*(ComponentCollection **)(pCVar1 + 0x28));
    }
  }
  return;
}



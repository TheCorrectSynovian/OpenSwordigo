/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347174
 * Function: Caver::ComponentManager::ComponentManager
 * Signature: undefined __thiscall ComponentManager(ComponentManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentManager::ComponentManager() */

void __thiscall Caver::ComponentManager::ComponentManager(ComponentManager *this)

{
  ComponentManager *pCVar1;
  
  pCVar1 = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pCVar1 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ComponentManager **)(this + 0x20) = pCVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(ComponentManager **)(this + 0x18) = pCVar1;
  pCVar1 = this + 0x38;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)pCVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(ComponentManager **)(this + 0x48) = pCVar1;
  *(ComponentManager **)(this + 0x50) = pCVar1;
  return;
}



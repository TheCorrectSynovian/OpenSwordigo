/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a5ec4
 * Function: Caver::ProfileManager::ProfileManager
 * Signature: undefined __thiscall ProfileManager(ProfileManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::ProfileManager() */

void __thiscall Caver::ProfileManager::ProfileManager(ProfileManager *this)

{
  ProfileManager *pPVar1;
  
  *(undefined **)this = PTR_vtable_007e7540 + 0x10;
  pPVar1 = this + 0x10;
  *(undefined8 *)pPVar1 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ProfileManager **)(this + 0x20) = pPVar1;
  *(ProfileManager **)(this + 0x28) = pPVar1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  pPVar1 = this + 0x50;
  *(undefined8 *)pPVar1 = 0;
  *(ProfileManager **)(this + 0x60) = pPVar1;
  *(ProfileManager **)(this + 0x68) = pPVar1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x78] = (ProfileManager)0x0;
  *(undefined8 *)(this + 0x80) = 0xc059000000000000;
  return;
}



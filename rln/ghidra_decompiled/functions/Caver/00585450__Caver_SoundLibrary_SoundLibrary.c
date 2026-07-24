/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585450
 * Function: Caver::SoundLibrary::SoundLibrary
 * Signature: undefined __thiscall SoundLibrary(SoundLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::SoundLibrary() */

void __thiscall Caver::SoundLibrary::SoundLibrary(SoundLibrary *this)

{
  SoundLibrary *pSVar1;
  
  pSVar1 = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)pSVar1 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(SoundLibrary **)(this + 0x20) = pSVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(SoundLibrary **)(this + 0x18) = pSVar1;
  pSVar1 = this + 0x38;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)pSVar1 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(SoundLibrary **)(this + 0x48) = pSVar1;
  *(SoundLibrary **)(this + 0x50) = pSVar1;
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8044
 * Function: Caver::Proto::SoundLibrary::SoundLibrary
 * Signature: undefined __thiscall SoundLibrary(SoundLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::SoundLibrary() */

void __thiscall Caver::Proto::SoundLibrary::SoundLibrary(SoundLibrary *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e58e8;
  *(SoundLibrary **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}



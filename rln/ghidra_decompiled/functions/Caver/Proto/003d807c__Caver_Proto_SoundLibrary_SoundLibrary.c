/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d807c
 * Function: Caver::Proto::SoundLibrary::SoundLibrary
 * Signature: undefined __thiscall SoundLibrary(SoundLibrary * this, SoundLibrary * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&) */

void __thiscall Caver::Proto::SoundLibrary::SoundLibrary(SoundLibrary *this,SoundLibrary *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e58e8 + 0x10;
  *(SoundLibrary **)(this + 0x10) = this + 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined **)this = puVar1;
  *(undefined4 *)(this + 0x48) = 0;
  MergeFrom(this,param_1);
  return;
}



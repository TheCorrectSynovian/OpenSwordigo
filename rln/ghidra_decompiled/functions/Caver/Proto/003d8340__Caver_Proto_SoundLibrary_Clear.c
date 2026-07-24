/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d8340
 * Function: Caver::Proto::SoundLibrary::Clear
 * Signature: undefined __thiscall Clear(SoundLibrary * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SoundLibrary::Clear() */

void __thiscall Caver::Proto::SoundLibrary::Clear(SoundLibrary *this)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x10) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}



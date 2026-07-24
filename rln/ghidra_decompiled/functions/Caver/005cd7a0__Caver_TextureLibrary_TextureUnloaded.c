/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd7a0
 * Function: Caver::TextureLibrary::TextureUnloaded
 * Signature: undefined __thiscall TextureUnloaded(TextureLibrary * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::TextureUnloaded(Caver::Texture*) */

void __thiscall Caver::TextureLibrary::TextureUnloaded(TextureLibrary *this,Texture *param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) - *(int *)(param_1 + 0x48);
  return;
}



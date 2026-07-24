/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd780
 * Function: Caver::TextureLibrary::TextureLoaded
 * Signature: undefined __thiscall TextureLoaded(TextureLibrary * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::TextureLoaded(Caver::Texture*) */

void __thiscall Caver::TextureLibrary::TextureLoaded(TextureLibrary *this,Texture *param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    return;
  }
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + *(int *)(param_1 + 0x48);
  PurgeTexturesIfNecessary(this);
  return;
}



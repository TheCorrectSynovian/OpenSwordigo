/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd51c
 * Function: Caver::TextureLibrary::ReloadTextures
 * Signature: undefined __thiscall ReloadTextures(TextureLibrary * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLibrary::ReloadTextures(bool) */

void __thiscall Caver::TextureLibrary::ReloadTextures(TextureLibrary *this,bool param_1)

{
  TextureLibrary *pTVar1;
  
  pTVar1 = *(TextureLibrary **)(this + 0x20);
  this[0x38] = (TextureLibrary)0x1;
  for (; pTVar1 != this + 0x10; pTVar1 = (TextureLibrary *)FUN_0064c640(pTVar1)) {
    if (*(long *)(*(Texture **)(pTVar1 + 0x28) + 0x70) == 0) {
      Texture::Reload(*(Texture **)(pTVar1 + 0x28),param_1);
    }
  }
  return;
}



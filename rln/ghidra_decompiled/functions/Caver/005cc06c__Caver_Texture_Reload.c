/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cc06c
 * Function: Caver::Texture::Reload
 * Signature: undefined __thiscall Reload(Texture * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::Reload(bool) */

void __thiscall Caver::Texture::Reload(Texture *this,bool param_1)

{
  if (*(int *)(this + 0x38) != 0) {
    if (param_1) {
      Unload(this);
    }
    else {
      *(undefined4 *)(this + 0x38) = 0;
    }
    Load(this);
    return;
  }
  return;
}



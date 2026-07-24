/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d252c
 * Function: Caver::Proto::Texture::Texture
 * Signature: undefined __thiscall Texture(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::Texture() */

void __thiscall Caver::Proto::Texture::Texture(Texture *this)

{
  undefined *puVar1;
  
  *(Texture **)(this + 0x20) = this + 0x38;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined **)(this + 0x10) = PTR__default_name__007e5bc0;
  *(undefined4 *)(this + 0x18) = 1;
  puVar1 = PTR_vtable_007e58d8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}



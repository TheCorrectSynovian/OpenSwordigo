/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d25a0
 * Function: Caver::Proto::Texture::Texture
 * Signature: undefined __thiscall Texture(Texture * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::Texture(Caver::Proto::Texture const&) */

void __thiscall Caver::Proto::Texture::Texture(Texture *this,Texture *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e58d8;
  *(undefined4 *)(this + 0x30) = 4;
  puVar2 = PTR__default_name__007e5bc0;
  *(Texture **)(this + 0x20) = this + 0x38;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x68) = 0;
  MergeFrom(this,param_1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d2578
 * Function: Caver::Proto::Texture::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Texture::SharedCtor() */

void __thiscall Caver::Proto::Texture::SharedCtor(Texture *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_name__007e5bc0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}



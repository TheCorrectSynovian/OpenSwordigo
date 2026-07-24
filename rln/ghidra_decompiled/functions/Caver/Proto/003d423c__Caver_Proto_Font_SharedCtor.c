/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d423c
 * Function: Caver::Proto::Font::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::SharedCtor() */

void __thiscall Caver::Proto::Font::SharedCtor(Font *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e6280;
  puVar1 = PTR__default_kerning__007e5500;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x58) = puVar1;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}



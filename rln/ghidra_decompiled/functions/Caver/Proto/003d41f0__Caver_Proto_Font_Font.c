/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d41f0
 * Function: Caver::Proto::Font::Font
 * Signature: undefined __thiscall Font(Font * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font::Font() */

void __thiscall Caver::Proto::Font::Font(Font *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e6808;
  *(Font **)(this + 0x20) = this + 0x38;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined **)(this + 0x58) = PTR__default_kerning__007e5500;
  puVar1 = PTR__default_name__007e6280;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}



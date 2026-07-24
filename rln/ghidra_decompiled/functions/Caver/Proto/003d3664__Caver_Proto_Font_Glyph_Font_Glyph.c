/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d3664
 * Function: Caver::Proto::Font_Glyph::Font_Glyph
 * Signature: undefined __thiscall Font_Glyph(Font_Glyph * this, Font_Glyph * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph const&) */

void __thiscall Caver::Proto::Font_Glyph::Font_Glyph(Font_Glyph *this,Font_Glyph *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7d90;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}



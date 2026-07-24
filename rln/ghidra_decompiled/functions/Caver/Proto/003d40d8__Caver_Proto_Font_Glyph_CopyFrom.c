/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d40d8
 * Function: Caver::Proto::Font_Glyph::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Font_Glyph * this, Font_Glyph * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::CopyFrom(Caver::Proto::Font_Glyph const&) */

void __thiscall Caver::Proto::Font_Glyph::CopyFrom(Font_Glyph *this,Font_Glyph *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}



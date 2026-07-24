/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d386c
 * Function: Caver::Proto::Font_Glyph::~Font_Glyph
 * Signature: undefined __thiscall ~Font_Glyph(Font_Glyph * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::~Font_Glyph() */

void __thiscall Caver::Proto::Font_Glyph::~Font_Glyph(Font_Glyph *this)

{
  *(undefined **)this = PTR_vtable_007e7d90 + 0x10;
  if (*(Font_Glyph **)PTR_default_instance__007e5b90 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d38f0
 * Function: Caver::Proto::Font_Glyph::SharedDtor
 * Signature: undefined __thiscall SharedDtor(Font_Glyph * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Font_Glyph::SharedDtor() */

void __thiscall Caver::Proto::Font_Glyph::SharedDtor(Font_Glyph *this)

{
  if (*(Font_Glyph **)PTR_default_instance__007e5b90 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003d3940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x20) + 8))();
      return;
    }
  }
  return;
}



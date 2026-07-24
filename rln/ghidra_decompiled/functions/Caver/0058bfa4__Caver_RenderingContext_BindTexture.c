/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058bfa4
 * Function: Caver::RenderingContext::BindTexture
 * Signature: undefined __thiscall BindTexture(RenderingContext * this, Texture * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::BindTexture(Caver::Texture*) */

void __thiscall Caver::RenderingContext::BindTexture(RenderingContext *this,Texture *param_1)

{
  if (param_1 == (Texture *)0x0) {
    if (*(int *)(this + 0x104) != 0) {
      glBindTexture(0xde1,0);
      *(undefined4 *)(this + 0x104) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x38) != *(int *)(this + 0x104)) {
    glBindTexture(0xde1);
                    /* try { // try from 0058bfd8 to 0068c02b has its CatchHandler @ 0058bfd8
                       catch() { ... } // from try @ 0058bfd8 with catch @ 0058bfd8
                       catch() { ... } // from try @ 0058c700 with catch @ 0058bfd8
                       catch() { ... } // from try @ 0058ce14 with catch @ 0058bfd8 */
    *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x38);
  }
  return;
}



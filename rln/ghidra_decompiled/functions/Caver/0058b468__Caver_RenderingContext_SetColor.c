/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b468
 * Function: Caver::RenderingContext::SetColor
 * Signature: undefined __thiscall SetColor(RenderingContext * this, Color * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetColor(Caver::Color const&) */

void __thiscall Caver::RenderingContext::SetColor(RenderingContext *this,Color *param_1)

{
  undefined4 uVar1;
  
                    /* catch() { ... } // from try @ 0058a06c with catch @ 0058b47c
                       catch() { ... } // from try @ 0058a080 with catch @ 0058b47c
                       catch() { ... } // from try @ 0058a1fc with catch @ 0058b47c
                       catch() { ... } // from try @ 0058a210 with catch @ 0058b47c
                       catch() { ... } // from try @ 0058a384 with catch @ 0058b47c
                       catch() { ... } // from try @ 0058a398 with catch @ 0058b47c */
  if ((((*(RenderingContext *)param_1 != this[0x77]) ||
       (*(RenderingContext *)(param_1 + 1) != this[0x78])) ||
      (*(RenderingContext *)(param_1 + 2) != this[0x79])) ||
     (*(RenderingContext *)(param_1 + 3) != this[0x7a])) {
    uVar1 = *(undefined4 *)param_1;
    this[0x76] = (RenderingContext)0x1;
    *(undefined4 *)(this + 0x77) = uVar1;
  }
  return;
}



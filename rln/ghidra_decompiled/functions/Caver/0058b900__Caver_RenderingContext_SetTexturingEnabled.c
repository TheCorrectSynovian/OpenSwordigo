/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b900
 * Function: Caver::RenderingContext::SetTexturingEnabled
 * Signature: undefined __thiscall SetTexturingEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetTexturingEnabled(bool) */

void __thiscall Caver::RenderingContext::SetTexturingEnabled(RenderingContext *this,bool param_1)

{
  if (((RenderingContext)param_1 != this[0x71]) &&
     (this[0x71] = (RenderingContext)param_1, *(int *)this == 0)) {
    if (param_1) {
      glEnable(0xde1);
      return;
    }
    glDisable(0xde1);
    return;
  }
  return;
}



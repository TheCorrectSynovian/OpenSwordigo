/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b934
 * Function: Caver::RenderingContext::SetLightingEnabled
 * Signature: undefined __thiscall SetLightingEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetLightingEnabled(bool) */

void __thiscall Caver::RenderingContext::SetLightingEnabled(RenderingContext *this,bool param_1)

{
  if (((RenderingContext)param_1 != this[0x72]) &&
     (this[0x72] = (RenderingContext)param_1, *(int *)this == 0)) {
    if (param_1) {
      glEnable(0xb50);
      return;
    }
    glDisable(0xb50);
    return;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b990
 * Function: Caver::RenderingContext::SetDepthTestEnabled
 * Signature: undefined __thiscall SetDepthTestEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetDepthTestEnabled(bool) */

void __thiscall Caver::RenderingContext::SetDepthTestEnabled(RenderingContext *this,bool param_1)

{
  if ((RenderingContext)param_1 == this[0x74]) {
    return;
  }
  this[0x74] = (RenderingContext)param_1;
  if (param_1) {
    glEnable();
    return;
  }
  glDisable(0xb71);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b8d8
 * Function: Caver::RenderingContext::SetBlendingEnabled
 * Signature: undefined __thiscall SetBlendingEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetBlendingEnabled(bool) */

void __thiscall Caver::RenderingContext::SetBlendingEnabled(RenderingContext *this,bool param_1)

{
  if ((RenderingContext)param_1 == this[0x70]) {
    return;
  }
  this[0x70] = (RenderingContext)param_1;
  if (param_1) {
    glEnable();
    return;
  }
  glDisable(0xbe2);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b9b8
 * Function: Caver::RenderingContext::SetDepthWriteEnabled
 * Signature: undefined __thiscall SetDepthWriteEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetDepthWriteEnabled(bool) */

void __thiscall Caver::RenderingContext::SetDepthWriteEnabled(RenderingContext *this,bool param_1)

{
  if ((RenderingContext)param_1 == this[0x75]) {
    return;
  }
  this[0x75] = (RenderingContext)param_1;
  glDepthMask(param_1);
  return;
}



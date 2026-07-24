/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b968
 * Function: Caver::RenderingContext::SetCullFaceEnabled
 * Signature: undefined __thiscall SetCullFaceEnabled(RenderingContext * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetCullFaceEnabled(bool) */

void __thiscall Caver::RenderingContext::SetCullFaceEnabled(RenderingContext *this,bool param_1)

{
  if ((RenderingContext)param_1 == this[0x73]) {
    return;
  }
  this[0x73] = (RenderingContext)param_1;
  if (param_1) {
    glEnable();
    return;
  }
  glDisable(0xb44);
  return;
}



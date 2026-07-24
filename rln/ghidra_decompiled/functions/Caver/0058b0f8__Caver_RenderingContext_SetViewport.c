/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b0f8
 * Function: Caver::RenderingContext::SetViewport
 * Signature: undefined __thiscall SetViewport(RenderingContext * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::SetViewport(Caver::Rectangle const&) */

void __thiscall Caver::RenderingContext::SetViewport(RenderingContext *this,Rectangle *param_1)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 0058a6d8 with catch @ 0058b0f8 */
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x48) = uVar1;
  glViewport((int)*(float *)(this + 0x48),(int)*(float *)(this + 0x4c),(int)*(float *)(this + 0x50),
             (int)*(float *)(this + 0x54));
  return;
}



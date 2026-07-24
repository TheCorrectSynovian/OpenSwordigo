/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b0f0
 * Function: Caver::RenderingContext::FramebufferForDrawingToTexture
 * Signature: undefined __thiscall FramebufferForDrawingToTexture(RenderingContext * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::FramebufferForDrawingToTexture(boost::intrusive_ptr<Caver::Texture>
   const&) */

void __thiscall
Caver::RenderingContext::FramebufferForDrawingToTexture
          (RenderingContext *this,intrusive_ptr *param_1)

{
  NewFramebufferImplForDrawingToTexture(param_1);
  return;
}



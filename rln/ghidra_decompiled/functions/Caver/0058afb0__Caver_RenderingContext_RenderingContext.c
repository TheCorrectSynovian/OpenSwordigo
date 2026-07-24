/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058afb0
 * Function: Caver::RenderingContext::RenderingContext
 * Signature: undefined __thiscall RenderingContext(RenderingContext * this, RenderingAPI param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::RenderingContext(Caver::RenderingAPI) */

void __thiscall Caver::RenderingContext::RenderingContext(RenderingContext *this,undefined4 param_2)

{
  RenderingContext *pRVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0058aa14 with catch @ 0058afb0 */
  pRVar1 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pRVar1 = 0;
  *(undefined4 *)(this + 0x68) = 1;
  this[0x75] = (RenderingContext)0x1;
  *(undefined4 *)(this + 0x77) = 0xffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = uVar2;
                    /* catch() { ... } // from try @ 0058a9e0 with catch @ 0058b000 */
  this[100] = (RenderingContext)0x0;
                    /* catch() { ... } // from try @ 0058a998 with catch @ 0058b004 */
  *(undefined4 *)(this + 0x60) = 0;
  this[0x74] = (RenderingContext)0x0;
  *(undefined8 *)(this + 0x6c) = 0;
  this[0x76] = (RenderingContext)0x0;
  this[0x80] = (RenderingContext)0x0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(RenderingContext **)(this + 0x20) = pRVar1;
  *(RenderingContext **)(this + 0x28) = pRVar1;
  *(undefined4 *)this = param_2;
  BasicRenderingPrograms::AddToContext(this);
  glBlendFunc(1,0x303);
  return;
}



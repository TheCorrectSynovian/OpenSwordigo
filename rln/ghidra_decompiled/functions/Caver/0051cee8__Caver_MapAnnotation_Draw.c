/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051cee8
 * Function: Caver::MapAnnotation::Draw
 * Signature: undefined __thiscall Draw(MapAnnotation * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapAnnotation::Draw(Caver::RenderingContext*) */

void __thiscall Caver::MapAnnotation::Draw(MapAnnotation *this,RenderingContext *param_1)

{
  RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 0051cf08 to 0061cf1f has its CatchHandler @ 0051cf48 */
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,3);
                    /* try { // try from 0051cf20 to 0061cf67 has its CatchHandler @ 0051cec4 */
  RenderingContext::SetIdentityMatrix(param_1);
  Sprite::Draw((Sprite *)(this + 0xf0),param_1);
  FontText::Draw((FontText *)this,param_1);
  return;
}



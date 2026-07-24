/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9c2c
 * Function: Caver::GUIRoundedRect::Draw
 * Signature: undefined __thiscall Draw(GUIRoundedRect * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::Draw(Caver::RenderingContext*) const */

void __thiscall Caver::GUIRoundedRect::Draw(GUIRoundedRect *this,RenderingContext *param_1)

{
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,3);
                    /* try { // try from 005a9c70 to 006a9c73 has its CatchHandler @ 005a9d10 */
  Sprite::Draw((Sprite *)(this + 0x50),param_1);
  return;
}



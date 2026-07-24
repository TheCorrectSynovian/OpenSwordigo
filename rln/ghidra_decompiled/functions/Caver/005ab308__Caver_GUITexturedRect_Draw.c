/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab308
 * Function: Caver::GUITexturedRect::Draw
 * Signature: undefined __thiscall Draw(GUITexturedRect * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::Draw(Caver::RenderingContext*) const */

void __thiscall Caver::GUITexturedRect::Draw(GUITexturedRect *this,RenderingContext *param_1)

{
  if (*(long *)this != 0) {
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::UseProgram(param_1,1);
    RenderingContext::BindTexture(param_1,*(Texture **)this);
    RenderingContext::SetColor(param_1,(Color *)(this + 0x1c));
    RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0x14,this + 0x20);
                    /* try { // try from 005ab390 to 006ab3db has its CatchHandler @ 005abaf8 */
    RenderingContext::SetVertexAttribPointer(param_1,0x8078,2,0x1406,0x14,this + 0x2c);
    RenderingContext::DrawArrays(param_1,5,0,4);
    return;
  }
  return;
}



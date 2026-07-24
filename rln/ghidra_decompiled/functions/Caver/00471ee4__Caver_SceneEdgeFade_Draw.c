/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471ee4
 * Function: Caver::SceneEdgeFade::Draw
 * Signature: undefined __thiscall Draw(SceneEdgeFade * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneEdgeFade::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::SceneEdgeFade::Draw(SceneEdgeFade *this,RenderingContext *param_1,Matrix4 *param_2)

{
                    /* catch() { ... } // from try @ 00471edc with catch @ 00471ef8 */
                    /* try { // try from 00471f00 to 00571f97 has its CatchHandler @ 0047201c */
  RenderingContext::SetMatrix(param_1,param_2);
  RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0x10,*(undefined8 *)(this + 8));
  RenderingContext::SetVertexAttribPointer(param_1,0x8076,4,0x1401,0x10,*(long *)(this + 8) + 0xc);
  RenderingContext::DrawElements
            (param_1,4,*(int *)(this + 0x10) * 3,0x1403,*(undefined8 *)(this + 0x18));
  return;
}



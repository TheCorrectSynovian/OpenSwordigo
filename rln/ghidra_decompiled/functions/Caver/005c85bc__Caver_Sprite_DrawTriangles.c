/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c85bc
 * Function: Caver::Sprite::DrawTriangles
 * Signature: undefined __thiscall DrawTriangles(Sprite * this, RenderingContext * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::DrawTriangles(Caver::RenderingContext*, int, int) const */

void __thiscall
Caver::Sprite::DrawTriangles(Sprite *this,RenderingContext *param_1,int param_2,int param_3)

{
                    /* try { // try from 005c85d4 to 006c85fb has its CatchHandler @ 005c8604 */
  if (*(Texture **)this == (Texture *)0x0) {
                    /* try { // try from 005c867c to 006c867f has its CatchHandler @ 005c8814 */
    return;
  }
  RenderingContext::BindTexture(param_1,*(Texture **)this);
                    /* try { // try from 005c85fc to 006c8607 has its CatchHandler @ 005c8154 */
                    /* catch() { ... } // from try @ 005c84a8 with catch @ 005c8604
                       catch() { ... } // from try @ 005c85d4 with catch @ 005c8604 */
  RenderingContext::SetVertexAttribPointer
            (param_1,0x8074,3,0x1406,*(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x38));
                    /* try { // try from 005c8610 to 006c867b has its CatchHandler @ 005c8610
                       catch() { ... } // from try @ 005c8610 with catch @ 005c8610
                       catch() { ... } // from try @ 005c8700 with catch @ 005c8610
                       catch() { ... } // from try @ 005c8860 with catch @ 005c8610 */
  if (this[0x50] != (Sprite)0x0) {
    RenderingContext::SetVertexAttribPointer
              (param_1,0x8076,4,0x1401,*(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x40));
  }
  RenderingContext::SetVertexAttribPointer
            (param_1,0x8078,2,0x1406,*(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x48));
  if (*(long *)(this + 0x20) != 0) {
    RenderingContext::DrawElements
              (param_1,4,param_3 * 3,0x1403,*(long *)(this + 0x20) + (long)(param_2 * 3) * 2);
    return;
  }
  RenderingContext::DrawArrays(param_1,4,param_2 * 3,param_3 * 3);
  return;
}



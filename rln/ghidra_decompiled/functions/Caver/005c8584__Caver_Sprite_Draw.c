/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8584
 * Function: Caver::Sprite::Draw
 * Signature: undefined __thiscall Draw(Sprite * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::Draw(Caver::RenderingContext*) const */

void __thiscall Caver::Sprite::Draw(Sprite *this,RenderingContext *param_1)

{
  if (*(long *)(this + 0x20) != 0) {
    DrawTriangles(this,param_1,0,*(int *)(this + 0x1c));
    return;
  }
                    /* catch() { ... } // from try @ 005c8298 with catch @ 005c85b0
                       catch() { ... } // from try @ 005c8374 with catch @ 005c85b0 */
  DrawTriangles(this,param_1,0,*(int *)(this + 0x2c) / 3);
  return;
}



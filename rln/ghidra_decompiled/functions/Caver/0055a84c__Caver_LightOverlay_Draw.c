/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055a84c
 * Function: Caver::LightOverlay::Draw
 * Signature: undefined __thiscall Draw(LightOverlay * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LightOverlay::Draw(Caver::RenderingContext*) */

void __thiscall Caver::LightOverlay::Draw(LightOverlay *this,RenderingContext *param_1)

{
  VertexArrayObject *pVVar1;
  
                    /* try { // try from 0055a850 to 0065a877 has its CatchHandler @ 0055a880 */
  RenderingContext::SetBlendingEnabled(param_1,true);
                    /* try { // try from 0055a878 to 0065a893 has its CatchHandler @ 0055a7c8 */
  RenderingContext::SetDefaultBlendFunc(param_1);
                    /* catch() { ... } // from try @ 0055a850 with catch @ 0055a880 */
                    /* catch() { ... } // from try @ 0055a7e0 with catch @ 0055a884 */
  RenderingContext::UseProgram(param_1,2);
  if (this[0x90] == (LightOverlay)0x0) {
    this[0x90] = (LightOverlay)0x1;
    pVVar1 = (VertexArrayObject *)(this + 0x48);
                    /* catch() { ... } // from try @ 0055a894 with catch @ 0055a8a0 */
                    /* try { // try from 0055a8a4 to 0065a8a7 has its CatchHandler @ 0055a8ac */
    VertexArrayObject::CreateBufferObjects(pVVar1,true);
                    /* catch() { ... } // from try @ 0055a8a4 with catch @ 0055a8ac */
                    /* try { // try from 0055a8b0 to 0065a91f has its CatchHandler @ 0055a8b0
                       catch() { ... } // from try @ 0055a8b0 with catch @ 0055a8b0
                       catch() { ... } // from try @ 0055a924 with catch @ 0055a8b0
                       catch() { ... } // from try @ 0055aa08 with catch @ 0055a8b0
                       catch() { ... } // from try @ 0055ab44 with catch @ 0055a8b0 */
    VertexArrayObject::AddArray(pVVar1,0x8074,3,0x1406,0x10,*(undefined8 *)(this + 0x38));
    VertexArrayObject::AddArray(pVVar1,0x8076,4,0x1401,0x10,*(long *)(this + 0x38) + 0xc);
  }
  pVVar1 = (VertexArrayObject *)(this + 0x48);
  VertexArrayObject::SwapBufferObjects(pVVar1);
  VertexArrayObject::UpdateVertexBufferObjectData(pVVar1);
  VertexArrayObject::Draw(pVVar1,param_1,4,0,*(int *)(this + 0x30) * 3);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00554c34
 * Function: Caver::ParticleSystem::Draw
 * Signature: undefined __thiscall Draw(ParticleSystem * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::Draw(Caver::RenderingContext*) */

void __thiscall Caver::ParticleSystem::Draw(ParticleSystem *this,RenderingContext *param_1)

{
  VertexArrayObject *pVVar1;
  long lVar2;
  
                    /* try { // try from 00554c3c to 00654c43 has its CatchHandler @ 00555a58 */
                    /* try { // try from 00554c44 to 00654d73 has its CatchHandler @ 00554488 */
  if (*(int *)(this + 0x24) == 0) {
    return;
  }
  RenderingContext::BindTexture(param_1,*(Texture **)this);
  if (this[0x90] == (ParticleSystem)0x0) {
    pVVar1 = (VertexArrayObject *)(this + 0x48);
    this[0x90] = (ParticleSystem)0x1;
    VertexArrayObject::CreateBufferObjects(pVVar1,true);
    lVar2 = *(long *)(this + 0x40);
    VertexArrayObject::AddArray(pVVar1,0x8074,3,0x1406,*(undefined4 *)(this + 0x30),lVar2);
    VertexArrayObject::AddArray(pVVar1,0x8078,2,0x1406,*(undefined4 *)(this + 0x30),lVar2 + 0xc);
    VertexArrayObject::AddArray(pVVar1,0x8076,4,0x1401,*(undefined4 *)(this + 0x30),lVar2 + 0x14);
  }
  pVVar1 = (VertexArrayObject *)(this + 0x48);
  VertexArrayObject::SwapBufferObjects(pVVar1);
  VertexArrayObject::UpdateVertexBufferObjectSubData
            (pVVar1,0,*(int *)(this + 0x24) * *(int *)(this + 0x30) * 4);
  VertexArrayObject::Draw(pVVar1,param_1,4,0,*(int *)(this + 0x24) * 6);
  return;
}



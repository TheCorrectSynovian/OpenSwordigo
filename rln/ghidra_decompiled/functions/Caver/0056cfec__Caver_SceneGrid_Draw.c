/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cfec
 * Function: Caver::SceneGrid::Draw
 * Signature: undefined __thiscall Draw(SceneGrid * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall Caver::SceneGrid::Draw(SceneGrid *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)this) {
    lVar1 = 0;
    lVar2 = 0;
    do {
                    /* try { // try from 0056d030 to 0066d057 has its CatchHandler @ 0056d22c */
      SceneGridLayer::Draw(*(SceneGridLayer **)(*(long *)(this + 8) + lVar1),param_1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)this);
  }
                    /* try { // try from 0056d058 to 0066d26b has its CatchHandler @ 0056cbdc */
  return;
}



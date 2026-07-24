/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a11c0
 * Function: Caver::GUIView::SetOrthoProjection
 * Signature: undefined __thiscall SetOrthoProjection(GUIView * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::SetOrthoProjection(Caver::RenderingContext*, Caver::Matrix4 const&) */

void __thiscall
Caver::GUIView::SetOrthoProjection(GUIView *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  Matrix4 aMStack_68 [64];
  long local_28;
  
                    /* catch() { ... } // from try @ 005a11b4 with catch @ 005a11c8 */
                    /* try { // try from 005a11cc to 006a11cf has its CatchHandler @ 005a11d8 */
                    /* try { // try from 005a11d0 to 006a11db has its CatchHandler @ 005a114c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005a11cc with catch @ 005a11d8 */
                    /* catch() { ... } // from try @ 005a11fc with catch @ 005a11e0 */
  C_Matrix4Mul((float *)param_2,(float *)(this + 0xa4),(float *)aMStack_68);
                    /* try { // try from 005a11f4 to 006a11fb has its CatchHandler @ 005a1218 */
                    /* try { // try from 005a11fc to 006a122b has its CatchHandler @ 005a11e0 */
  RenderingContext::SetProjectionMatrix(param_1,aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 005a11f4 with catch @ 005a1218 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



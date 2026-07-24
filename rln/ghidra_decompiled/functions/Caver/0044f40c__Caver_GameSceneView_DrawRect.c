/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044f40c
 * Function: Caver::GameSceneView::DrawRect
 * Signature: undefined __thiscall DrawRect(GameSceneView * this, RenderingContext * param_1, Rectangle * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::DrawRect(Caver::RenderingContext*, Caver::Rectangle const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::GameSceneView::DrawRect
          (GameSceneView *this,RenderingContext *param_1,Rectangle *param_2,Matrix4 *param_3)

{
  long lVar1;
  GUIView *pGVar2;
  
                    /* catch() { ... } // from try @ 00447db0 with catch @ 0044f418 */
                    /* catch() { ... } // from try @ 00447d5c with catch @ 0044f41c */
                    /* try { // try from 0044f438 to 0054f447 has its CatchHandler @ 0044f4b4 */
  (**(code **)(**(long **)(*(long *)(this + 0xf0) + 0x20) + 0x20))
            (*(long **)(*(long *)(this + 0xf0) + 0x20),param_1,param_3);
                    /* try { // try from 0044f448 to 0054f4c3 has its CatchHandler @ 00447cc4 */
  (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
  RenderingContext::SetIdentityMatrix(param_1);
  GUIEffect::Draw(*(GUIEffect **)(this + 0x170),param_1);
  lVar1 = (**(code **)(*(long *)this + 0xf0))(this);
                    /* catch() { ... } // from try @ 0044cfcc with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d034 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d09c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d104 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d16c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d1d4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d23c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d2a4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d30c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d374 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d3dc with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d444 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d4ac with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d514 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d57c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d5e4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d64c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d6b4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d71c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d784 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d7ec with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d854 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d8bc with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d924 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d98c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044d9f4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044da5c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dac4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044db2c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044db94 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dbfc with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dc64 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dccc with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dd34 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dd9c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044de04 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044de6c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ded4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044df3c with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044dfa4 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e038 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e0a0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e108 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e170 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e1d8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e240 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e2a8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e310 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e378 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e3e0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e448 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e4b0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e518 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e580 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e5e8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e650 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e6b8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e720 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e788 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e7f0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e858 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e8c0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e928 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e990 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044e9f8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ea60 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044eac8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044eb30 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044eb98 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ec00 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ec68 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ecd0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ed38 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044eda0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ee08 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ee70 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044eed8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044ef40 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044efa8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f010 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f078 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f0e0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f148 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f1b0 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f218 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f280 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f2e8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f350 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f3b8 with catch @ 0044f4b4
                       catch() { ... } // from try @ 0044f438 with catch @ 0044f4b4 */
  if ((((*(long *)(lVar1 + 0x1c0) == lVar1 + 0x1c0) ||
       (lVar1 = *(long *)(*(long *)(lVar1 + 0x1c0) + 0x10), DAT_00683734 < *(float *)(lVar1 + 0x1fc)
       )) || (*(char *)(lVar1 + 0x1f8) != '\0')) && (this[0x1a2] == (GameSceneView)0x0)) {
                    /* catch() { ... } // from try @ 00447d0c with catch @ 0044f4b8 */
                    /* try { // try from 0044f4c4 to 0054f4db has its CatchHandler @ 0044f4c4
                       catch() { ... } // from try @ 0044f4c4 with catch @ 0044f4c4
                       catch() { ... } // from try @ 0044f4e0 with catch @ 0044f4c4 */
    GUIView::DrawRect((GUIView *)this,param_1,param_2,param_3);
  }
  if (*(long *)(this + 0x160) != 0) {
                    /* try { // try from 0044f4dc to 0054f4df has its CatchHandler @ 0044f4f0 */
                    /* try { // try from 0044f4e0 to 0054f503 has its CatchHandler @ 0044f4c4 */
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* catch() { ... } // from try @ 0044f4dc with catch @ 0044f4f0 */
    RenderingContext::SetIdentityMatrix(param_1);
    GUIEffect::Draw(*(GUIEffect **)(this + 0x160),param_1);
  }
                    /* try { // try from 0044f504 to 0054f51b has its CatchHandler @ 0044f504
                       catch() { ... } // from try @ 0044f504 with catch @ 0044f504
                       catch() { ... } // from try @ 0044f520 with catch @ 0044f504 */
  if (*(long *)(this + 0x188) != 0) {
                    /* try { // try from 0044f51c to 0054f51f has its CatchHandler @ 0044f530 */
    (**(code **)(*(long *)this + 0x128))(this,param_1,param_3);
                    /* try { // try from 0044f520 to 0054f543 has its CatchHandler @ 0044f504 */
    RenderingContext::SetIdentityMatrix(param_1);
                    /* catch() { ... } // from try @ 0044f51c with catch @ 0044f530 */
    GUIEffect::Draw(*(GUIEffect **)(this + 0x188),param_1);
  }
  pGVar2 = *(GUIView **)(this + 0x148);
                    /* try { // try from 0044f544 to 0054f55b has its CatchHandler @ 0044f544
                       catch() { ... } // from try @ 0044f544 with catch @ 0044f544
                       catch() { ... } // from try @ 0044f560 with catch @ 0044f544 */
  if (((pGVar2 != (GUIView *)0x0) && (*(long *)(pGVar2 + 0x58) != 0)) &&
     (pGVar2[0xe4] == (GUIView)0x0)) {
                    /* try { // try from 0044f55c to 0054f55f has its CatchHandler @ 0044f570 */
                    /* try { // try from 0044f560 to 0054f583 has its CatchHandler @ 0044f544 */
                    /* catch() { ... } // from try @ 0044f55c with catch @ 0044f570 */
    GUIView::DrawSubviewRect((GUIView *)this,pGVar2,param_1,param_2,param_3);
    return;
  }
  return;
}



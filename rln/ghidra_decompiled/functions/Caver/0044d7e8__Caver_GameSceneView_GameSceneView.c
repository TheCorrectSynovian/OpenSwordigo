/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d7e8
 * Function: Caver::GameSceneView::GameSceneView
 * Signature: undefined __thiscall GameSceneView(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::GameSceneView() */

void __thiscall Caver::GameSceneView::GameSceneView(GameSceneView *this)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  GUIEffect *pGVar4;
  long lVar5;
  GUIEffect *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 0044d7ec to 0054d7fb has its CatchHandler @ 0044f4b4 */
                    /* try { // try from 0044d7fc to 0054d853 has its CatchHandler @ 00447cc4 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e6960 + 0x10;
  *(undefined2 *)(this + 0x1a0) = 0;
  *(undefined **)this = puVar1;
  this[0x1a2] = (GameSceneView)0x0;
                    /* catch() { ... } // from try @ 0044a7f4 with catch @ 0044d834 */
  memset(this + 0xf0,0,0x51);
                    /* catch() { ... } // from try @ 0044a7a8 with catch @ 0044d838 */
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  this[0x158] = (GameSceneView)0x0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  this[0x180] = (GameSceneView)0x0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  this[0x198] = (GameSceneView)0x0;
                    /* try { // try from 0044d854 to 0054d863 has its CatchHandler @ 0044f4b4 */
  pGVar4 = operator_new(0x70);
                    /* try { // try from 0044d864 to 0054d8bb has its CatchHandler @ 00447cc4 */
  GUIEffect::GUIEffect(pGVar4);
  local_48 = pGVar4;
  boost::detail::shared_count::shared_count<Caver::GUIEffect>((shared_count *)&local_40,pGVar4);
  boost::detail::sp_enable_shared_from_this(&local_48,pGVar4,pGVar4);
  pGVar4 = *(GUIEffect **)(this + 0x170);
  plVar2 = *(long **)(this + 0x178);
                    /* catch() { ... } // from try @ 0044a754 with catch @ 0044d89c */
  *(GUIEffect **)(this + 0x170) = local_48;
  *(long **)(this + 0x178) = local_40;
                    /* catch() { ... } // from try @ 0044a708 with catch @ 0044d8a0 */
  local_48 = pGVar4;
  local_40 = plVar2;
  if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 0044d8bc to 0054d8cb has its CatchHandler @ 0044f4b4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar5 = plVar2[2];
                    /* try { // try from 0044d8cc to 0054d923 has its CatchHandler @ 00447cc4 */
    plVar2[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  *(undefined4 *)(*(long *)(this + 0x170) + 0x3c) = 1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0044a6c4 with catch @ 0044d904 */
                    /* catch() { ... } // from try @ 0044a678 with catch @ 0044d908 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



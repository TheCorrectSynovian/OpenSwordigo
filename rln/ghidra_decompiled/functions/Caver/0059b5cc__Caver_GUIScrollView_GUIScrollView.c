/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b5cc
 * Function: Caver::GUIScrollView::GUIScrollView
 * Signature: undefined __thiscall GUIScrollView(GUIScrollView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::GUIScrollView() */

void __thiscall Caver::GUIScrollView::GUIScrollView(GUIScrollView *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  GUIView::GUIView((GUIView *)this);
  puVar2 = PTR_vtable_007e7448;
                    /* try { // try from 0059b5e0 to 0069b5e7 has its CatchHandler @ 0059c8b8 */
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined **)this = puVar2 + 0x10;
  GUIScrollLocationController::GUIScrollLocationController
            ((GUIScrollLocationController *)(this + 0xfc));
                    /* try { // try from 0059b600 to 0069b60b has its CatchHandler @ 0059c5fc */
  GUIScrollLocationController::GUIScrollLocationController
            ((GUIScrollLocationController *)(this + 0x128));
  uVar1 = DAT_00697050;
                    /* try { // try from 0059b60c to 0069b613 has its CatchHandler @ 0059c17c */
  *(undefined8 *)(this + 0x158) = 0;
  this[0x198] = (GUIScrollView)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
                    /* try { // try from 0059b620 to 0069b627 has its CatchHandler @ 0059c5fc */
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  this[0x1b2] = (GUIScrollView)0x0;
  *(undefined4 *)(this + 0x160) = 0x101;
  *(undefined8 *)(this + 400) = uVar1;
  *(undefined2 *)(this + 0x1b0) = 0;
  return;
}



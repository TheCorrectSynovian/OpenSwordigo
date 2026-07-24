/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1c00
 * Function: Caver::GUIWindow::GUIWindow
 * Signature: undefined __thiscall GUIWindow(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::GUIWindow() */

void __thiscall Caver::GUIWindow::GUIWindow(GUIWindow *this)

{
  GUIWindow *pGVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  GUIView::GUIView((GUIView *)this);
  puVar3 = PTR_vtable_007e68c8;
                    /* try { // try from 005a1c14 to 006a1c1f has its CatchHandler @ 005a1fe0 */
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(GUIWindow **)(this + 0x138) = this + 0x128;
  *(GUIWindow **)(this + 0x140) = this + 0x128;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(GUIWindow **)(this + 0x168) = this + 0x158;
  *(GUIWindow **)(this + 0x170) = this + 0x158;
  uVar2 = DAT_00697140;
  *(undefined **)this = puVar3 + 0x10;
                    /* try { // try from 005a1c50 to 006a1c57 has its CatchHandler @ 005a203c */
  pGVar1 = this + 0x188;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined **)(this + 0xf8) = puVar3 + 0x1b8;
  *(undefined **)(this + 0xf0) = puVar3 + 0x188;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
                    /* try { // try from 005a1c78 to 006a1c9f has its CatchHandler @ 005a1fe4 */
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)pGVar1 = 0;
  *(GUIWindow **)(this + 0x198) = pGVar1;
  *(GUIWindow **)(this + 0x1a0) = pGVar1;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(GUIWindow **)(this + 0x1b0) = this + 0x1b0;
  *(GUIWindow **)(this + 0x1b8) = this + 0x1b0;
  *(GUIWindow **)(this + 0x1c0) = this + 0x1c0;
  *(GUIWindow **)(this + 0x1c8) = this + 0x1c0;
  *(undefined8 *)(this + 0x1d8) = uVar2;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1fc) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  this[0x1f8] = (GUIWindow)0x0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  this[0x220] = (GUIWindow)0x1;
  return;
}



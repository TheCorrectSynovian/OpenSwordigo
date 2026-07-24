/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005971e8
 * Function: Caver::GUIFrameView::GUIFrameView
 * Signature: undefined __thiscall GUIFrameView(GUIFrameView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::GUIFrameView() */

void __thiscall Caver::GUIFrameView::GUIFrameView(GUIFrameView *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e73b0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xe9) = 0xffffffff;
  *(undefined **)this = puVar1 + 0x10;
  this[0x108] = (GUIFrameView)0x0;
  return;
}



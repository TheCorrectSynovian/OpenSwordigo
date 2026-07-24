/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00515348
 * Function: Caver::ItemInfoPopupView::ItemInfoPopupView
 * Signature: undefined __thiscall ItemInfoPopupView(ItemInfoPopupView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoPopupView::ItemInfoPopupView() */

void __thiscall Caver::ItemInfoPopupView::ItemInfoPopupView(ItemInfoPopupView *this)

{
  GUIView::GUIView((GUIView *)this);
                    /* try { // try from 0051535c to 00615377 has its CatchHandler @ 005153e0 */
  *(undefined **)this = PTR_vtable_007e6048 + 0x10;
                    /* try { // try from 00515378 to 006153e3 has its CatchHandler @ 00515314 */
  memset(this + 0xf0,0,0x50);
  return;
}



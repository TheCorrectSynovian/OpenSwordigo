/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00512ce4
 * Function: Caver::ItemBuyPopupView::ItemBuyPopupView
 * Signature: undefined __thiscall ItemBuyPopupView(ItemBuyPopupView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemBuyPopupView::ItemBuyPopupView() */

void __thiscall Caver::ItemBuyPopupView::ItemBuyPopupView(ItemBuyPopupView *this)

{
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e6700 + 0x10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005129b0 with catch @ 00512d14
                        */
  memset(this + 0xf0,0,0x68);
                    /* try { // try from 00512d18 to 00612d1f has its CatchHandler @ 00512d28 */
                    /* try { // try from 00512d20 to 00612d2b has its CatchHandler @ 00512960 */
  return;
}



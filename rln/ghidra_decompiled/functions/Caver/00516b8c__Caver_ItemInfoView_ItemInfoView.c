/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00516b8c
 * Function: Caver::ItemInfoView::ItemInfoView
 * Signature: undefined __thiscall ItemInfoView(ItemInfoView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::ItemInfoView() */

void __thiscall Caver::ItemInfoView::ItemInfoView(ItemInfoView *this)

{
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e7868 + 0x10;
  *(undefined8 *)(this + 0x178) = 0;
  memset(this + 0xf0,0,0x81);
                    /* catch() { ... } // from try @ 00516bfc with catch @ 00516bcc */
  return;
}



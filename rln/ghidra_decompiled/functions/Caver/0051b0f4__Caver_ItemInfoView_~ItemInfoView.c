/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051b0f4
 * Function: Caver::ItemInfoView::~ItemInfoView
 * Signature: undefined __thiscall ~ItemInfoView(ItemInfoView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::~ItemInfoView() */

void __thiscall Caver::ItemInfoView::~ItemInfoView(ItemInfoView *this)

{
  ~ItemInfoView(this);
  operator_delete(this);
  return;
}



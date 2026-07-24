/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005427e4
 * Function: Caver::TabbedMenuView::~TabbedMenuView
 * Signature: undefined __thiscall ~TabbedMenuView(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::~TabbedMenuView() */

void __thiscall Caver::TabbedMenuView::~TabbedMenuView(TabbedMenuView *this)

{
                    /* catch() { ... } // from try @ 0054278c with catch @ 005427ec */
  ~TabbedMenuView(this);
  operator_delete(this);
  return;
}



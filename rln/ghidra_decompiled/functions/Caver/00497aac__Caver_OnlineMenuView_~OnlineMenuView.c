/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00497aac
 * Function: Caver::OnlineMenuView::~OnlineMenuView
 * Signature: undefined __thiscall ~OnlineMenuView(OnlineMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuView::~OnlineMenuView() */

void __thiscall Caver::OnlineMenuView::~OnlineMenuView(OnlineMenuView *this)

{
                    /* try { // try from 00497abc to 00597ac7 has its CatchHandler @ 00498154 */
  ~OnlineMenuView(this);
                    /* try { // try from 00497ac8 to 00597b5b has its CatchHandler @ 004976d8 */
  operator_delete(this);
  return;
}



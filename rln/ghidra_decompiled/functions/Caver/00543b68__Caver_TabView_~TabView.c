/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543b68
 * Function: Caver::TabView::~TabView
 * Signature: undefined __thiscall ~TabView(TabView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::~TabView() */

void __thiscall Caver::TabView::~TabView(TabView *this)

{
  ~TabView(this);
                    /* try { // try from 00543b80 to 00643c0f has its CatchHandler @ 00544844 */
  operator_delete(this);
  return;
}



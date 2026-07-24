/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a1050
 * Function: Caver::ProfilePanelView::~ProfilePanelView
 * Signature: undefined __thiscall ~ProfilePanelView(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::~ProfilePanelView() */

void __thiscall Caver::ProfilePanelView::~ProfilePanelView(ProfilePanelView *this)

{
                    /* try { // try from 004a1050 to 005a1063 has its CatchHandler @ 004a116c */
  ~ProfilePanelView(this);
                    /* try { // try from 004a1064 to 005a107b has its CatchHandler @ 004a1100 */
  operator_delete(this);
  return;
}



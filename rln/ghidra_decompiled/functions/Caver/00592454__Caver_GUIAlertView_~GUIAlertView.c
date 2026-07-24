/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00592454
 * Function: Caver::GUIAlertView::~GUIAlertView
 * Signature: undefined __thiscall ~GUIAlertView(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::~GUIAlertView() */

void __thiscall Caver::GUIAlertView::~GUIAlertView(GUIAlertView *this)

{
                    /* catch() { ... } // from try @ 0058f6dc with catch @ 00592454
                       catch() { ... } // from try @ 0058f720 with catch @ 00592454 */
  ~GUIAlertView(this);
  operator_delete(this);
  return;
}



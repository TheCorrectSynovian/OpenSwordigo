/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a214c
 * Function: Caver::GUIWindow::~GUIWindow
 * Signature: undefined __thiscall ~GUIWindow(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::~GUIWindow() */

void __thiscall Caver::GUIWindow::~GUIWindow(GUIWindow *this)

{
                    /* catch() { ... } // from try @ 005a17cc with catch @ 005a2158 */
                    /* catch() { ... } // from try @ 005a176c with catch @ 005a215c */
  ~GUIWindow(this);
  operator_delete(this);
  return;
}



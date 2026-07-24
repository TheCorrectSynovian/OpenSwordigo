/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a22b0
 * Function: Caver::GUIWindow::SetTitle
 * Signature: undefined __thiscall SetTitle(GUIWindow * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::SetTitle(std::string const&) */

void __thiscall Caver::GUIWindow::SetTitle(GUIWindow *this,string *param_1)

{
                    /* catch() { ... } // from try @ 005a1d00 with catch @ 005a22b0 */
                    /* catch() { ... } // from try @ 005a19b8 with catch @ 005a22b4
                       catch() { ... } // from try @ 005a19cc with catch @ 005a22b4 */
  SetWindowTitle(param_1);
  return;
}



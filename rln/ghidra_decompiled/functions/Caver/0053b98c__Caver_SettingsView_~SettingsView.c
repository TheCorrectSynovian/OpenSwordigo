/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053b98c
 * Function: Caver::SettingsView::~SettingsView
 * Signature: undefined __thiscall ~SettingsView(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::~SettingsView() */

void __thiscall Caver::SettingsView::~SettingsView(SettingsView *this)

{
                    /* try { // try from 0053b98c to 0063b98f has its CatchHandler @ 0053b9a0 */
                    /* try { // try from 0053b990 to 0063b9b3 has its CatchHandler @ 0053b97c */
  ~SettingsView(this);
                    /* catch() { ... } // from try @ 0053b98c with catch @ 0053b9a0 */
  operator_delete(this);
  return;
}



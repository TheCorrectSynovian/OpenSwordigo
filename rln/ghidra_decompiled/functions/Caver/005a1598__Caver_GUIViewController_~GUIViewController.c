/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1598
 * Function: Caver::GUIViewController::~GUIViewController
 * Signature: undefined __thiscall ~GUIViewController(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::~GUIViewController() */

void __thiscall Caver::GUIViewController::~GUIViewController(GUIViewController *this)

{
                    /* try { // try from 005a1598 to 006a15a3 has its CatchHandler @ 005a15cc */
                    /* try { // try from 005a15a4 to 006a15f3 has its CatchHandler @ 005a1538 */
  ~GUIViewController(this);
  operator_delete(this);
  return;
}



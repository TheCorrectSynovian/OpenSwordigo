/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596584
 * Function: Caver::GUIControl::~GUIControl
 * Signature: undefined __thiscall ~GUIControl(GUIControl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIControl::~GUIControl() */

void __thiscall Caver::GUIControl::~GUIControl(GUIControl *this)

{
                    /* try { // try from 00596588 to 0069658f has its CatchHandler @ 00596bf8 */
                    /* try { // try from 00596594 to 0069659b has its CatchHandler @ 00596bf4 */
  ~GUIControl(this);
                    /* try { // try from 0059659c to 006965af has its CatchHandler @ 00596bf0 */
  operator_delete(this);
  return;
}



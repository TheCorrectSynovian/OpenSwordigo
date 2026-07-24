/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e264
 * Function: Caver::GUISwitch::~GUISwitch
 * Signature: undefined __thiscall ~GUISwitch(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::~GUISwitch() */

void __thiscall Caver::GUISwitch::~GUISwitch(GUISwitch *this)

{
  ~GUISwitch(this);
                    /* catch() { ... } // from try @ 0059e1e4 with catch @ 0059e284 */
  operator_delete(this);
  return;
}



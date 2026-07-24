/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e53c
 * Function: Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController
 * Signature: undefined __thiscall ~ConfigureOverlayViewController(ConfigureOverlayViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController() */

void __thiscall
Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController
          (ConfigureOverlayViewController *this)

{
  ~ConfigureOverlayViewController(this);
                    /* try { // try from 0043e558 to 0053e593 has its CatchHandler @ 0043ebe0 */
  operator_delete(this);
  return;
}



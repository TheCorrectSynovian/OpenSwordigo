/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598fdc
 * Function: Caver::GUINavigationController::GUINavigationController
 * Signature: undefined __thiscall GUINavigationController(GUINavigationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::GUINavigationController() */

void __thiscall
Caver::GUINavigationController::GUINavigationController(GUINavigationController *this)

{
  undefined *puVar1;
  
                    /* try { // try from 00598fe8 to 0069900f has its CatchHandler @ 0059a594 */
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6f78;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x88;
  return;
}



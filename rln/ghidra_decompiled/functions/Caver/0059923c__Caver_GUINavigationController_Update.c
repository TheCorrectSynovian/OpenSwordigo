/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059923c
 * Function: Caver::GUINavigationController::Update
 * Signature: undefined __thiscall Update(GUINavigationController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::Update(float) */

void __thiscall Caver::GUINavigationController::Update(GUINavigationController *this,float param_1)

{
  undefined4 in_register_00005004;
  
  if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* try { // try from 00599260 to 0069926b has its CatchHandler @ 0059a014 */
    (**(code **)(**(long **)(this + 0x50) + 0x48))(CONCAT44(in_register_00005004,param_1));
  }
  GUIViewController::Update(param_1);
  return;
}



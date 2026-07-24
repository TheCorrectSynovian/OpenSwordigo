/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558800
 * Function: Caver::CameraController::ResetFocus
 * Signature: undefined __thiscall ResetFocus(CameraController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::ResetFocus() */

void __thiscall Caver::CameraController::ResetFocus(CameraController *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x68);
                    /* try { // try from 00558814 to 0065883b has its CatchHandler @ 00557d1c */
  *(undefined8 *)(this + 0x68) = 0;
                    /* catch() { ... } // from try @ 00557e48 with catch @ 00558818 */
                    /* catch() { ... } // from try @ 00557dac with catch @ 0055881c */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x70);
                    /* try { // try from 0055883c to 00658863 has its CatchHandler @ 00558988 */
  *(undefined8 *)(this + 0x70) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
                    /* try { // try from 00558864 to 0065890f has its CatchHandler @ 00557d1c */
  *(undefined4 *)this = 2;
                    /* catch() { ... } // from try @ 00557e5c with catch @ 00558868 */
  return;
}



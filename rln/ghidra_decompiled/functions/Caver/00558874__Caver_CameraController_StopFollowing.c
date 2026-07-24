/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558874
 * Function: Caver::CameraController::StopFollowing
 * Signature: undefined __thiscall StopFollowing(CameraController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::StopFollowing() */

void __thiscall Caver::CameraController::StopFollowing(CameraController *this)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 00557ea0 with catch @ 005588d8 */
                    /* WARNING: Could not recover jumptable at 0x005588e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



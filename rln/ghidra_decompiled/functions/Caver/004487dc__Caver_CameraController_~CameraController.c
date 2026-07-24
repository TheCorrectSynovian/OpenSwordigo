/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004487dc
 * Function: Caver::CameraController::~CameraController
 * Signature: undefined __thiscall ~CameraController(CameraController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::~CameraController() */

void __thiscall Caver::CameraController::~CameraController(CameraController *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 0x70);
                    /* try { // try from 004487f8 to 00548807 has its CatchHandler @ 0044ed1c */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x68);
                    /* try { // try from 00448820 to 0054882f has its CatchHandler @ 0044cf20 */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x60);
                    /* try { // try from 00448844 to 00548857 has its CatchHandler @ 0044ed18 */
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0044888c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* try { // try from 00448874 to 00548883 has its CatchHandler @ 0044cf18 */
  return;
}



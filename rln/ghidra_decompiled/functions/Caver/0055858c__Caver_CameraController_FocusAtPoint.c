/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055858c
 * Function: Caver::CameraController::FocusAtPoint
 * Signature: undefined __thiscall FocusAtPoint(CameraController * this, Vector3 * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::FocusAtPoint(Caver::Vector3 const&, bool) */

void __thiscall
Caver::CameraController::FocusAtPoint(CameraController *this,Vector3 *param_1,bool param_2)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  if (param_2) {
    plVar2 = *(long **)(this + 0x68);
    *(undefined8 *)(this + 0x68) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(this + 0x70);
    *(undefined8 *)(this + 0x70) = 0;
                    /* catch() { ... } // from try @ 00558484 with catch @ 005585e4 */
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 00558458 with catch @ 005585e8 */
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x1c) = 0x3f7851ec;
                    /* try { // try from 0055860c to 00658813 has its CatchHandler @ 00558988 */
  *(undefined4 *)(this + 0x2c) = 0x3f75c28f;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 8);
                    /* catch() { ... } // from try @ 005583b0 with catch @ 00558638 */
                    /* catch() { ... } // from try @ 0055824c with catch @ 0055863c */
  *(ulong *)(this + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(this + 4));
                    /* catch() { ... } // from try @ 005581c4 with catch @ 00558640 */
  *(float *)(this + 0x18) = fVar3 + *(float *)(this + 0xc);
  return;
}



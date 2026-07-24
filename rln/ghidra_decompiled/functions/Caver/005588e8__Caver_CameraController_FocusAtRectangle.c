/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005588e8
 * Function: Caver::CameraController::FocusAtRectangle
 * Signature: undefined __thiscall FocusAtRectangle(CameraController * this, Rectangle * param_1, float param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::FocusAtRectangle(Caver::Rectangle const&, float, bool) */

void __thiscall
Caver::CameraController::FocusAtRectangle
          (CameraController *this,Rectangle *param_1,float param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00557fbc with catch @ 005588ec */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00558910 to 0065897f has its CatchHandler @ 00558988 */
  if (param_3) {
    plVar3 = *(long **)(this + 0x68);
    *(undefined8 *)(this + 0x68) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = *(long **)(this + 0x70);
    *(undefined8 *)(this + 0x70) = 0;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  local_40 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00558980 to 0065898b has its CatchHandler @ 00557d1c */
  fVar4 = (float)*(undefined8 *)param_1 + (float)local_40 * 0.5;
  fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) + (float)((ulong)local_40 >> 0x20) * 0.5;
                    /* catch() { ... } // from try @ 0055860c with catch @ 00558988
                       catch() { ... } // from try @ 0055883c with catch @ 00558988
                       catch() { ... } // from try @ 00558910 with catch @ 00558988 */
  *(undefined4 *)this = 1;
                    /* catch() { ... } // from try @ 00558a3c with catch @ 0055898c */
  *(undefined4 *)(this + 0x1c) = 0x3f7851ec;
                    /* try { // try from 005589a4 to 006589ab has its CatchHandler @ 00558a48 */
  *(float *)(this + 0x18) = *(float *)(this + 0xc) + param_2;
  *(float *)(this + 0x28) = param_2;
  *(undefined4 *)(this + 0x2c) = 0x3f75c28f;
  *(ulong *)(this + 0x20) = CONCAT44(fVar5,fVar4);
  *(ulong *)(this + 0x10) =
       CONCAT44(fVar5 + (float)((ulong)*(undefined8 *)(this + 4) >> 0x20),
                fVar4 + (float)*(undefined8 *)(this + 4));
  fVar4 = (float)Camera::MinDistanceForVisibleAreaSize
                           (*(Camera **)(this + 0x58),(Vector2 *)&local_40);
  local_50 = *(undefined8 *)(this + 4);
                    /* try { // try from 005589d8 to 006589e3 has its CatchHandler @ 005589f0 */
  local_48 = *(float *)(this + 0xc);
  Vector3::Normalize((Vector3 *)&local_50);
                    /* catch() { ... } // from try @ 005589d8 with catch @ 005589f0 */
  *(ulong *)(this + 0x10) =
       CONCAT44((float)((ulong)local_50 >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20),
                (float)local_50 * fVar4 + (float)*(undefined8 *)(this + 0x20));
  *(float *)(this + 0x18) = fVar4 * local_48 + *(float *)(this + 0x28);
                    /* try { // try from 00558a14 to 00658a3b has its CatchHandler @ 00558a44 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00558a3c to 00658a57 has its CatchHandler @ 0055898c */
  __stack_chk_fail();
}



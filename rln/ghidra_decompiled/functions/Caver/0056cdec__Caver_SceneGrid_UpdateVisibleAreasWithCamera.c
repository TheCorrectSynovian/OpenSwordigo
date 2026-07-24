/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056cdec
 * Function: Caver::SceneGrid::UpdateVisibleAreasWithCamera
 * Signature: undefined __cdecl UpdateVisibleAreasWithCamera(Camera * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::UpdateVisibleAreasWithCamera(Caver::Camera*) */

void Caver::SceneGrid::UpdateVisibleAreasWithCamera(Camera *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  
                    /* try { // try from 0056cdf0 to 0066cdf3 has its CatchHandler @ 0056d4d8 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)param_1) {
    lVar3 = 0;
    lVar4 = 0;
    do {
                    /* try { // try from 0056ce2c to 0066ce2f has its CatchHandler @ 0056d238 */
                    /* try { // try from 0056ce30 to 0066ce3b has its CatchHandler @ 0056d5a8 */
      pfVar5 = *(float **)(*(long *)(param_1 + 8) + lVar3);
                    /* try { // try from 0056ce3c to 0066ce43 has its CatchHandler @ 0056d2f8 */
      Camera::AABBForZRange(*pfVar5,pfVar5[1]);
                    /* try { // try from 0056ce44 to 0066ce4f has its CatchHandler @ 0056d5a8 */
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
      *(undefined8 *)(pfVar5 + 0x10) = uStack_50;
      *(undefined8 *)(pfVar5 + 0xe) = local_58;
    } while (lVar4 < *(int *)param_1);
  }
                    /* try { // try from 0056ce68 to 0066ce6f has its CatchHandler @ 0056d2e8 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



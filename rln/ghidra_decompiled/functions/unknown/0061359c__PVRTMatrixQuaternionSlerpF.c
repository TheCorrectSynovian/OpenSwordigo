/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061359c
 * Function: PVRTMatrixQuaternionSlerpF
 * Signature: undefined __cdecl PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf * param_1, PVRTQUATERNIONf * param_2, PVRTQUATERNIONf * param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf&, PVRTQUATERNIONf const&, PVRTQUATERNIONf const&,
   float) */

void PVRTMatrixQuaternionSlerpF
               (PVRTQUATERNIONf *param_1,PVRTQUATERNIONf *param_2,PVRTQUATERNIONf *param_3,
               float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = _DAT_00683800;
  uVar7 = _UNK_00683808;
  if ((0.0 <= param_4) && (param_4 <= 1.0)) {
    fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
    fVar8 = (float)*(undefined8 *)param_3;
    fVar9 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar2 = (float)*(undefined8 *)(param_3 + 8);
    fVar10 = *(float *)(param_2 + 0xc) * fVar3 + (float)*(undefined8 *)param_2 * fVar8 +
             (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar9 +
             *(float *)(param_2 + 8) * fVar2;
    if (fVar10 < 0.0) {
      local_78 = CONCAT44(-fVar9,-fVar8);
      uStack_70 = CONCAT44(-fVar3,-fVar2);
                    /* try { // try from 00613624 to 0071362f has its CatchHandler @ 006141e8 */
                    /* try { // try from 00613630 to 007136ef has its CatchHandler @ 006145e8 */
      PVRTMatrixQuaternionSlerpF(param_1,param_2,(PVRTQUATERNIONf *)&local_78,param_4);
      goto LAB_0061373c;
    }
    fVar2 = (float)NEON_fminnm(fVar10,0x3f800000);
    dVar4 = acos((double)fVar2);
    fVar2 = (float)dVar4;
    if (fVar2 == 0.0) {
      uVar6 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_2 + 8);
    }
    else {
      dVar4 = sin((double)((1.0 - param_4) * fVar2));
      dVar5 = sin((double)fVar2);
      fVar3 = (float)dVar4 / (float)dVar5;
      dVar4 = sin((double)(fVar2 * param_4));
      dVar5 = sin((double)fVar2);
      fVar2 = (float)dVar4 / (float)dVar5;
      fVar8 = (float)*(undefined8 *)param_2 * fVar3 + (float)*(undefined8 *)param_3 * fVar2;
      fVar9 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar3 +
              (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar2;
      *(ulong *)param_1 = CONCAT44(fVar9,fVar8);
      fVar10 = (float)*(undefined8 *)(param_2 + 8) * fVar3 +
               (float)*(undefined8 *)(param_3 + 8) * fVar2;
      fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fVar3 +
               (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar2;
      fVar3 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11;
      fVar2 = SQRT(fVar3);
      *(ulong *)(param_1 + 8) = CONCAT44(fVar11,fVar10);
      if (NAN(fVar2)) {
                    /* try { // try from 00613720 to 0071372b has its CatchHandler @ 006141e4 */
        fVar2 = sqrtf(fVar3);
      }
      if (fVar2 == 0.0) goto LAB_0061373c;
                    /* try { // try from 0061372c to 0071380f has its CatchHandler @ 006145e8 */
      fVar2 = 1.0 / fVar2;
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2,
                       (float)*(undefined8 *)param_1 * fVar2);
      uVar7 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar2,
                       (float)*(undefined8 *)(param_1 + 8) * fVar2);
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)param_1 = uVar6;
LAB_0061373c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



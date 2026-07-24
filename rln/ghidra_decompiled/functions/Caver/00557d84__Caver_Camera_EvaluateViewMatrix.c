/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557d84
 * Function: Caver::Camera::EvaluateViewMatrix
 * Signature: undefined __cdecl EvaluateViewMatrix(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::EvaluateViewMatrix() */

void Caver::Camera::EvaluateViewMatrix(void)

{
  Matrix4 *pMVar1;
  ulong uVar2;
  Matrix4 *pMVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_x0;
  Quaternion *in_x1;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  Matrix4 *pMVar9;
  Matrix4 *pMVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_88;
  undefined8 local_84;
  float local_7c;
  undefined8 local_78;
  float afStack_70 [2];
  undefined8 auStack_68 [6];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00557dac to 00657deb has its CatchHandler @ 0055881c */
  local_88 = *(undefined4 *)(in_x0 + 0x1c);
  local_84 = CONCAT44(-(float)((ulong)*(undefined8 *)(in_x0 + 0x20) >> 0x20),
                      -(float)*(undefined8 *)(in_x0 + 0x20));
  local_7c = -*(float *)(in_x0 + 0x28);
  Matrix4::FromRotationQuaternion((Matrix4 *)&local_88,in_x1);
  pMVar1 = (Matrix4 *)(in_x0 + 0x6c);
  pMVar3 = pMVar1;
  if (pMVar1 <= (Matrix4 *)(in_x0 + 0x30U)) {
    pMVar3 = (Matrix4 *)(in_x0 + 0x30U);
  }
                    /* try { // try from 00557dec to 00657e47 has its CatchHandler @ 00557d1c */
  uVar2 = ((ulong)(pMVar3 + (-0x2d - in_x0)) >> 2) + 1;
  pMVar3 = (Matrix4 *)(in_x0 + 0x2c);
  if (uVar2 < 8) {
    pfVar6 = (float *)&local_78;
    pMVar9 = pMVar3;
LAB_00557e54:
    do {
      pMVar10 = pMVar9 + 4;
      *(float *)pMVar9 = *pfVar6;
                    /* try { // try from 00557e5c to 00657e6b has its CatchHandler @ 00558868 */
      pfVar6 = pfVar6 + 1;
      pMVar9 = pMVar10;
    } while (pMVar10 < pMVar1);
  }
  else {
    uVar12 = uVar2 & 0x7ffffffffffffff8;
    pfVar6 = afStack_70 + (uVar12 - 2);
    puVar13 = (undefined8 *)(in_x0 + 0x3c);
    pMVar9 = (Matrix4 *)(in_x0 + uVar12 * 4 + 0x2c);
    puVar14 = auStack_68;
    uVar15 = uVar12;
    do {
      puVar5 = puVar14 + -1;
      uVar16 = puVar14[-2];
      uVar18 = puVar14[1];
      uVar17 = *puVar14;
      uVar15 = uVar15 - 8;
      puVar14 = puVar14 + 4;
      puVar13[-1] = *puVar5;
      puVar13[-2] = uVar16;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13 = puVar13 + 4;
                    /* try { // try from 00557e48 to 00657e5b has its CatchHandler @ 00558818 */
    } while (uVar15 != 0);
    if (uVar2 != uVar12) goto LAB_00557e54;
  }
                    /* try { // try from 00557e6c to 00657e9f has its CatchHandler @ 00557d1c */
  local_78 = CONCAT44(-(float)((ulong)*(undefined8 *)(in_x0 + 0x10) >> 0x20),
                      -(float)*(undefined8 *)(in_x0 + 0x10));
  afStack_70[0] = -*(float *)(in_x0 + 0x18);
  Matrix4::PostTranslate(pMVar3,(Vector3 *)&local_78);
  C_Matrix4Mul((float *)(in_x0 + 0x6c),(float *)pMVar3,(float *)&local_78);
  pfVar6 = (float *)(in_x0 + 0xec);
                    /* try { // try from 00557ea0 to 00657ea3 has its CatchHandler @ 005588d8 */
                    /* try { // try from 00557ea4 to 00657f7b has its CatchHandler @ 00557d1c */
  pfVar8 = pfVar6;
  if (pfVar6 <= (float *)(in_x0 + 0xb0U)) {
    pfVar8 = (float *)(in_x0 + 0xb0U);
  }
  uVar2 = ((ulong)((long)pfVar8 + (-0xad - in_x0)) >> 2) + 1;
  if (uVar2 < 8) {
    pfVar8 = (float *)(in_x0 + 0xac);
    pfVar11 = (float *)&local_78;
LAB_00557f14:
    do {
      pfVar7 = pfVar8 + 1;
      *pfVar8 = *pfVar11;
      pfVar8 = pfVar7;
      pfVar11 = pfVar11 + 1;
    } while (pfVar7 < pfVar6);
  }
  else {
    uVar12 = uVar2 & 0x7ffffffffffffff8;
    pfVar11 = afStack_70 + (uVar12 - 2);
    puVar13 = (undefined8 *)(in_x0 + 0xbc);
    pfVar8 = (float *)(in_x0 + uVar12 * 4 + 0xac);
    puVar14 = auStack_68;
    uVar15 = uVar12;
    do {
      puVar5 = puVar14 + -1;
      uVar16 = puVar14[-2];
      uVar18 = puVar14[1];
      uVar17 = *puVar14;
      uVar15 = uVar15 - 8;
      puVar14 = puVar14 + 4;
      puVar13[-1] = *puVar5;
      puVar13[-2] = uVar16;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13 = puVar13 + 4;
    } while (uVar15 != 0);
    if (uVar2 != uVar12) goto LAB_00557f14;
  }
  Matrix4::Inverse();
  pfVar6 = (float *)(in_x0 + 0x180);
  pfVar8 = pfVar6;
  if (pfVar6 <= (float *)(in_x0 + 0x144U)) {
    pfVar8 = (float *)(in_x0 + 0x144U);
  }
  uVar2 = ((ulong)((long)pfVar8 + (-0x141 - in_x0)) >> 2) + 1;
  pfVar8 = (float *)&local_78;
  pfVar11 = (float *)(in_x0 + 0x140);
  if (uVar2 < 8) {
LAB_00557fac:
    do {
      pfVar7 = pfVar11 + 1;
      *pfVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar7;
    } while (pfVar7 < pfVar6);
  }
  else {
    uVar12 = uVar2 & 0x7ffffffffffffff8;
                    /* try { // try from 00557f7c to 00657fa3 has its CatchHandler @ 00558770 */
    puVar13 = (undefined8 *)(in_x0 + 0x150);
    puVar14 = auStack_68;
    uVar15 = uVar12;
    do {
      puVar5 = puVar14 + -1;
      uVar16 = puVar14[-2];
      uVar18 = puVar14[1];
      uVar17 = *puVar14;
      uVar15 = uVar15 - 8;
      puVar14 = puVar14 + 4;
      puVar13[-1] = *puVar5;
      puVar13[-2] = uVar16;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13 = puVar13 + 4;
    } while (uVar15 != 0);
    pfVar8 = afStack_70 + (uVar12 - 2);
    pfVar11 = (float *)(in_x0 + uVar12 * 4 + 0x140);
    if (uVar2 != uVar12) goto LAB_00557fac;
  }
                    /* try { // try from 00557fbc to 00657fe3 has its CatchHandler @ 005588ec */
  C_Matrix4Mul((float *)(in_x0 + 0x140),(float *)(in_x0 + 0x100),(float *)&local_78);
  pfVar6 = (float *)(in_x0 + 0x1c0);
  pfVar8 = pfVar6;
  if (pfVar6 <= (float *)(in_x0 + 0x184U)) {
    pfVar8 = (float *)(in_x0 + 0x184U);
  }
  uVar2 = ((ulong)((long)pfVar8 + (-0x181 - in_x0)) >> 2) + 1;
  if (uVar2 < 8) {
    pfVar8 = (float *)(in_x0 + 0x180);
    pfVar11 = (float *)&local_78;
  }
  else {
                    /* try { // try from 00558004 to 0065802b has its CatchHandler @ 0055876c */
    uVar12 = uVar2 & 0x7ffffffffffffff8;
    pfVar11 = afStack_70 + (uVar12 - 2);
    puVar13 = (undefined8 *)(in_x0 + 400);
    pfVar8 = (float *)(in_x0 + uVar12 * 4 + 0x180);
    puVar14 = auStack_68;
    uVar15 = uVar12;
    do {
      puVar5 = puVar14 + -1;
      uVar16 = puVar14[-2];
      uVar18 = puVar14[1];
      uVar17 = *puVar14;
      uVar15 = uVar15 - 8;
      puVar14 = puVar14 + 4;
      puVar13[-1] = *puVar5;
      puVar13[-2] = uVar16;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13 = puVar13 + 4;
    } while (uVar15 != 0);
    if (uVar2 == uVar12) goto LAB_00558054;
  }
  do {
    pfVar7 = pfVar8 + 1;
    *pfVar8 = *pfVar11;
    pfVar8 = pfVar7;
    pfVar11 = pfVar11 + 1;
  } while (pfVar7 < pfVar6);
LAB_00558054:
                    /* try { // try from 0055805c to 00658067 has its CatchHandler @ 00558720 */
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 00558068 to 0065807b has its CatchHandler @ 00558714 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



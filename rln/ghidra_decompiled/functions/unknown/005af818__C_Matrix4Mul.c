/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af818
 * Function: C_Matrix4Mul
 * Signature: undefined __cdecl C_Matrix4Mul(float * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* C_Matrix4Mul(float const*, float const*, float*) */

void C_Matrix4Mul(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_2;
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar21 = param_2[4];
  fVar20 = param_2[5];
  fVar23 = param_2[6];
  fVar24 = param_2[7];
  fVar25 = param_2[8];
  fVar26 = param_2[9];
  fVar27 = param_2[10];
  fVar28 = param_2[0xb];
  fVar29 = param_2[0xc];
  fVar30 = param_2[0xd];
  fVar31 = param_2[0xe];
  fVar32 = param_2[0xf];
  fVar6 = (float)*(undefined8 *)param_1;
  fVar7 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_1 + 8);
                    /* try { // try from 005af85c to 006af85f has its CatchHandler @ 005afde4 */
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 005af860 to 006af88b has its CatchHandler @ 005af808 */
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_1 + 2);
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar16 = (float)*(undefined8 *)(param_1 + 10);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  fVar18 = (float)*(undefined8 *)(param_1 + 0xe);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
                    /* try { // try from 005af88c to 006af89b has its CatchHandler @ 005afe48 */
                    /* try { // try from 005af89c to 006af967 has its CatchHandler @ 005af808 */
  fVar2 = (float)*(undefined8 *)(param_1 + 4);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 6);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar22 = param_2[1];
  *(ulong *)(param_3 + 4) =
       CONCAT44(fVar7 * fVar21 + fVar3 * fVar20 + fVar13 * fVar23 + fVar15 * fVar24,
                fVar6 * fVar21 + fVar2 * fVar20 + fVar12 * fVar23 + fVar14 * fVar24);
  *(ulong *)(param_3 + 6) =
       CONCAT44(fVar11 * fVar21 + fVar5 * fVar20 + fVar17 * fVar23 + fVar19 * fVar24,
                fVar10 * fVar21 + fVar4 * fVar20 + fVar16 * fVar23 + fVar18 * fVar24);
  *(ulong *)(param_3 + 8) =
       CONCAT44(fVar7 * fVar25 + fVar3 * fVar26 + fVar13 * fVar27 + fVar15 * fVar28,
                fVar6 * fVar25 + fVar2 * fVar26 + fVar12 * fVar27 + fVar14 * fVar28);
  *(ulong *)(param_3 + 10) =
       CONCAT44(fVar11 * fVar25 + fVar5 * fVar26 + fVar17 * fVar27 + fVar19 * fVar28,
                fVar10 * fVar25 + fVar4 * fVar26 + fVar16 * fVar27 + fVar18 * fVar28);
  *(ulong *)param_3 =
       CONCAT44(fVar7 * fVar1 + fVar3 * fVar22 + fVar13 * fVar8 + fVar15 * fVar9,
                fVar6 * fVar1 + fVar2 * fVar22 + fVar12 * fVar8 + fVar14 * fVar9);
  *(ulong *)(param_3 + 2) =
       CONCAT44(fVar1 * fVar11 + fVar5 * fVar22 + fVar17 * fVar8 + fVar19 * fVar9,
                fVar1 * fVar10 + fVar4 * fVar22 + fVar16 * fVar8 + fVar18 * fVar9);
  *(ulong *)(param_3 + 0xc) =
       CONCAT44(fVar7 * fVar29 + fVar3 * fVar30 + fVar13 * fVar31 + fVar15 * fVar32,
                fVar6 * fVar29 + fVar2 * fVar30 + fVar12 * fVar31 + fVar14 * fVar32);
  *(ulong *)(param_3 + 0xe) =
       CONCAT44(fVar11 * fVar29 + fVar5 * fVar30 + fVar17 * fVar31 + fVar19 * fVar32,
                fVar10 * fVar29 + fVar4 * fVar30 + fVar16 * fVar31 + fVar18 * fVar32);
  return;
}



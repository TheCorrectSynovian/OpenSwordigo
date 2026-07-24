/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ae974
 * Function: Caver::Matrix4::Inverse
 * Signature: undefined __cdecl Inverse(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::Inverse() const */

float * Caver::Matrix4::Inverse(void)

{
  uint uVar1;
  float *in_x0;
  float *in_x8;
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
  
  fVar2 = in_x0[4];
  fVar9 = in_x0[5];
  fVar7 = *in_x0;
  fVar12 = in_x0[9];
  fVar4 = in_x0[10];
  fVar11 = in_x0[1];
  fVar6 = in_x0[2];
  fVar5 = in_x0[8];
  fVar8 = in_x0[6];
  fVar14 = fVar7 * fVar9 * fVar4;
  fVar16 = fVar14 + 0.0;
  fVar15 = fVar2 * fVar12 * fVar6;
  fVar13 = fVar16;
  fVar3 = 0.0;
  if (0.0 <= fVar14) {
    fVar13 = 0.0;
    fVar3 = fVar16;
  }
  fVar16 = fVar5 * fVar11 * fVar8;
  fVar14 = fVar13 + fVar15;
  if (0.0 <= fVar15) {
    fVar14 = fVar13;
    fVar3 = fVar3 + fVar15;
  }
  fVar15 = fVar6 * fVar9 * fVar5;
  fVar13 = fVar14 + fVar16;
  if (0.0 <= fVar16) {
    fVar13 = fVar14;
    fVar3 = fVar3 + fVar16;
  }
  fVar16 = fVar4 * fVar2 * fVar11;
  fVar14 = fVar13 - fVar15;
  if (fVar15 <= DAT_00695770) {
    fVar14 = fVar13;
    fVar3 = fVar3 - fVar15;
  }
  fVar15 = fVar7 * fVar12 * fVar8;
  fVar13 = fVar14 - fVar16;
  if (fVar16 <= DAT_00695770) {
    fVar13 = fVar14;
    fVar3 = fVar3 - fVar16;
  }
  fVar14 = fVar13 - fVar15;
  if (fVar15 <= DAT_00695770) {
    fVar14 = fVar13;
    fVar3 = fVar3 - fVar15;
  }
  if (fVar3 + fVar14 != 0.0) {
    fVar10 = 1.0 / (fVar3 + fVar14);
    fVar3 = fVar7 * fVar8 - fVar2 * fVar6;
    fVar14 = (fVar9 * fVar4 - fVar12 * fVar8) * fVar10;
    fVar15 = -((fVar4 * fVar11 - fVar12 * fVar6) * fVar10);
    fVar16 = (fVar11 * fVar8 - fVar9 * fVar6) * fVar10;
    fVar8 = -((fVar4 * fVar2 - fVar5 * fVar8) * fVar10);
    fVar13 = (fVar7 * fVar4 - fVar6 * fVar5) * fVar10;
    fVar4 = (fVar2 * fVar12 - fVar9 * fVar5) * fVar10;
    fVar5 = -((fVar7 * fVar12 - fVar5 * fVar11) * fVar10);
    fVar2 = (fVar7 * fVar9 - fVar2 * fVar11) * fVar10;
    *in_x8 = fVar14;
    in_x8[1] = fVar15;
    in_x8[2] = fVar16;
    in_x8[4] = fVar8;
    in_x8[5] = fVar13;
    in_x8[6] = -(fVar3 * fVar10);
    in_x8[8] = fVar4;
    in_x8[9] = fVar5;
    in_x8[10] = fVar2;
    fVar6 = in_x0[0xc];
    fVar7 = in_x0[0xd];
    fVar9 = in_x0[0xe];
    in_x8[3] = 0.0;
    in_x8[7] = 0.0;
    in_x8[0xb] = 0.0;
    *(ulong *)(in_x8 + 0xc) =
         CONCAT44(-(fVar15 * fVar6 + fVar13 * fVar7 + fVar5 * fVar9),
                  -(fVar14 * fVar6 + fVar8 * fVar7 + fVar4 * fVar9));
    in_x8[0xe] = -((fVar16 * fVar6 - fVar7 * fVar3 * fVar10) + fVar2 * fVar9);
    in_x8[0xf] = 1.0;
    return in_x0;
  }
  uVar1 = puts("Matrix has no inverse : singular matrix");
  return (float *)(ulong)uVar1;
}



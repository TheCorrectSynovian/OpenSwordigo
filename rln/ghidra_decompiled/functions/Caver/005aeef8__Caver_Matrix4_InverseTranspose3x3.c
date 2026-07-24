/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aeef8
 * Function: Caver::Matrix4::InverseTranspose3x3
 * Signature: undefined __cdecl InverseTranspose3x3(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::InverseTranspose3x3() const */

void Caver::Matrix4::InverseTranspose3x3(void)

{
  float *in_x0;
  float *in_x8;
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
  
  fVar1 = in_x0[4];
  fVar6 = in_x0[5];
  fVar5 = *in_x0;
  fVar10 = in_x0[9];
  fVar2 = in_x0[10];
  fVar9 = in_x0[1];
  fVar4 = in_x0[2];
  fVar3 = in_x0[8];
  fVar7 = in_x0[6];
  fVar12 = fVar5 * fVar6 * fVar2;
                    /* try { // try from 005aef1c to 006af16f has its CatchHandler @ 005aedc8 */
  fVar14 = fVar12 + 0.0;
  fVar13 = fVar1 * fVar10 * fVar4;
  fVar11 = fVar14;
  fVar8 = 0.0;
  if (0.0 <= fVar12) {
    fVar11 = 0.0;
    fVar8 = fVar14;
  }
  fVar14 = fVar3 * fVar9 * fVar7;
  fVar12 = fVar11 + fVar13;
  if (0.0 <= fVar13) {
    fVar12 = fVar11;
    fVar8 = fVar8 + fVar13;
  }
  fVar13 = fVar4 * fVar6 * fVar3;
  fVar11 = fVar12 + fVar14;
  if (0.0 <= fVar14) {
    fVar11 = fVar12;
    fVar8 = fVar8 + fVar14;
  }
  fVar14 = fVar2 * fVar1 * fVar9;
  fVar12 = fVar11 - fVar13;
  if (fVar13 <= DAT_00695770) {
    fVar12 = fVar11;
    fVar8 = fVar8 - fVar13;
  }
  fVar13 = fVar5 * fVar10 * fVar7;
  fVar11 = fVar12 - fVar14;
  if (fVar14 <= DAT_00695770) {
    fVar11 = fVar12;
    fVar8 = fVar8 - fVar14;
  }
  fVar12 = fVar11 - fVar13;
  if (fVar13 <= DAT_00695770) {
    fVar12 = fVar11;
    fVar8 = fVar8 - fVar13;
  }
  if (fVar8 + fVar12 != 0.0) {
    fVar8 = 1.0 / (fVar8 + fVar12);
    in_x8[3] = 0.0;
    in_x8[7] = 0.0;
    in_x8[0xd] = 0.0;
    in_x8[0xe] = 0.0;
    in_x8[0xb] = 0.0;
    in_x8[0xc] = 0.0;
    *in_x8 = (fVar6 * fVar2 - fVar10 * fVar7) * fVar8;
    in_x8[1] = -((fVar2 * fVar1 - fVar3 * fVar7) * fVar8);
    in_x8[4] = -((fVar2 * fVar9 - fVar10 * fVar4) * fVar8);
    in_x8[5] = (fVar5 * fVar2 - fVar4 * fVar3) * fVar8;
    in_x8[8] = (fVar9 * fVar7 - fVar6 * fVar4) * fVar8;
    in_x8[9] = -((fVar5 * fVar7 - fVar1 * fVar4) * fVar8);
    in_x8[2] = (fVar1 * fVar10 - fVar6 * fVar3) * fVar8;
    in_x8[6] = -((fVar5 * fVar10 - fVar3 * fVar9) * fVar8);
    in_x8[10] = (fVar5 * fVar6 - fVar1 * fVar9) * fVar8;
    in_x8[0xf] = 1.0;
    return;
  }
  return;
}



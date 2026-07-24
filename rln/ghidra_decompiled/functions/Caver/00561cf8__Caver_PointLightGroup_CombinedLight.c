/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00561cf8
 * Function: Caver::PointLightGroup::CombinedLight
 * Signature: undefined __cdecl CombinedLight(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PointLightGroup::CombinedLight() const */

void Caver::PointLightGroup::CombinedLight(void)

{
  int iVar1;
  int *in_x0;
  float *in_x8;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  
  in_x8[6] = 0.0;
  in_x8[7] = 0.0;
  in_x8[4] = 0.0;
  in_x8[5] = 0.0;
  in_x8[10] = 0.0;
  in_x8[0xb] = 0.0;
  in_x8[8] = 0.0;
  in_x8[9] = 0.0;
  in_x8[2] = 0.0;
  in_x8[3] = 0.0;
  in_x8[0] = 0.0;
  in_x8[1] = 0.0;
  in_x8[0xd] = 3.4028235e+38;
  in_x8[0xe] = 3.4028235e+38;
  iVar1 = *in_x0;
  if (iVar1 < 1) {
    uVar5 = 0;
    fVar4 = 0.0;
    fVar17 = 0.0;
    uVar7 = 0;
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar11 = 0;
    uVar8 = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = 0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar11 = 0;
    uVar8 = 0;
    puVar3 = (undefined8 *)(*(long *)(in_x0 + 2) + 0x20);
                    /* catch() { ... } // from try @ 00561ad0 with catch @ 00561d50
                       catch() { ... } // from try @ 00561c80 with catch @ 00561d50 */
    uVar7 = 0;
    fVar13 = DAT_0068431c;
    fVar12 = DAT_0068431c;
    do {
                    /* try { // try from 00561d54 to 00661d7f has its CatchHandler @ 00561d54
                       catch() { ... } // from try @ 00561d54 with catch @ 00561d54
                       catch() { ... } // from try @ 00561da4 with catch @ 00561d54 */
      fVar22 = *(float *)((long)puVar3 + 0x14);
      fVar14 = *(float *)(puVar3 + 1);
      fVar19 = *(float *)((long)puVar3 + 0xc);
      fVar21 = *(float *)(puVar3 + -4);
      uVar20 = *(undefined8 *)((long)puVar3 + -0x1c);
      fVar17 = *(float *)((long)puVar3 + -0x14);
      uVar18 = puVar3[-2];
      uVar16 = puVar3[-1];
      uVar15 = *puVar3;
      if (fVar22 < fVar12) {
        in_x8[0xd] = fVar22;
        fVar12 = fVar22;
      }
                    /* try { // try from 00561d80 to 00661d93 has its CatchHandler @ 00561ee0 */
      fVar22 = *(float *)(puVar3 + 3);
      if (fVar22 < fVar13) {
                    /* try { // try from 00561d98 to 00661da3 has its CatchHandler @ 00561e70 */
        in_x8[0xe] = fVar22;
        fVar13 = fVar22;
      }
      lVar2 = lVar2 + 1;
      fVar10 = fVar19 + fVar10;
                    /* try { // try from 00561da4 to 00661ee3 has its CatchHandler @ 00561d54 */
      fVar9 = fVar19 * fVar21 + fVar9;
      uVar5 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar19 + (float)((ulong)uVar5 >> 0x20),
                       (float)uVar20 * fVar19 + (float)uVar5);
      fVar6 = fVar17 + fVar6;
      uVar11 = CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar11 >> 0x20),
                        (float)uVar18 + (float)uVar11);
      fVar17 = (float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar7 >> 0x20);
      uVar7 = CONCAT44(fVar17,(float)uVar16 + (float)uVar7);
      uVar8 = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                       (float)uVar15 + (float)uVar8);
      fVar4 = fVar14 + fVar4;
      puVar3 = (undefined8 *)((long)puVar3 + 0x3c);
    } while (lVar2 < iVar1);
    in_x8[10] = fVar4;
    in_x8[0xb] = fVar10;
    *in_x8 = fVar9;
    *(undefined8 *)(in_x8 + 1) = uVar5;
    in_x8[3] = fVar6;
    *(undefined8 *)(in_x8 + 4) = uVar11;
    *(undefined8 *)(in_x8 + 6) = uVar7;
    *(undefined8 *)(in_x8 + 8) = uVar8;
  }
  fVar10 = 1.0 / fVar10;
  fVar13 = 1.0 / (float)iVar1;
  *in_x8 = fVar9 * fVar10;
  *(ulong *)(in_x8 + 1) = CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar10,(float)uVar5 * fVar10);
  in_x8[3] = fVar13 * fVar6;
  *(ulong *)(in_x8 + 4) = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar13,(float)uVar11 * fVar13);
  in_x8[6] = fVar13 * (float)uVar7;
  in_x8[7] = fVar13 * fVar17;
  *(ulong *)(in_x8 + 8) = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar13,(float)uVar8 * fVar13);
  in_x8[10] = fVar13 * fVar4;
  return;
}



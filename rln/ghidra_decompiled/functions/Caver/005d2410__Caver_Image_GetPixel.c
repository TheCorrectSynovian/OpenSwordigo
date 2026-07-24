/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2410
 * Function: Caver::Image::GetPixel
 * Signature: undefined __cdecl GetPixel(int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Image::GetPixel(int, int) const */

void Caver::Image::GetPixel(int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  int in_w2;
  float *in_x8;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = DAT_00698100;
  fVar6 = DAT_00683ffc;
  uVar3 = (ulong)(uint)param_1;
  if (7 < *(int *)(uVar3 + 0xc) - 1U) {
    return;
  }
  puVar1 = (ushort *)
           (*(long *)(uVar3 + 0x18) +
           (long)((param_2 + *(int *)(uVar3 + 4) * in_w2) * *(int *)(uVar3 + 0x10)));
  switch(*(int *)(uVar3 + 0xc)) {
  case 1:
    fVar4 = (float)NEON_ucvtf((uint)(byte)*puVar1);
    *in_x8 = fVar4 / DAT_00683ffc;
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar1 + 1));
    in_x8[1] = fVar4 / fVar6;
    fVar4 = (float)NEON_ucvtf((uint)(byte)puVar1[1]);
    in_x8[2] = fVar4 / fVar6;
    uVar5 = (uint)*(byte *)((long)puVar1 + 3);
    goto LAB_005d2594;
  case 2:
    uVar2 = *puVar1;
    fVar6 = 15.0;
    uVar8 = NEON_fmov(0x41700000,4);
    in_x8[2] = (float)(uVar2 >> 4 & 0xf) / 15.0;
    uVar7 = NEON_ucvtf((ulong)CONCAT24(uVar2 >> 8,(uint)(uVar2 >> 0xc)) & 0xfffffffff,4);
    *(ulong *)in_x8 =
         CONCAT44((float)((ulong)uVar7 >> 0x20) / (float)((ulong)uVar8 >> 0x20),
                  (float)uVar7 / (float)uVar8);
    fVar4 = (float)(uVar2 & 0xf);
    goto LAB_005d2598;
  case 3:
    goto switchD_005d2448_caseD_3;
  case 4:
    fVar4 = (float)NEON_ucvtf((uint)(byte)*puVar1);
    *in_x8 = fVar4 / DAT_00683ffc;
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)((long)puVar1 + 1));
    in_x8[1] = fVar4 / fVar6;
    fVar4 = (float)NEON_ucvtf((uint)(byte)puVar1[1]);
    in_x8[2] = fVar4 / fVar6;
    fVar4 = 1.0;
    break;
  case 5:
    uVar2 = *puVar1;
    in_x8[2] = (float)(uVar2 & 0x1f) / 31.0;
    uVar7 = NEON_ucvtf((ulong)CONCAT24(uVar2 >> 5,(uint)(uVar2 >> 0xb)) & 0x3fffffffff,4);
    *(ulong *)in_x8 =
         CONCAT44((float)((ulong)uVar7 >> 0x20) / (float)((ulong)uVar8 >> 0x20),
                  (float)uVar7 / (float)uVar8);
    fVar4 = 1.0;
    break;
  case 6:
    fVar6 = (float)NEON_ucvtf((uint)(byte)*puVar1);
    fVar6 = fVar6 / DAT_00683ffc;
    in_x8[1] = fVar6;
    in_x8[2] = fVar6;
    *in_x8 = fVar6;
    fVar4 = 1.0;
    break;
  case 7:
    uVar8 = NEON_fmov(0x3f800000,4);
    in_x8[2] = 1.0;
    *(undefined8 *)in_x8 = uVar8;
    uVar5 = (uint)(byte)*puVar1;
    fVar6 = DAT_00683ffc;
    goto LAB_005d2594;
  case 8:
    fVar4 = (float)NEON_ucvtf((uint)(byte)*puVar1);
    fVar4 = fVar4 / DAT_00683ffc;
    in_x8[1] = fVar4;
    in_x8[2] = fVar4;
    *in_x8 = fVar4;
    uVar5 = (uint)*(byte *)((long)puVar1 + 1);
LAB_005d2594:
    fVar4 = (float)NEON_ucvtf(uVar5);
LAB_005d2598:
    fVar4 = fVar4 / fVar6;
  }
  in_x8[3] = fVar4;
switchD_005d2448_caseD_3:
  return;
}



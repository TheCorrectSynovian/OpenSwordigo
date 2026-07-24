/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b19f0
 * Function: Caver::Rectangle::TransformedRectsIntersect
 * Signature: undefined __cdecl TransformedRectsIntersect(Rectangle * param_1, Vector2 param_2, float param_3, float param_4, Rectangle * param_5, Vector2 param_6, float param_7, float param_8)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::TransformedRectsIntersect(Caver::Rectangle const&, Caver::Vector2, float,
   float, Caver::Rectangle const&, Caver::Vector2, float, float) */

void Caver::Rectangle::TransformedRectsIntersect
               (float param_1_00,float param_2,float param_3,float param_4,undefined8 *param_1,
               undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  local_90 = (float)*param_1 + (float)param_1[1] * 0.5;
  fStack_8c = (float)((ulong)*param_1 >> 0x20) + (float)((ulong)param_1[1] >> 0x20) * 0.5;
  Vector2::Rotate((Vector2 *)&local_90,param_1_00);
  uVar11 = *param_6;
  fVar3 = local_90 * param_2;
  fVar7 = fStack_8c * param_2;
  local_98 = (float)*param_7 + (float)param_7[1] * 0.5;
  fStack_94 = (float)((ulong)*param_7 >> 0x20) + (float)((ulong)param_7[1] >> 0x20) * 0.5;
  Vector2::Rotate((Vector2 *)&local_98,param_3);
  fVar13 = *(float *)(param_7 + 1);
  fVar14 = *(float *)((long)param_7 + 0xc);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1848 with catch @ 005b1a98
                        */
  fVar10 = *(float *)(param_1 + 1);
  fVar12 = *(float *)((long)param_1 + 0xc);
  uVar9 = *param_8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b17dc with catch @ 005b1aa4
                        */
  fVar4 = local_98 * param_4;
  fVar8 = fStack_94 * param_4;
                    /* try { // try from 005b1ac4 to 006b1aeb has its CatchHandler @ 005b1af4 */
  fVar5 = cosf(param_1_00 - param_3);
  fVar6 = sinf(param_1_00 - param_3);
  local_a0 = (fVar4 + (float)uVar9) - (fVar3 + (float)uVar11);
  fStack_9c = (fVar8 + (float)((ulong)uVar9 >> 0x20)) - (fVar7 + (float)((ulong)uVar11 >> 0x20));
                    /* try { // try from 005b1aec to 006b1af7 has its CatchHandler @ 005b171c */
  Vector2::Rotate((Vector2 *)&local_a0,-param_3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1ac4 with catch @ 005b1af4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1b2c with catch @ 005b1af8
                       catch(type#1 @ 00000000) { ... } // from try @ 005b1c9c with catch @ 005b1af8
                        */
  fVar4 = fVar12 * param_2 * 0.5;
  fVar12 = fVar10 * param_2 * 0.5;
  fVar8 = fVar5 * fVar6;
  fVar7 = fVar13 * param_4 * 0.5;
  fVar16 = fVar12 * fVar5;
  fVar12 = fVar12 * fVar6;
  fVar3 = fVar16 - fVar4 * fVar6;
                    /* try { // try from 005b1b24 to 006b1b2b has its CatchHandler @ 005b1b78 */
  fVar16 = -(fVar4 * fVar6) - fVar16;
  fVar10 = fVar4 * fVar5 + fVar12;
                    /* try { // try from 005b1b2c to 006b1bef has its CatchHandler @ 005b1af8 */
  fVar13 = fVar7 + local_a0;
  fVar12 = fVar4 * fVar5 - fVar12;
  fVar4 = fVar16;
  fVar5 = fVar12;
  if (fVar8 < 0.0) {
    fVar4 = fVar3;
    fVar5 = fVar10;
    fVar3 = fVar16;
    fVar8 = fVar10;
    fVar10 = fVar12;
  }
  fVar12 = -fVar5;
  fVar16 = -fVar4;
  if (0.0 <= fVar6) {
    fVar12 = fVar5;
    fVar16 = fVar4;
  }
  bVar2 = false;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1b24 with catch @ 005b1b78
                        */
  if ((fVar16 <= fVar13) && (fVar7 = local_a0 - fVar7, fVar16 <= -fVar7)) {
    fVar5 = fVar14 * param_4 * 0.5;
    fVar6 = fStack_9c - fVar5;
    fVar4 = fVar10;
    if (fVar8 == 0.0) {
      fVar8 = -fVar10;
    }
    else {
      fVar8 = fVar7 - fVar3;
      if (0.0 < (fVar13 - fVar3) * fVar8) {
        fVar15 = -fVar16;
        fVar4 = -fVar12;
        fVar14 = fVar13 - fVar3;
        if (0.0 <= fVar8) {
          fVar15 = fVar16;
          fVar4 = fVar12;
          fVar14 = fVar8;
        }
                    /* try { // try from 005b1bf0 to 006b1bf3 has its CatchHandler @ 005b1c94 */
        fVar4 = fVar10 + (fVar14 * (fVar10 + fVar4)) / (fVar3 + fVar15);
      }
      fVar7 = fVar7 + fVar3;
      fVar8 = -fVar10;
      if (0.0 < (fVar13 + fVar3) * fVar7) {
        if (0.0 <= fVar7) {
          fVar16 = fVar16 - fVar3;
          fVar8 = fVar12;
          fVar12 = fVar10;
        }
        else {
          fVar16 = -fVar3 - fVar16;
          fVar7 = fVar13 + fVar3;
        }
        fVar8 = ((fVar8 - fVar12) * fVar7) / fVar16 - fVar10;
      }
    }
    if ((fVar6 <= fVar4) || (fVar6 <= fVar8)) {
      fVar5 = fVar5 + fStack_9c;
      if (fVar4 <= fVar5) {
        bVar2 = true;
      }
      else {
        bVar2 = fVar8 <= fVar5;
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1bf0 with catch @ 005b1c94
                        */
                    /* try { // try from 005b1c98 to 006b1c9b has its CatchHandler @ 005b1ca4 */
                    /* try { // try from 005b1c9c to 006b1ca7 has its CatchHandler @ 005b1af8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b1c98 with catch @ 005b1ca4
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}



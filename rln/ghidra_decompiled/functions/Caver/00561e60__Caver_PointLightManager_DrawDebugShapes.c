/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00561e60
 * Function: Caver::PointLightManager::DrawDebugShapes
 * Signature: undefined __thiscall DrawDebugShapes(PointLightManager * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PointLightManager::DrawDebugShapes(Caver::RenderingContext*) */

void __thiscall
Caver::PointLightManager::DrawDebugShapes(PointLightManager *this,RenderingContext *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  int local_138 [2];
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a4;
  long local_98;
  
  uVar4 = DAT_00695b70;
  fVar3 = DAT_00683ffc;
                    /* catch() { ... } // from try @ 00561d98 with catch @ 00561e70 */
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  iVar8 = *(int *)(this + 0x10);
  if (0 < iVar8) {
    lVar7 = *(long *)(this + 0x18);
    lVar12 = 0;
                    /* catch() { ... } // from try @ 00561d80 with catch @ 00561ee0 */
    do {
                    /* try { // try from 00561ee4 to 00661f0f has its CatchHandler @ 00561ee4
                       catch() { ... } // from try @ 00561ee4 with catch @ 00561ee4
                       catch() { ... } // from try @ 00561f34 with catch @ 00561ee4 */
      lVar13 = lVar12 * 0x10;
      if (**(int **)(lVar7 + lVar13) != 0) {
        local_130 = -NAN;
        RenderingContext::SetColor(param_1,(Color *)&local_130);
                    /* try { // try from 00561f10 to 00661f23 has its CatchHandler @ 00562070 */
        PointLightGroup::CombinedLight();
        local_d8 = local_130 + -10.0;
                    /* try { // try from 00561f28 to 00661f33 has its CatchHandler @ 00562000 */
        fVar15 = fStack_12c + (float)uVar4;
        local_b8 = fStack_128 + (float)((ulong)uVar4 >> 0x20);
        local_cc = local_130 + 10.0;
        fStack_bc = fStack_12c + 10.0;
                    /* try { // try from 00561f34 to 00662073 has its CatchHandler @ 00561ee4 */
        local_d4 = CONCAT44(local_b8,fVar15);
        local_c8 = CONCAT44(local_b8,fVar15);
        local_a4 = CONCAT44(local_b8,fVar15);
        local_c0 = local_cc;
        local_b4 = local_d8;
        fStack_b0 = fStack_bc;
        local_ac = local_b8;
        local_a8 = local_d8;
        RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,&local_d8);
        RenderingContext::DrawArrays(param_1,3,0,5);
        lVar7 = *(long *)(this + 0x18);
        piVar9 = *(int **)(lVar7 + lVar13);
        iVar8 = *piVar9;
        if (0 < iVar8) {
          fVar15 = *(float *)(*(long *)(piVar9 + 2) + 0x2c);
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if (iVar8 != 1) {
            lVar11 = 1;
            pfVar10 = (float *)(*(long *)(piVar9 + 2) + 0x68);
            do {
              lVar11 = lVar11 + 1;
              fVar5 = *pfVar10;
              if (*pfVar10 <= fVar15) {
                fVar5 = fVar15;
              }
              fVar15 = fVar5;
              pfVar10 = pfVar10 + 0xf;
            } while (lVar11 < iVar8);
            if (iVar8 < 1) goto LAB_00562088;
          }
          lVar14 = 0;
          lVar11 = 0;
          do {
            local_f0 = CONCAT44(fStack_12c,local_130);
            local_e8 = fStack_128;
                    /* catch() { ... } // from try @ 00561f28 with catch @ 00562000 */
            puVar1 = (undefined8 *)(*(long *)(piVar9 + 2) + lVar14);
            local_e4 = *puVar1;
            local_dc = *(undefined4 *)(puVar1 + 1);
            uVar6 = (uint)((*(float *)((long)puVar1 + 0x2c) / fVar15) * fVar3);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            local_138[0] = (uVar6 & 0xff) * 0x1010101;
            RenderingContext::SetColor(param_1,(Color *)local_138);
            RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,&local_f0);
            RenderingContext::DrawArrays(param_1,1,0,2);
            lVar7 = *(long *)(this + 0x18);
                    /* catch() { ... } // from try @ 00561f10 with catch @ 00562070 */
            lVar11 = lVar11 + 1;
                    /* try { // try from 00562074 to 006620a3 has its CatchHandler @ 00562074
                       catch() { ... } // from try @ 00562074 with catch @ 00562074
                       catch() { ... } // from try @ 005620c8 with catch @ 00562074
                       catch() { ... } // from try @ 00562134 with catch @ 00562074
                       catch() { ... } // from try @ 005621fc with catch @ 00562074
                       catch() { ... } // from try @ 005622e8 with catch @ 00562074
                       catch() { ... } // from try @ 00562538 with catch @ 00562074 */
            lVar14 = lVar14 + 0x3c;
            piVar9 = *(int **)(lVar7 + lVar13);
          } while (lVar11 < *piVar9);
        }
LAB_00562088:
        iVar8 = *(int *)(this + 0x10);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar8);
  }
                    /* try { // try from 005620a4 to 006620b7 has its CatchHandler @ 005625cc */
  if (*(long *)(lVar2 + 0x28) == local_98) {
                    /* try { // try from 005620bc to 006620c7 has its CatchHandler @ 00562558 */
                    /* try { // try from 005620c8 to 0066211b has its CatchHandler @ 00562074 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



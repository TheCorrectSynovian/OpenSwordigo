/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00554268
 * Function: Caver::ParticleSystem::BuildVertexDataWithCamera
 * Signature: undefined __thiscall BuildVertexDataWithCamera(ParticleSystem * this, Vector3 * param_1, Vector3 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&, Caver::Vector3 const&) */

void __thiscall
Caver::ParticleSystem::BuildVertexDataWithCamera
          (ParticleSystem *this,Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  if (0 < *(int *)(this + 0x24)) {
    lVar7 = 0;
                    /* catch() { ... } // from try @ 00554030 with catch @ 005542bc */
                    /* try { // try from 005542c0 to 0065432f has its CatchHandler @ 005542c0
                       catch() { ... } // from try @ 005542c0 with catch @ 005542c0
                       catch() { ... } // from try @ 00554354 with catch @ 005542c0 */
    iVar4 = 0;
    do {
      lVar9 = *(long *)(this + 8);
      piVar12 = (int *)(*(long *)(this + 0x28) + lVar7 * 0x44);
      iVar2 = *piVar12;
      uVar16 = *(undefined8 *)(piVar12 + 1);
      local_98 = CONCAT44((float)((ulong)uVar16 >> 0x20) -
                          (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                          (float)uVar16 - (float)*(undefined8 *)param_1);
      local_90 = (float)piVar12[3] - *(float *)(param_1 + 8);
      Vector3::Normalize((Vector3 *)&local_98);
                    /* try { // try from 00554330 to 00654343 has its CatchHandler @ 0055447c */
      local_a8 = local_98._4_4_ * *(float *)(param_2 + 8) - local_90 * *(float *)(param_2 + 4);
                    /* try { // try from 00554344 to 00654353 has its CatchHandler @ 0055440c */
      fStack_a4 = local_90 * *(float *)param_2 - *(float *)(param_2 + 8) * (float)local_98;
      fStack_a0 = *(float *)(param_2 + 4) * (float)local_98 - local_98._4_4_ * *(float *)param_2;
                    /* try { // try from 00554354 to 00654487 has its CatchHandler @ 005542c0 */
      Vector3::Normalize((Vector3 *)&local_a8);
      fVar26 = local_98._4_4_ * local_a8;
      fVar23 = (float)local_98 * fStack_a4;
      fVar20 = fStack_a0 * local_98._4_4_;
      fVar22 = local_a8 * local_90;
      fVar17 = fStack_a4 * local_90;
      fVar18 = fStack_a0 * (float)local_98;
      fVar14 = sinf((float)piVar12[8]);
      fVar15 = cosf((float)piVar12[8]);
      lVar13 = 0;
      do {
        lVar1 = lVar9 + (long)iVar2 * 0x58 + lVar13 * 8;
        uVar16 = *(undefined8 *)(lVar1 + 0x18);
                    /* catch() { ... } // from try @ 00554344 with catch @ 0055440c */
        local_b0 = CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)piVar12[10] *
                            (float)((ulong)*(undefined8 *)(piVar12 + 0xc) >> 0x20),
                            (float)uVar16 * (float)piVar12[10] *
                            (float)*(undefined8 *)(piVar12 + 0xc));
        Vector2::RotateWithSinCos((Vector2 *)&local_b0,fVar14,fVar15);
        uVar16 = *(undefined8 *)(piVar12 + 1);
        fVar24 = (float)piVar12[3];
        fVar21 = (float)piVar12[0xe];
        fVar25 = (float)NEON_ucvtf((uint)*(byte *)(piVar12 + 7));
        uVar6 = (uint)(fVar21 * fVar25);
                    /* catch() { ... } // from try @ 00554330 with catch @ 0055447c */
        fVar25 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar12 + 0x1d));
                    /* try { // try from 00554488 to 006545a7 has its CatchHandler @ 00554488
                       catch() { ... } // from try @ 00554488 with catch @ 00554488
                       catch() { ... } // from try @ 005545d0 with catch @ 00554488
                       catch() { ... } // from try @ 005546e8 with catch @ 00554488
                       catch() { ... } // from try @ 00554c44 with catch @ 00554488
                       catch() { ... } // from try @ 00555244 with catch @ 00554488
                       catch() { ... } // from try @ 00555bac with catch @ 00554488 */
        uVar8 = (uint)(fVar21 * fVar25);
        fVar25 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar12 + 0x1e));
        puVar5 = (undefined8 *)
                 (*(long *)(this + 0x40) + (long)*(int *)(this + 0x30) * (long)(iVar4 + (int)lVar13)
                 );
        uVar11 = (uint)(fVar21 * fVar25);
        bVar19 = *(byte *)((long)piVar12 + 0x1f);
        *puVar5 = CONCAT44(fStack_a4 * (float)local_b0 + (float)((ulong)uVar16 >> 0x20) +
                           (fVar18 - fVar22) * local_b0._4_4_,
                           local_a8 * (float)local_b0 + (float)uVar16 +
                           (fVar17 - fVar20) * local_b0._4_4_);
        *(float *)(puVar5 + 1) =
             (float)local_b0 * fStack_a0 + fVar24 + (fVar26 - fVar23) * local_b0._4_4_;
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
        fVar25 = (float)NEON_ucvtf((uint)bVar19);
        *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)(lVar1 + 0x38);
        if (0xfe < (int)uVar11) {
          uVar11 = 0xff;
        }
        uVar10 = (uint)(fVar21 * fVar25);
        if (0xfe < (int)uVar10) {
          uVar10 = 0xff;
        }
        if (this[0xb8] != (ParticleSystem)0x0) {
          uVar6 = (uint)(*(float *)(this + 0xa8) * (float)(uVar6 & 0xff));
          uVar8 = (uint)(*(float *)(this + 0xac) * (float)(uVar8 & 0xff));
          uVar11 = (uint)(*(float *)(this + 0xb0) * (float)(uVar11 & 0xff));
          uVar10 = (uint)(*(float *)(this + 0xb4) * (float)(uVar10 & 0xff));
        }
        lVar13 = lVar13 + 1;
        *(uint *)((long)puVar5 + 0x14) =
             uVar6 & 0xff | (uVar8 & 0xff) << 8 | (uVar11 & 0xff) << 0x10 | uVar10 << 0x18;
      } while (lVar13 != 4);
      lVar7 = lVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (lVar7 < *(int *)(this + 0x24));
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* try { // try from 005545a8 to 006545cf has its CatchHandler @ 00555a04 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



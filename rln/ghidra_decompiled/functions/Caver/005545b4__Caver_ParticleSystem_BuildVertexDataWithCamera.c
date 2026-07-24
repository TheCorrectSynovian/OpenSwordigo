/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005545b4
 * Function: Caver::ParticleSystem::BuildVertexDataWithCamera
 * Signature: undefined __thiscall BuildVertexDataWithCamera(ParticleSystem * this, Vector3 * param_1, Vector3 * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::BuildVertexDataWithCamera(Caver::Vector3 const&, Caver::Vector3 const&,
   Caver::Matrix4 const&) */

void __thiscall
Caver::ParticleSystem::BuildVertexDataWithCamera
          (ParticleSystem *this,Vector3 *param_1,Vector3 *param_2,Matrix4 *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  Vector3 local_98 [8];
  float local_90;
  long local_88;
  
                    /* try { // try from 005545d0 to 00654653 has its CatchHandler @ 00554488 */
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  if (0 < *(int *)(this + 0x24)) {
    lVar7 = 0;
    iVar4 = 0;
    do {
      lVar13 = *(long *)(this + 8);
      piVar11 = (int *)(*(long *)(this + 0x28) + lVar7 * 0x44);
      iVar2 = *piVar11;
      local_b8 = (float)*(undefined8 *)(piVar11 + 1);
      fStack_b4 = (float)((ulong)*(undefined8 *)(piVar11 + 1) >> 0x20);
      local_b0 = (float)piVar11[3];
      local_ac = 0x3f800000;
      C_Matrix4Vector4Mul((float *)param_3,&local_b8,(float *)&local_a8);
                    /* try { // try from 00554654 to 0065465b has its CatchHandler @ 005556fc */
                    /* try { // try from 0055465c to 0065466f has its CatchHandler @ 005556f8 */
      Vector3::Vector3(local_98,(Vector4 *)&local_a8);
                    /* try { // try from 00554670 to 00654683 has its CatchHandler @ 00555804 */
      local_a8 = CONCAT44(local_98._4_4_ - (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                          local_98._0_4_ - (float)*(undefined8 *)param_1);
      local_a0 = local_90 - *(float *)(param_1 + 8);
      Vector3::Normalize((Vector3 *)&local_a8);
                    /* try { // try from 005546bc to 006546c3 has its CatchHandler @ 005554c4 */
      local_b8 = local_a8._4_4_ * *(float *)(param_2 + 8) - local_a0 * *(float *)(param_2 + 4);
      fStack_b4 = local_a0 * *(float *)param_2 - *(float *)(param_2 + 8) * (float)local_a8;
      local_b0 = *(float *)(param_2 + 4) * (float)local_a8 - local_a8._4_4_ * *(float *)param_2;
      Vector3::Normalize((Vector3 *)&local_b8);
                    /* try { // try from 005546e4 to 006546e7 has its CatchHandler @ 00555804 */
                    /* try { // try from 005546e8 to 006547a3 has its CatchHandler @ 00554488 */
      fVar25 = local_a8._4_4_ * local_b8;
      fVar23 = (float)local_a8 * fStack_b4;
      fVar20 = local_b0 * local_a8._4_4_;
      fVar22 = local_b8 * local_a0;
      fVar16 = fStack_b4 * local_a0;
      fVar18 = local_b0 * (float)local_a8;
      fVar14 = sinf((float)piVar11[8]);
      fVar15 = cosf((float)piVar11[8]);
      lVar12 = 0;
      do {
        lVar1 = lVar13 + (long)iVar2 * 0x58 + lVar12 * 8;
        uVar17 = *(undefined8 *)(lVar1 + 0x18);
        local_c0 = CONCAT44((float)((ulong)uVar17 >> 0x20) * (float)piVar11[10] *
                            (float)((ulong)*(undefined8 *)(piVar11 + 0xc) >> 0x20),
                            (float)uVar17 * (float)piVar11[10] *
                            (float)*(undefined8 *)(piVar11 + 0xc));
        Vector2::RotateWithSinCos((Vector2 *)&local_c0,fVar14,fVar15);
                    /* try { // try from 005547a4 to 006547ab has its CatchHandler @ 005556f4 */
                    /* try { // try from 005547ac to 006547bf has its CatchHandler @ 005556f0 */
        fVar21 = (float)piVar11[0xe];
                    /* try { // try from 005547c0 to 006547d3 has its CatchHandler @ 005557c4 */
        fVar24 = (float)NEON_ucvtf((uint)*(byte *)(piVar11 + 7));
        uVar6 = (uint)(fVar21 * fVar24);
        fVar24 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar11 + 0x1d));
        uVar8 = (uint)(fVar21 * fVar24);
        fVar24 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar11 + 0x1e));
        puVar5 = (undefined8 *)
                 (*(long *)(this + 0x40) + (long)*(int *)(this + 0x30) * (long)(iVar4 + (int)lVar12)
                 );
                    /* try { // try from 0055480c to 00654813 has its CatchHandler @ 00555494 */
        uVar10 = (uint)(fVar21 * fVar24);
        bVar19 = *(byte *)((long)piVar11 + 0x1f);
        *puVar5 = CONCAT44(fStack_b4 * (float)local_c0 + local_98._4_4_ +
                           (fVar18 - fVar22) * local_c0._4_4_,
                           local_b8 * (float)local_c0 + local_98._0_4_ +
                           (fVar16 - fVar20) * local_c0._4_4_);
        *(float *)(puVar5 + 1) =
             (float)local_c0 * local_b0 + local_90 + (fVar25 - fVar23) * local_c0._4_4_;
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        if (0xfe < (int)uVar8) {
          uVar8 = 0xff;
        }
                    /* try { // try from 00554834 to 00654837 has its CatchHandler @ 005557c4 */
        fVar24 = (float)NEON_ucvtf((uint)bVar19);
        *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)(lVar1 + 0x38);
        if (0xfe < (int)uVar10) {
          uVar10 = 0xff;
        }
        uVar9 = (uint)(fVar21 * fVar24);
        if (0xfe < (int)uVar9) {
          uVar9 = 0xff;
        }
        if (this[0xb8] != (ParticleSystem)0x0) {
                    /* try { // try from 00554874 to 0065487b has its CatchHandler @ 005556ec */
                    /* try { // try from 0055487c to 0065488f has its CatchHandler @ 005556e8 */
                    /* try { // try from 00554890 to 006548a3 has its CatchHandler @ 00555784 */
          uVar6 = (uint)(*(float *)(this + 0xa8) * (float)(uVar6 & 0xff));
          uVar8 = (uint)(*(float *)(this + 0xac) * (float)(uVar8 & 0xff));
          uVar10 = (uint)(*(float *)(this + 0xb0) * (float)(uVar10 & 0xff));
          uVar9 = (uint)(*(float *)(this + 0xb4) * (float)(uVar9 & 0xff));
        }
        lVar12 = lVar12 + 1;
        *(uint *)((long)puVar5 + 0x14) =
             uVar6 & 0xff | (uVar8 & 0xff) << 8 | (uVar10 & 0xff) << 0x10 | uVar9 << 0x18;
      } while (lVar12 != 4);
      lVar7 = lVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (lVar7 < *(int *)(this + 0x24));
  }
                    /* try { // try from 005548dc to 006548e3 has its CatchHandler @ 00555464 */
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* try { // try from 00554904 to 00654907 has its CatchHandler @ 00555784 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



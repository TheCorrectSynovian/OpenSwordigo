/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055491c
 * Function: Caver::ParticleSystem::BuildVertexDataWithTransform
 * Signature: undefined __thiscall BuildVertexDataWithTransform(ParticleSystem * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleSystem::BuildVertexDataWithTransform(Caver::Matrix4 const&) */

void __thiscall
Caver::ParticleSystem::BuildVertexDataWithTransform(ParticleSystem *this,Matrix4 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  byte bVar20;
  float fVar21;
  Vector3 local_d0 [8];
  float local_c8;
  Vector3 local_c0 [8];
  float local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  Vector3 local_88 [8];
  float local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00554944 to 0065494b has its CatchHandler @ 005556e4 */
  local_78 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0055494c to 0065495f has its CatchHandler @ 005556e0 */
  if (*(int *)(this + 0x24) != 0) {
                    /* try { // try from 00554960 to 00654973 has its CatchHandler @ 00555744 */
    uStack_a8 = _UNK_006837e8;
    local_b0 = _DAT_006837e0;
    C_Matrix4Vector4Mul((float *)param_1,(float *)&local_b0,(float *)&local_98);
    Vector3::Vector3(local_88,(Vector4 *)&local_98);
    uStack_a8 = _UNK_00683498;
    local_b0 = _DAT_00683490;
    C_Matrix4Vector4Mul((float *)param_1,(float *)&local_b0,(float *)&local_98);
                    /* try { // try from 005549ac to 006549b3 has its CatchHandler @ 00555434 */
    Vector3::Vector3(local_c0,(Vector4 *)&local_98);
    if (0 < *(int *)(this + 0x24)) {
      lVar7 = 0;
      iVar4 = 0;
      do {
                    /* try { // try from 005549d4 to 006549d7 has its CatchHandler @ 00555744 */
        piVar12 = (int *)(*(long *)(this + 0x28) + lVar7 * 0x44);
        local_b0 = *(undefined8 *)(piVar12 + 1);
        lVar8 = *(long *)(this + 8);
        iVar2 = *piVar12;
                    /* try { // try from 005549f0 to 006549fb has its CatchHandler @ 00555a54 */
                    /* try { // try from 005549fc to 00654a03 has its CatchHandler @ 005559ec */
        uStack_a8 = CONCAT44(0x3f800000,piVar12[3]);
        C_Matrix4Vector4Mul((float *)param_1,(float *)&local_b0,(float *)&local_98);
        Vector3::Vector3(local_d0,(Vector4 *)&local_98);
        fVar14 = sinf((float)piVar12[8]);
        fVar15 = cosf((float)piVar12[8]);
                    /* try { // try from 00554a38 to 00654a3b has its CatchHandler @ 00555a54 */
                    /* try { // try from 00554a40 to 00654a53 has its CatchHandler @ 005559e8 */
        lVar13 = 0;
                    /* try { // try from 00554a54 to 00654a5f has its CatchHandler @ 00555974 */
        do {
          lVar1 = lVar8 + (long)iVar2 * 0x58 + lVar13 * 8;
          uVar16 = *(undefined8 *)(lVar1 + 0x18);
                    /* try { // try from 00554a78 to 00654a83 has its CatchHandler @ 00555a58 */
                    /* try { // try from 00554a84 to 00654a8b has its CatchHandler @ 00555970 */
          local_98 = CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)piVar12[10] *
                              (float)((ulong)*(undefined8 *)(piVar12 + 0xc) >> 0x20),
                              (float)uVar16 * (float)piVar12[10] *
                              (float)*(undefined8 *)(piVar12 + 0xc));
                    /* try { // try from 00554a98 to 00654aa3 has its CatchHandler @ 00555968 */
          Vector2::RotateWithSinCos((Vector2 *)&local_98,fVar14,fVar15);
                    /* try { // try from 00554ab0 to 00654ab7 has its CatchHandler @ 00555a68 */
          fVar19 = (float)piVar12[0xe];
                    /* try { // try from 00554ae0 to 00654ae7 has its CatchHandler @ 005558cc */
                    /* try { // try from 00554ae8 to 00654af7 has its CatchHandler @ 005558d0 */
          fVar18 = (float)NEON_ucvtf((uint)*(byte *)(piVar12 + 7));
          fVar21 = (float)NEON_ucvtf((uint)*(byte *)((long)piVar12 + 0x1d));
          uVar6 = (uint)(fVar19 * fVar18);
          bVar17 = *(byte *)((long)piVar12 + 0x1e);
          puVar5 = (undefined8 *)
                   (*(long *)(this + 0x40) +
                   (long)*(int *)(this + 0x30) * (long)(iVar4 + (int)lVar13));
          uVar9 = (uint)(fVar19 * fVar21);
          bVar20 = *(byte *)((long)piVar12 + 0x1f);
          *puVar5 = CONCAT44(local_c0._4_4_ * (float)local_98 + local_d0._4_4_ +
                             local_88._4_4_ * local_98._4_4_,
                             local_c0._0_4_ * (float)local_98 + local_d0._0_4_ +
                             local_88._0_4_ * local_98._4_4_);
          *(float *)(puVar5 + 1) = (float)local_98 * local_b8 + local_c8 + local_98._4_4_ * local_80
          ;
          fVar18 = (float)NEON_ucvtf((uint)bVar17);
                    /* try { // try from 00554b30 to 00654b37 has its CatchHandler @ 00555570 */
          uVar10 = (uint)(fVar19 * fVar18);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          fVar18 = (float)NEON_ucvtf((uint)bVar20);
          *(undefined8 *)((long)puVar5 + 0xc) = *(undefined8 *)(lVar1 + 0x38);
          if (0xfe < (int)uVar9) {
            uVar9 = 0xff;
          }
                    /* try { // try from 00554b58 to 00654b5b has its CatchHandler @ 005558d0 */
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          uVar11 = (uint)(fVar19 * fVar18);
          if (0xfe < (int)uVar11) {
            uVar11 = 0xff;
          }
          if (this[0xb8] != (ParticleSystem)0x0) {
                    /* try { // try from 00554b74 to 00654b7f has its CatchHandler @ 00555a68 */
                    /* try { // try from 00554ba4 to 00654bab has its CatchHandler @ 00555938 */
            uVar6 = (uint)(*(float *)(this + 0xa8) * (float)(uVar6 & 0xff));
            uVar9 = (uint)(*(float *)(this + 0xac) * (float)(uVar9 & 0xff));
            uVar10 = (uint)(*(float *)(this + 0xb0) * (float)(uVar10 & 0xff));
            uVar11 = (uint)(*(float *)(this + 0xb4) * (float)(uVar11 & 0xff));
          }
          lVar13 = lVar13 + 1;
                    /* try { // try from 00554bcc to 00654bcf has its CatchHandler @ 00555740 */
          *(uint *)((long)puVar5 + 0x14) =
               uVar6 & 0xff | (uVar9 & 0xff) << 8 | (uVar10 & 0xff) << 0x10 | uVar11 << 0x18;
        } while (lVar13 != 4);
                    /* try { // try from 00554be0 to 00654be7 has its CatchHandler @ 00555a68 */
        lVar7 = lVar7 + 1;
        iVar4 = iVar4 + 4;
      } while (lVar7 < *(int *)(this + 0x24));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00554c20 to 00654c23 has its CatchHandler @ 00555738 */
  return;
}



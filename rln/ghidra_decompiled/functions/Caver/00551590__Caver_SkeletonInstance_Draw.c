/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00551590
 * Function: Caver::SkeletonInstance::Draw
 * Signature: undefined __thiscall Draw(SkeletonInstance * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SkeletonInstance::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) const */

void __thiscall
Caver::SkeletonInstance::Draw(SkeletonInstance *this,RenderingContext *param_1,Matrix4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined8 local_1a0;
  undefined8 uStack_198;
  MeshInstance *local_190;
  long *local_188;
  float afStack_180 [16];
  float afStack_140 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
                    /* try { // try from 005515b0 to 006515d7 has its CatchHandler @ 005518c8 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  RenderingContext::SetLightingEnabled(param_1,true);
  MeshPrimitives::Cube(true);
  uVar14 = _UNK_00695488;
  uVar13 = _DAT_00695480;
  uVar12 = _UNK_00695478;
  uVar11 = _DAT_00695470;
  uVar10 = _UNK_00683808;
  uVar9 = _DAT_00683800;
  uVar8 = _UNK_006837f8;
  uVar7 = _DAT_006837f0;
  uVar6 = _UNK_006837e8;
  uVar5 = _DAT_006837e0;
  uVar4 = _UNK_00683498;
  uVar3 = _DAT_00683490;
  uVar15 = (ulong)**(uint **)this;
  if (0 < (int)**(uint **)this) {
    lVar17 = 0;
                    /* try { // try from 00551608 to 0065162f has its CatchHandler @ 005518b8 */
    lVar18 = 0x5c;
    do {
                    /* try { // try from 00551650 to 00651677 has its CatchHandler @ 005518a8 */
      fVar20 = (float)(int)lVar17 / (float)((int)uVar15 + -1);
      local_1a0 = CONCAT44(1.0 - fVar20,fVar20);
      uStack_198 = 0;
      Vector4::Normalize((Vector4 *)&local_1a0);
      uStack_198 = CONCAT44(0x3f800000,(undefined4)uStack_198);
      if (*(int *)param_1 == 0) {
        glMaterialfv(0x408,0x1200,&local_1a0);
                    /* try { // try from 00551698 to 006516bf has its CatchHandler @ 00551898 */
        glMaterialfv(0x408,0x1201,&local_1a0);
      }
      C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x10) + lVar18),(float *)&local_c0);
      uStack_f8 = uVar4;
      local_100 = uVar3;
      uStack_e8 = uVar6;
      local_f0 = uVar5;
      uStack_d8 = uVar8;
      local_e0 = uVar7;
      uStack_c8 = uVar12;
      local_d0 = uVar11;
      C_Matrix4Mul((float *)&local_c0,(float *)&local_100,(float *)&local_c0);
                    /* try { // try from 005516e0 to 00651707 has its CatchHandler @ 00551888 */
      uStack_f8 = uVar14;
      local_100 = uVar13;
      uStack_e8 = uVar6;
      local_f0 = uVar5;
      uStack_d8 = uVar8;
      local_e0 = uVar7;
      uStack_c8 = uVar10;
      local_d0 = uVar9;
      C_Matrix4Mul((float *)&local_c0,(float *)&local_100,(float *)&local_c0);
      RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_c0);
      MeshInstance::Draw(local_190,param_1);
                    /* try { // try from 00551728 to 0065174f has its CatchHandler @ 00551878 */
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0xdc;
      uVar15 = (ulong)**(int **)this;
    } while (lVar17 < (long)uVar15);
  }
  RenderingContext::SetLightingEnabled(param_1,false);
  uStack_98 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
  local_a0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
  uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
  uStack_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
  uStack_b8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
  local_c0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
  uStack_a8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
  local_b0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_c0);
                    /* try { // try from 00551770 to 00651797 has its CatchHandler @ 00551870 */
  local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
  RenderingContext::SetColor(param_1,(Color *)&local_c0);
  uVar4 = _UNK_00683808;
  uVar3 = _DAT_00683800;
  piVar16 = *(int **)this;
  if (0 < *piVar16) {
                    /* try { // try from 00551798 to 0065191b has its CatchHandler @ 00551478 */
    lVar17 = 0;
    lVar18 = 8;
    lVar19 = 0x5c;
    do {
      iVar1 = *(int *)(*(long *)(piVar16 + 2) + lVar18);
      if (-1 < iVar1) {
        C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x10) + lVar19),afStack_140);
        uStack_198 = uVar4;
        local_1a0 = uVar3;
        C_Matrix4Vector4Mul(afStack_140,(float *)&local_1a0,(float *)&local_100);
        uStack_b8 = uStack_f8;
        local_c0 = local_100;
        C_Matrix4Mul((float *)param_2,(float *)(*(long *)(this + 0x10) + (long)iVar1 * 0xdc + 0x5c),
                     afStack_180);
        uStack_198 = uVar4;
        local_1a0 = uVar3;
        C_Matrix4Vector4Mul(afStack_180,(float *)&local_1a0,(float *)&local_100);
        uStack_a8 = uStack_f8;
        local_b0 = local_100;
        RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0x10,&local_c0);
        RenderingContext::DrawArrays(param_1,1,0,2);
        piVar16 = *(int **)this;
      }
                    /* catch() { ... } // from try @ 00551544 with catch @ 00551860 */
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x90;
      lVar19 = lVar19 + 0xdc;
                    /* catch() { ... } // from try @ 00551770 with catch @ 00551870 */
    } while (lVar17 < *piVar16);
  }
                    /* catch() { ... } // from try @ 00551728 with catch @ 00551878 */
                    /* catch() { ... } // from try @ 005516e0 with catch @ 00551888 */
  if ((local_188 != (long *)0x0) &&
     (lVar17 = local_188[1], local_188[1] = lVar17 + -1, lVar17 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00551698 with catch @ 00551898 */
    (**(code **)(*local_188 + 0x10))(local_188);
    lVar17 = local_188[2];
                    /* catch() { ... } // from try @ 00551650 with catch @ 005518a8 */
    local_188[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
                    /* catch() { ... } // from try @ 00551608 with catch @ 005518b8 */
      (**(code **)(*local_188 + 0x18))(local_188);
    }
  }
                    /* catch() { ... } // from try @ 005515b0 with catch @ 005518c8 */
  if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00551568 with catch @ 005518d0 */
                    /* catch() { ... } // from try @ 005514f0 with catch @ 005518e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



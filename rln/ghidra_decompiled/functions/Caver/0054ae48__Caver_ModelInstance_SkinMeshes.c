/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054ae48
 * Function: Caver::ModelInstance::SkinMeshes
 * Signature: undefined __thiscall SkinMeshes(ModelInstance * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelInstance::SkinMeshes(Caver::Matrix4 const&) */

void __thiscall Caver::ModelInstance::SkinMeshes(ModelInstance *this,Matrix4 *param_1)

{
  ModelInstance *pMVar1;
  Matrix4 *pMVar2;
  ModelInstance *pMVar3;
  Matrix4 *pMVar4;
  int iVar5;
  undefined1 auVar6 [16];
  long lVar7;
  ulong uVar8;
  Matrix4 *pMVar9;
  ModelInstance *pMVar10;
  ModelInstance *pMVar11;
  Matrix4 *pMVar12;
  ulong uVar13;
  Matrix4 *pMVar14;
  Matrix4 *pMVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  Matrix4 local_a8 [8];
  undefined8 auStack_a0 [7];
  long local_68;
  
                    /* try { // try from 0054ae68 to 0064aec7 has its CatchHandler @ 0054aae4 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if ((this[0x45] == (ModelInstance)0x0) &&
     (uVar8 = Matrix4::Equals(param_1,(Matrix4 *)(this + 0x48),DAT_00683734), (uVar8 & 1) != 0))
  goto LAB_0054b100;
  pMVar1 = this + 0x88;
  pMVar11 = this + 0x4c;
  pMVar10 = pMVar1;
  if (pMVar1 <= pMVar11) {
    pMVar10 = pMVar11;
  }
  uVar8 = ((ulong)(pMVar10 + (-0x49 - (long)this)) >> 2) + 1;
  pMVar10 = this + 0x48;
  pMVar9 = param_1;
                    /* try { // try from 0054aec8 to 0064aefb has its CatchHandler @ 0054bbb8 */
  if (uVar8 < 8) {
LAB_0054af4c:
    do {
      pMVar11 = pMVar10 + 4;
      *(undefined4 *)pMVar10 = *(undefined4 *)pMVar9;
      pMVar10 = pMVar11;
      pMVar9 = pMVar9 + 4;
    } while (pMVar11 < pMVar1);
  }
  else {
    pMVar3 = pMVar1;
    if (pMVar1 <= pMVar11) {
      pMVar3 = pMVar11;
    }
                    /* try { // try from 0054aefc to 0064af0f has its CatchHandler @ 0054b988 */
    if ((pMVar10 < (ModelInstance *)
                   (param_1 + ((ulong)(pMVar3 + (-0x49 - (long)this)) & 0xfffffffffffffffc) + 4)) &&
       (param_1 < this + ((ulong)(pMVar3 + (-0x49 - (long)this) + 0x4c) & 0xfffffffffffffffc)))
    goto LAB_0054af4c;
    uVar16 = uVar8 & 0x7ffffffffffffff8;
                    /* try { // try from 0054af10 to 0064af1b has its CatchHandler @ 0054b930 */
                    /* try { // try from 0054af1c to 0064af2f has its CatchHandler @ 0054b8d4 */
    pMVar11 = this + 0x58;
    pMVar10 = this + uVar16 * 4 + 0x48;
    pMVar9 = param_1 + 0x10;
    uVar13 = uVar16;
    do {
      pMVar14 = pMVar9 + -8;
      uVar21 = *(undefined8 *)(pMVar9 + -0x10);
      uVar23 = *(undefined8 *)(pMVar9 + 8);
      uVar22 = *(undefined8 *)pMVar9;
      uVar13 = uVar13 - 8;
      pMVar9 = pMVar9 + 0x20;
      *(undefined8 *)(pMVar11 + -8) = *(undefined8 *)pMVar14;
      *(undefined8 *)(pMVar11 + -0x10) = uVar21;
      *(undefined8 *)(pMVar11 + 8) = uVar23;
      *(undefined8 *)pMVar11 = uVar22;
      pMVar11 = pMVar11 + 0x20;
    } while (uVar13 != 0);
                    /* try { // try from 0054af44 to 0064af5f has its CatchHandler @ 0054b89c */
    pMVar9 = param_1 + uVar16 * 4;
    if (uVar8 != uVar16) goto LAB_0054af4c;
  }
                    /* try { // try from 0054af60 to 0064aff7 has its CatchHandler @ 0054aae4 */
  puVar17 = *(undefined8 **)(this + 0x18);
  this[0x45] = (ModelInstance)0x0;
  iVar5 = *(int *)*puVar17;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (long)iVar5;
  uVar8 = (long)iVar5 << 6;
  if (SUB168(auVar6 * ZEXT816(0x40),8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  pMVar9 = operator_new__(uVar8);
  if (0 < iVar5) {
    lVar20 = 0;
    pfVar19 = (float *)(puVar17[2] + 0x9c);
    pMVar14 = pMVar9;
    do {
      pMVar12 = pMVar9 + lVar20 * 0x40;
      pMVar15 = pMVar9 + (lVar20 << 6 | 4);
      pMVar4 = pMVar12 + 0x40;
      if (pMVar12 + 0x40 <= pMVar15) {
        pMVar4 = pMVar15;
      }
      C_Matrix4Mul((float *)param_1,pfVar19,(float *)local_a8);
      uVar13 = (ulong)(pMVar4 + ~(ulong)pMVar9 + lVar20 * -0x40) >> 2;
                    /* try { // try from 0054aff8 to 0064affb has its CatchHandler @ 0054b5b4 */
      uVar8 = uVar13 + 1;
      pMVar2 = pMVar14 + 0x40;
      if (uVar8 < 8) {
        pMVar12 = local_a8;
LAB_0054b07c:
        do {
                    /* try { // try from 0054b080 to 0064b09f has its CatchHandler @ 0054b798 */
          pMVar15 = pMVar14 + 4;
          *(undefined4 *)pMVar14 = *(undefined4 *)pMVar12;
          pMVar12 = pMVar12 + 4;
          pMVar14 = pMVar15;
        } while (pMVar15 < pMVar2);
      }
      else {
                    /* try { // try from 0054b014 to 0064b027 has its CatchHandler @ 0054b5b0 */
                    /* try { // try from 0054b028 to 0064b03b has its CatchHandler @ 0054b628 */
        if ((pMVar12 < (Matrix4 *)(((ulong)local_a8 | 4) + uVar13 * 4)) &&
           (pMVar12 = local_a8,
           pMVar12 < pMVar15 + ((ulong)(pMVar4 + ~(ulong)pMVar9 + lVar20 * -0x40) &
                               0xfffffffffffffffc))) goto LAB_0054b07c;
        uVar16 = uVar8 & 0x7ffffffffffffff8;
        lVar18 = 0;
        pMVar12 = local_a8 + uVar16 * 4;
        uVar13 = uVar16;
        do {
          puVar17 = (undefined8 *)((long)auStack_a0 + lVar18);
          uVar21 = *(undefined8 *)(local_a8 + lVar18);
          uVar23 = *(undefined8 *)((long)auStack_a0 + lVar18 + 0x10);
          uVar22 = *(undefined8 *)((long)auStack_a0 + lVar18 + 8);
          pMVar15 = pMVar14 + lVar18;
          uVar13 = uVar13 - 8;
                    /* try { // try from 0054b068 to 0064b06b has its CatchHandler @ 0054b628 */
          lVar18 = lVar18 + 0x20;
          *(undefined8 *)(pMVar15 + 8) = *puVar17;
          *(undefined8 *)pMVar15 = uVar21;
          *(undefined8 *)(pMVar15 + 0x18) = uVar23;
          *(undefined8 *)(pMVar15 + 0x10) = uVar22;
        } while (uVar13 != 0);
        pMVar14 = pMVar14 + uVar16 * 4;
        if (uVar8 != uVar16) goto LAB_0054b07c;
      }
      lVar20 = lVar20 + 1;
      pfVar19 = pfVar19 + 0x37;
      pMVar14 = pMVar2;
    } while ((int)lVar20 < iVar5);
  }
  if (0 < (int)((ulong)(*(long *)(*(long *)this + 0x10) - *(long *)(*(long *)this + 8)) >> 4)) {
    lVar18 = 0;
    lVar20 = 0;
    do {
      MeshInstance::SkinWithBoneMatrices(*(MeshInstance **)(*(long *)(this + 0x28) + lVar18),pMVar9)
      ;
      lVar20 = lVar20 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar20 < (int)((ulong)(*(long *)(*(long *)this + 0x10) - *(long *)(*(long *)this + 8))
                           >> 4));
  }
  operator_delete__(pMVar9);
LAB_0054b100:
                    /* try { // try from 0054b100 to 0064b107 has its CatchHandler @ 0054b6fc */
                    /* try { // try from 0054b108 to 0064b113 has its CatchHandler @ 0054b694 */
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



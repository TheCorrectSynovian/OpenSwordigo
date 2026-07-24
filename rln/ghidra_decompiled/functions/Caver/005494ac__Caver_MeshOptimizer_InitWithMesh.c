/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005494ac
 * Function: Caver::MeshOptimizer::InitWithMesh
 * Signature: undefined __thiscall InitWithMesh(MeshOptimizer * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::InitWithMesh(boost::shared_ptr<Caver::Mesh> const&) */

void __thiscall Caver::MeshOptimizer::InitWithMesh(MeshOptimizer *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  ushort *puVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  
  uVar1 = *(undefined8 *)param_1;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 00549014 with catch @ 005494d8 */
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
                    /* catch() { ... } // from try @ 00548f70 with catch @ 005494dc */
  plVar23 = *(long **)(this + 8);
  *(undefined8 *)this = uVar1;
  *(long *)(this + 8) = lVar8;
  if ((plVar23 != (long *)0x0) && (lVar8 = plVar23[1], plVar23[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* try { // try from 00549500 to 00649507 has its CatchHandler @ 005495e8 */
    (**(code **)(*plVar23 + 0x10))(plVar23);
                    /* try { // try from 00549508 to 0064956f has its CatchHandler @ 00548e94 */
    lVar8 = plVar23[2];
                    /* catch() { ... } // from try @ 00548f48 with catch @ 0054950c */
    plVar23[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
                    /* catch() { ... } // from try @ 00548f24 with catch @ 0054951c */
                    /* catch() { ... } // from try @ 00548ee8 with catch @ 00549520 */
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  iVar3 = **(int **)param_1;
  uVar25 = (ulong)iVar3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar25;
                    /* catch() { ... } // from try @ 00548f5c with catch @ 00549534
                       catch() { ... } // from try @ 00548f9c with catch @ 00549534 */
  uVar24 = uVar25 * 0x28;
  uVar10 = uVar24 + 8;
  if (SUB168(auVar4 * ZEXT816(0x28),8) != 0 || 0xfffffffffffffff7 < uVar24) {
    uVar10 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x10) = iVar3;
  puVar6 = operator_new__(uVar10);
  *puVar6 = uVar25;
  if (iVar3 != 0) {
                    /* try { // try from 00549570 to 00649597 has its CatchHandler @ 005495e8 */
    puVar14 = puVar6 + 3;
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      uVar24 = uVar24 - 0x28;
      puVar14 = puVar14 + 5;
    } while (uVar24 != 0);
  }
  lVar8 = *(long *)(this + 0x18);
  *(ulong **)(this + 0x18) = puVar6 + 1;
  if (lVar8 != 0) {
                    /* try { // try from 00549598 to 0064965b has its CatchHandler @ 00548e94 */
    lVar9 = *(long *)(lVar8 + -8);
    if (lVar9 != 0) {
      lVar9 = lVar9 * 0x28;
      do {
        pvVar7 = *(void **)(lVar8 + lVar9 + -0x18);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    operator_delete__((long *)(lVar8 + -8));
  }
  iVar3 = *(int *)(this + 0x10);
  lVar8 = *(long *)param_1;
  if (0 < iVar3) {
    uVar2 = *(uint *)(lVar8 + 0x28);
    lVar9 = 0;
                    /* catch() { ... } // from try @ 00549444 with catch @ 005495e8
                       catch() { ... } // from try @ 00549500 with catch @ 005495e8
                       catch() { ... } // from try @ 00549570 with catch @ 005495e8 */
    puVar22 = (undefined4 *)(*(long *)(this + 0x18) + 0xc);
                    /* catch() { ... } // from try @ 00548f38 with catch @ 005495ec
                       catch() { ... } // from try @ 00548fd8 with catch @ 005495ec */
    puVar19 = (undefined4 *)(*(long *)(lVar8 + 0x30) + 8);
    do {
      lVar9 = lVar9 + 1;
      *(undefined8 *)(puVar22 + -3) = *(undefined8 *)(puVar19 + -2);
      uVar16 = *puVar19;
      puVar19 = (undefined4 *)((long)puVar19 + (ulong)uVar2);
      puVar22[-1] = uVar16;
      *puVar22 = 0xffffffff;
      puVar22 = puVar22 + 10;
    } while (lVar9 < iVar3);
  }
  iVar3 = *(int *)(lVar8 + 4);
  *(int *)(this + 0x20) = iVar3;
  if (0 < *(int *)(lVar8 + 0xc)) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (long)iVar3 * 3;
    uVar10 = (long)iVar3 * 0xc;
    if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar10);
    pvVar11 = *(void **)(this + 0x28);
    *(void **)(this + 0x28) = pvVar7;
    if (pvVar11 != (void *)0x0) {
      operator_delete__(pvVar11);
                    /* try { // try from 0054965c to 00649713 has its CatchHandler @ 0054965c
                       catch() { ... } // from try @ 0054965c with catch @ 0054965c
                       catch() { ... } // from try @ 00549720 with catch @ 0054965c
                       catch() { ... } // from try @ 005497f0 with catch @ 0054965c
                       catch() { ... } // from try @ 00549878 with catch @ 0054965c
                       catch() { ... } // from try @ 005499d8 with catch @ 0054965c */
      lVar8 = *(long *)param_1;
    }
    if ((int)((ulong)(*(long *)(lVar8 + 0x130) - *(long *)(lVar8 + 0x128)) >> 2) == 0) {
                    /* try { // try from 00549714 to 0064971f has its CatchHandler @ 0054993c */
      puVar12 = *(ushort **)(lVar8 + 0x18);
                    /* try { // try from 00549720 to 006497e3 has its CatchHandler @ 0054965c */
      if (*(int *)(lVar8 + 8) == 0x1403) {
        if (0 < *(int *)(this + 0x20)) {
          lVar15 = *(long *)(this + 0x28);
          lVar9 = 0;
          do {
            *(uint *)(lVar15 + lVar9 * 4) = (uint)*puVar12;
            lVar9 = lVar9 + 1;
            puVar12 = (ushort *)((long)puVar12 + (ulong)*(uint *)(lVar8 + 0x10));
          } while (lVar9 < (long)*(int *)(this + 0x20) * 3);
        }
      }
      else if ((*(int *)(lVar8 + 8) == 0x1401) && (0 < *(int *)(this + 0x20))) {
        lVar15 = *(long *)(this + 0x28);
        lVar9 = 0;
        do {
          *(uint *)(lVar15 + lVar9 * 4) = (uint)(byte)*puVar12;
          lVar9 = lVar9 + 1;
          puVar12 = (ushort *)((long)puVar12 + (ulong)*(uint *)(lVar8 + 0x10));
        } while (lVar9 < (long)*(int *)(this + 0x20) * 3);
      }
    }
  }
  if (*(int *)(this + 0x10) == 0) {
    uVar16 = *(undefined4 *)PTR_Vector3Zero_007e5988;
    uVar18 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 4);
    uVar20 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 8);
    uVar13 = uVar16;
    uVar17 = uVar18;
    uVar21 = uVar20;
  }
  else {
    puVar22 = *(undefined4 **)(this + 0x18);
    uVar16 = *(undefined4 *)PTR_Vector3Zero_007e5988;
    uVar18 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 4);
    uVar20 = *(undefined4 *)(PTR_Vector3Zero_007e5988 + 8);
    uVar13 = *puVar22;
    uVar17 = puVar22[1];
    uVar21 = puVar22[2];
  }
  *(undefined4 *)(this + 0x30) = uVar13;
  *(undefined4 *)(this + 0x34) = uVar17;
  *(undefined4 *)(this + 0x38) = uVar21;
  *(undefined4 *)(this + 0x3c) = uVar16;
  *(undefined4 *)(this + 0x40) = uVar18;
  *(undefined4 *)(this + 0x44) = uVar20;
  if (1 < *(int *)(this + 0x10)) {
    lVar8 = 1;
    lVar9 = 0x28;
    do {
      Box::ExpandToIncludePoint((Box *)(this + 0x30),(Vector3 *)(*(long *)(this + 0x18) + lVar9));
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar8 < *(int *)(this + 0x10));
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550f00
 * Function: Caver::SkeletonInstance::InitWithSkeleton
 * Signature: undefined __thiscall InitWithSkeleton(SkeletonInstance * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&) */

void __thiscall
Caver::SkeletonInstance::InitWithSkeleton(SkeletonInstance *this,shared_ptr *param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  void *pvVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  int *piVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 local_80 [7];
  int local_48;
  undefined4 uStack_44;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  uVar3 = *(undefined8 *)param_1;
  lVar21 = *(long *)(param_1 + 8);
  if (lVar21 != 0) {
    *(long *)(lVar21 + 8) = *(long *)(lVar21 + 8) + 1;
  }
  plVar26 = *(long **)(this + 8);
  *(undefined8 *)this = uVar3;
  *(long *)(this + 8) = lVar21;
                    /* try { // try from 00550f40 to 00650f67 has its CatchHandler @ 00551060 */
  if ((plVar26 != (long *)0x0) && (lVar21 = plVar26[1], plVar26[1] = lVar21 + -1, lVar21 + -1 == 0))
  {
    (**(code **)(*plVar26 + 0x10))(plVar26);
    lVar21 = plVar26[2];
    plVar26[2] = lVar21 + -1;
    if (lVar21 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  piVar27 = *(int **)this;
                    /* try { // try from 00550f88 to 00650faf has its CatchHandler @ 00551050 */
  uVar23 = (long)*piVar27 * 0xdc;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (long)*piVar27;
  if (SUB168(auVar5 * ZEXT816(0xdc),8) != 0) {
    uVar23 = 0xffffffffffffffff;
  }
  pvVar13 = operator_new__(uVar23);
  pvVar22 = *(void **)(this + 0x10);
  *(void **)(this + 0x10) = pvVar13;
  if (pvVar22 != (void *)0x0) {
    operator_delete__(pvVar22);
    piVar27 = *(int **)this;
  }
  uVar12 = _UNK_006837f8;
  uVar11 = _DAT_006837f0;
  uVar10 = _UNK_006837e8;
  uVar9 = _DAT_006837e0;
  uVar8 = _UNK_00683498;
  uVar3 = _DAT_00683490;
  iVar4 = *piVar27;
  if (0 < iVar4) {
    uVar23 = *(ulong *)(this + 0x10);
                    /* try { // try from 00550fcc to 00650fd7 has its CatchHandler @ 0055101c */
                    /* try { // try from 00550fd8 to 0065103f has its CatchHandler @ 00550ec4 */
    lVar21 = 0;
    puVar24 = (undefined8 *)(uVar23 + 0xac);
    do {
      lVar14 = uVar23 + lVar21 * 0xdc;
      puVar1 = (undefined4 *)(lVar14 + 0xdc);
      puVar15 = puVar1;
      if (puVar1 <= (undefined4 *)(lVar14 + 0xa0U)) {
        puVar15 = (undefined4 *)(lVar14 + 0xa0U);
      }
                    /* catch() { ... } // from try @ 00550fcc with catch @ 0055101c */
      local_80[6] = *(undefined8 *)(piVar27 + 10);
      uVar2 = ((long)puVar15 + ~uVar23 + lVar21 * -0xdc + -0x9c >> 2) + 1;
      local_48 = piVar27[0xc];
      uStack_44 = 0x3f800000;
                    /* try { // try from 00551040 to 00651047 has its CatchHandler @ 0055104c */
      local_80[1] = uVar8;
      local_80[0] = uVar3;
      local_80[3] = uVar10;
      local_80[2] = uVar9;
      local_80[5] = uVar12;
      local_80[4] = uVar11;
      if (uVar2 < 8) {
                    /* catch() { ... } // from try @ 00551040 with catch @ 0055104c */
                    /* catch() { ... } // from try @ 00550f88 with catch @ 00551050 */
        puVar15 = (undefined4 *)(lVar14 + 0x9c);
        puVar25 = local_80;
LAB_0055109c:
        do {
          puVar16 = puVar15 + 1;
          *puVar15 = *(undefined4 *)puVar25;
          puVar15 = puVar16;
          puVar25 = (undefined8 *)((long)puVar25 + 4);
        } while (puVar16 < puVar1);
      }
      else {
        uVar17 = uVar2 & 0x7ffffffffffffff8;
                    /* catch() { ... } // from try @ 00550f40 with catch @ 00551060 */
        puVar25 = (undefined8 *)((long)local_80 + uVar17 * 4);
        puVar15 = (undefined4 *)(uVar23 + lVar21 * 0xdc + uVar17 * 4 + 0x9c);
                    /* catch() { ... } // from try @ 00550ef8 with catch @ 00551070 */
        uVar18 = uVar17;
        puVar19 = local_80 + 2;
        puVar20 = puVar24;
        do {
          puVar7 = puVar19 + -1;
          uVar28 = puVar19[-2];
          uVar30 = puVar19[1];
          uVar29 = *puVar19;
          uVar18 = uVar18 - 8;
          puVar19 = puVar19 + 4;
          puVar20[-1] = *puVar7;
          puVar20[-2] = uVar28;
          puVar20[1] = uVar30;
          *puVar20 = uVar29;
          puVar20 = puVar20 + 4;
        } while (uVar18 != 0);
                    /* try { // try from 00551094 to 00651103 has its CatchHandler @ 00551190 */
        if (uVar2 != uVar17) goto LAB_0055109c;
      }
      lVar21 = lVar21 + 1;
      puVar24 = (undefined8 *)((long)puVar24 + 0xdc);
    } while (lVar21 < iVar4);
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



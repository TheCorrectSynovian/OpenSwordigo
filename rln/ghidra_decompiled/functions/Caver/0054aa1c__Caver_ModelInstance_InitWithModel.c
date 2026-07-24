/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054aa1c
 * Function: Caver::ModelInstance::InitWithModel
 * Signature: undefined __cdecl InitWithModel(shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&) */

void Caver::ModelInstance::InitWithModel(shared_ptr *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  SkeletonInstance *pSVar7;
  ulong *puVar8;
  shared_ptr *psVar9;
  long *in_x1;
  SkeletonInstance *in_x2;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  SkeletonInstance *local_58;
  long *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar10 = *in_x1;
  lVar14 = in_x1[1];
  if (lVar14 != 0) {
    *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
  }
  plVar11 = *(long **)(param_1 + 8);
  *(long *)param_1 = lVar10;
  *(long *)(param_1 + 8) = lVar14;
  if ((plVar11 != (long *)0x0) && (lVar10 = plVar11[1], plVar11[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar10 = plVar11[2];
    plVar11[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  lVar10 = *in_x1;
  if (*(long *)(lVar10 + 0x20) != 0) {
    in_x2 = operator_new(0x18);
    *(undefined8 *)(in_x2 + 8) = 0;
    *(undefined8 *)(in_x2 + 0x10) = 0;
    *(undefined8 *)in_x2 = 0;
    local_58 = in_x2;
    boost::detail::shared_count::shared_count<Caver::SkeletonInstance>
              ((shared_count *)&local_50,in_x2);
                    /* catch() { ... } // from try @ 0054ab68 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054abd8 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054ad3c with catch @ 0054aae4
                       catch() { ... } // from try @ 0054adcc with catch @ 0054aae4
                       catch() { ... } // from try @ 0054addc with catch @ 0054aae4
                       catch() { ... } // from try @ 0054ae68 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054af60 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054b2c0 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054b7c0 with catch @ 0054aae4
                       catch() { ... } // from try @ 0054bb0c with catch @ 0054aae4
                       catch() { ... } // from try @ 0054bbb0 with catch @ 0054aae4 */
    boost::detail::sp_enable_shared_from_this(&local_58,in_x2);
    pSVar7 = *(SkeletonInstance **)(param_1 + 0x18);
    plVar11 = *(long **)(param_1 + 0x20);
    *(SkeletonInstance **)(param_1 + 0x18) = local_58;
    *(long **)(param_1 + 0x20) = local_50;
    if ((plVar11 != (long *)0x0) &&
       (lVar10 = plVar11[1], plVar11[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      local_58 = pSVar7;
      local_50 = plVar11;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar10 = plVar11[2];
      plVar11[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    pSVar7 = *(SkeletonInstance **)(param_1 + 0x18);
    local_58 = *(SkeletonInstance **)(*in_x1 + 0x20);
    local_50 = *(long **)(*in_x1 + 0x28);
    if (local_50 != (long *)0x0) {
                    /* try { // try from 0054ab5c to 0064ab67 has its CatchHandler @ 0054bb14 */
      local_50[1] = local_50[1] + 1;
    }
                    /* try { // try from 0054ab68 to 0064abd3 has its CatchHandler @ 0054aae4 */
    SkeletonInstance::InitWithSkeleton(pSVar7,(shared_ptr *)&local_58);
    plVar11 = local_50;
    if ((local_50 != (long *)0x0) &&
       (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar10 = plVar11[2];
      plVar11[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    lVar10 = *in_x1;
  }
  uVar12 = *(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8);
  uVar4 = (long)(uVar12 * 0x10000000) >> 0x20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
                    /* try { // try from 0054abd4 to 0064abd7 has its CatchHandler @ 0054b5fc */
                    /* try { // try from 0054abd8 to 0064ac0f has its CatchHandler @ 0054aae4 */
  uVar1 = (long)(int)(uVar12 >> 4) * 0x10;
  uVar2 = uVar1 + 8;
  if (SUB168(auVar5 * ZEXT816(0x10),8) != 0 || 0xfffffffffffffff7 < uVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  puVar8 = operator_new__(uVar2);
  *puVar8 = uVar4;
  if ((uVar12 & 0xffffffff0) != 0) {
                    /* try { // try from 0054ac10 to 0064ac23 has its CatchHandler @ 0054b82c */
    in_x2 = (SkeletonInstance *)((long)(uVar12 * 0x10000000) >> 0x1c & 0xfffffffffffffff0);
    memset(puVar8 + 1,0,(size_t)in_x2);
  }
  psVar9 = *(shared_ptr **)(param_1 + 0x28);
  *(ulong **)(param_1 + 0x28) = puVar8 + 1;
  boost::checked_array_delete<boost::shared_ptr<Caver::MeshInstance>>(psVar9);
  lVar10 = *in_x1;
                    /* try { // try from 0054ac40 to 0064ac67 has its CatchHandler @ 0054b830 */
  if (0 < (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 4)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      MeshInstance::InstanceWithMesh
                ((MeshInstance *)(*(long *)(lVar10 + 8) + lVar13),
                 (shared_ptr *)(ulong)(*(long *)(param_1 + 0x18) == 0),SUB81(in_x2,0));
      lVar10 = *(long *)(param_1 + 0x28);
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      puVar3 = (undefined8 *)(lVar10 + lVar13);
      plVar11 = (long *)puVar3[1];
      *puVar3 = local_58;
      puVar3[1] = local_50;
      if ((plVar11 != (long *)0x0) &&
         (lVar10 = plVar11[1], plVar11[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 0054aca8 to 0064acaf has its CatchHandler @ 0054bb64 */
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar10 = plVar11[2];
                    /* try { // try from 0054acb4 to 0064acc7 has its CatchHandler @ 0054bb10 */
        plVar11[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
                    /* try { // try from 0054accc to 0064acd3 has its CatchHandler @ 0054ba0c */
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      plVar11 = local_50;
      if ((local_50 != (long *)0x0) &&
         (lVar10 = local_50[1], local_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar10 = plVar11[2];
        plVar11[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
                    /* try { // try from 0054ad08 to 0064ad0f has its CatchHandler @ 0054bac0 */
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      lVar10 = *in_x1;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x10;
                    /* try { // try from 0054ad34 to 0064ad3b has its CatchHandler @ 0054ba70 */
    } while (lVar14 < (int)((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 4));
  }
                    /* try { // try from 0054ad3c to 0064adc7 has its CatchHandler @ 0054aae4 */
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065a478
 * Function: FUN_0065a478
 * Signature: undefined FUN_0065a478(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0065a478(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
            long param_6,uint *param_7,byte *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *local_30;
  undefined8 local_28;
  undefined1 local_20 [12];
  undefined4 uStack_14;
  ulong local_8;
  
                    /* try { // try from 0065a478 to 0075a4bb has its CatchHandler @ 0065a838 */
  local_20._8_4_ = (undefined4)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20._0_8_ = param_2;
  if ((*(uint *)(param_6 + 0x18) & 1) == 0) {
    local_8 = 0xffffffffffffffff;
    local_20 = FUN_00659b48();
                    /* try { // try from 0065a4bc to 0075a84b has its CatchHandler @ 0065a38c */
    if (local_8 < 2) {
      *param_8 = (byte)local_8 & 1;
    }
    else {
      *param_8 = 1;
      *param_7 = 4;
      iVar8 = FUN_00654b08(local_20);
      iVar9 = FUN_00654b08(&local_30);
      if ((iVar8 == -1) == (iVar9 == -1)) {
        *param_7 = *param_7 | 2;
      }
    }
    goto LAB_0065a7a0;
  }
  bVar7 = true;
  uVar11 = 0;
  lVar10 = FUN_00654a24(&local_8,param_6 + 0xd0);
  bVar4 = *(long *)(lVar10 + 0x40) == 0;
  bVar6 = true;
  bVar5 = *(long *)(lVar10 + 0x30) == 0;
LAB_0065a560:
  if (bVar4 <= (bVar5 ^ 1U)) {
    do {
      if ((long *)local_20._0_8_ == (long *)0x0) {
LAB_0065a6b4:
        if (local_30 != (long *)0x0) {
          iVar8 = 1;
joined_r0x0065a6cc:
          iVar9 = 0;
          if ((int)local_28 == -1) {
            if ((int *)local_30[2] < (int *)local_30[3]) {
              iVar9 = *(int *)local_30[2];
            }
            else {
                    /* catch() { ... } // from try @ 0065a478 with catch @ 0065a838 */
              iVar9 = (**(code **)(*local_30 + 0x48))(local_30);
            }
            if (iVar9 != -1) {
              local_28 = CONCAT44(local_28._4_4_,iVar9);
              if (iVar8 != 0) goto LAB_0065a5a4;
              goto LAB_0065a6fc;
            }
            local_30 = (long *)0x0;
            iVar9 = 1;
          }
          if (iVar8 != iVar9) goto LAB_0065a5a4;
        }
LAB_0065a6fc:
        iVar8 = 1;
        if (bVar6) goto LAB_0065a74c;
        goto LAB_0065a664;
      }
      if (local_20._8_4_ == -1) {
        if (*(int **)(local_20._0_8_ + 0x10) < *(int **)(local_20._0_8_ + 0x18)) {
          iVar8 = **(int **)(local_20._0_8_ + 0x10);
        }
        else {
          iVar8 = (**(code **)(*(long *)local_20._0_8_ + 0x48))(local_20._0_8_);
                    /* catch() { ... } // from try @ 0065a414 with catch @ 0065a834 */
        }
        if (iVar8 == -1) {
          local_20._0_8_ = (long *)0x0;
          goto LAB_0065a6b4;
        }
        local_20._8_4_ = iVar8;
        if (local_30 != (long *)0x0) goto LAB_0065a58c;
LAB_0065a5a4:
        iVar8 = -1;
        iVar9 = local_20._8_4_;
        if (((long *)local_20._0_8_ != (long *)0x0) &&
           (iVar8 = local_20._8_4_, local_20._8_4_ == -1)) {
          if (*(int **)(local_20._0_8_ + 0x10) < *(int **)(local_20._0_8_ + 0x18)) {
            iVar8 = **(int **)(local_20._0_8_ + 0x10);
          }
          else {
            iVar8 = (**(code **)(*(long *)local_20._0_8_ + 0x48))(local_20._0_8_);
          }
          iVar9 = iVar8;
          if (iVar8 == -1) {
            local_20._0_8_ = (long *)0x0;
            iVar9 = local_20._8_4_;
          }
        }
      }
      else {
        iVar8 = local_20._8_4_;
        iVar9 = local_20._8_4_;
        if (local_30 != (long *)0x0) {
LAB_0065a58c:
          iVar8 = 0;
          goto joined_r0x0065a6cc;
        }
      }
      local_20._8_4_ = iVar9;
      if (!bVar4) {
        bVar6 = *(int *)(*(long *)(lVar10 + 0x38) + uVar11 * 4) == iVar8;
      }
      if (bVar6 < bVar5) break;
      if (!bVar5) {
        bVar7 = *(int *)(*(long *)(lVar10 + 0x28) + uVar11 * 4) == iVar8;
      }
      if ((bVar7 < bVar4) || (bVar7 < (bVar6 ^ 1U))) {
        if ((!bVar6) || ((*(ulong *)(lVar10 + 0x40) != uVar11 || (uVar11 == 0)))) {
          *param_8 = 0;
          goto LAB_0065a818;
        }
        *param_8 = 0;
        *param_7 = 0;
        goto LAB_0065a778;
      }
      uVar11 = uVar11 + 1;
      if ((long *)local_20._0_8_ != (long *)0x0) {
        if (*(ulong *)(local_20._0_8_ + 0x10) < *(ulong *)(local_20._0_8_ + 0x18)) {
          *(ulong *)(local_20._0_8_ + 0x10) = *(ulong *)(local_20._0_8_ + 0x10) + 4;
        }
        else {
          (**(code **)(*(long *)local_20._0_8_ + 0x50))();
        }
        local_20._8_4_ = -1;
      }
      bVar4 = true;
      if (bVar6) {
        bVar4 = *(ulong *)(lVar10 + 0x40) <= uVar11;
      }
      bVar5 = true;
      if (!bVar7) goto LAB_0065a560;
      bVar5 = *(ulong *)(lVar10 + 0x30) <= uVar11;
      if (!bVar5 < bVar4) break;
    } while( true );
  }
  iVar8 = 0;
  if (bVar6) {
LAB_0065a74c:
    if ((uVar11 != *(ulong *)(lVar10 + 0x40)) || (uVar11 == 0)) goto LAB_0065a664;
    *param_8 = 0;
    if ((!bVar7) || (uVar11 != *(ulong *)(lVar10 + 0x30))) {
      *param_7 = iVar8 << 1;
      goto LAB_0065a778;
    }
  }
  else {
LAB_0065a664:
    if (((bVar7) && (*(ulong *)(lVar10 + 0x30) == uVar11)) && (uVar11 != 0)) {
      *param_8 = 1;
      *param_7 = iVar8 << 1;
LAB_0065a7a0:
      auVar2._12_4_ = uStack_14;
      auVar2._0_12_ = local_20;
      return auVar2;
    }
    *param_8 = 0;
    if (iVar8 != 0) {
      *param_7 = 6;
      auVar3._8_4_ = local_20._8_4_;
      auVar3._0_8_ = local_20._0_8_;
      auVar3._12_4_ = uStack_14;
      return auVar3;
    }
  }
LAB_0065a818:
  *param_7 = 4;
LAB_0065a778:
  auVar1._8_4_ = local_20._8_4_;
  auVar1._0_8_ = local_20._0_8_;
  auVar1._12_4_ = uStack_14;
  return auVar1;
}



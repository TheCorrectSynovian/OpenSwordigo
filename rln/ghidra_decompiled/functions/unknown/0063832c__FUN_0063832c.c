/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063832c
 * Function: FUN_0063832c
 * Signature: undefined FUN_0063832c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0063832c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
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
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *local_30;
  undefined8 local_28;
  undefined1 local_20 [12];
  undefined4 uStack_14;
  ulong local_8;
  
  local_20._8_4_ = (undefined4)param_3;
  uStack_14 = (undefined4)((ulong)param_3 >> 0x20);
  local_30 = param_4;
  local_28 = param_5;
  local_20._0_8_ = param_2;
  if ((*(uint *)(param_6 + 0x18) & 1) == 0) {
                    /* try { // try from 00638368 to 0073838f has its CatchHandler @ 00639680 */
    local_8 = 0xffffffffffffffff;
    local_20 = FUN_0063797c();
    if (local_8 < 2) {
                    /* try { // try from 00638658 to 00738667 has its CatchHandler @ 00639630 */
      *param_8 = (byte)local_8 & 1;
    }
    else {
      *param_8 = 1;
      *param_7 = 4;
      iVar8 = FUN_00632808(local_20);
                    /* try { // try from 006383b0 to 007383b3 has its CatchHandler @ 00638c40 */
      iVar9 = FUN_00632808(&local_30);
      if ((iVar8 == -1) == (iVar9 == -1)) {
                    /* try { // try from 006383d4 to 007383d7 has its CatchHandler @ 00638c3c */
        *param_7 = *param_7 | 2;
      }
    }
LAB_00638660:
    auVar2._12_4_ = uStack_14;
    auVar2._0_12_ = local_20;
    return auVar2;
  }
  bVar7 = true;
  uVar13 = 0;
  lVar11 = FUN_00632724(&local_8,param_6 + 0xd0);
  bVar4 = *(long *)(lVar11 + 0x40) == 0;
  bVar6 = true;
  bVar5 = *(long *)(lVar11 + 0x30) == 0;
LAB_00638414:
  if (bVar4 <= (bVar5 ^ 1U)) {
    do {
                    /* try { // try from 00638420 to 00738433 has its CatchHandler @ 0063912c */
      if ((long *)local_20._0_8_ == (long *)0x0) {
LAB_00638628:
        if (local_30 == (long *)0x0) {
LAB_006385dc:
          iVar8 = 1;
          goto joined_r0x006385e0;
        }
                    /* try { // try from 00638630 to 00738637 has its CatchHandler @ 00638bdc */
        iVar8 = 1;
LAB_00638440:
joined_r0x006385b4:
        iVar9 = 0;
        if ((int)local_28 == -1) {
                    /* try { // try from 006385c0 to 00738623 has its CatchHandler @ 00639550 */
          if ((byte *)local_30[2] < (byte *)local_30[3]) {
            uVar10 = (uint)*(byte *)local_30[2];
          }
          else {
                    /* try { // try from 006386e8 to 0073870f has its CatchHandler @ 00639630 */
            uVar10 = (**(code **)(*local_30 + 0x48))();
            if (uVar10 == 0xffffffff) {
              local_30 = (long *)0x0;
              iVar9 = 1;
              goto LAB_00638450;
            }
          }
          local_28 = CONCAT44(local_28._4_4_,uVar10);
          if (iVar8 == 0) goto LAB_006385dc;
        }
        else {
LAB_00638450:
                    /* try { // try from 00638454 to 0073845f has its CatchHandler @ 00638ba4 */
          if (iVar9 == iVar8) goto LAB_006385dc;
        }
LAB_00638458:
        if ((long *)local_20._0_8_ == (long *)0x0) {
LAB_00638650:
          uVar12 = 0xff;
        }
        else {
          if (local_20._8_4_ != 0xffffffff) goto LAB_0063846c;
          if (*(byte **)(local_20._0_8_ + 0x10) < *(byte **)(local_20._0_8_ + 0x18)) {
            uVar10 = (uint)**(byte **)(local_20._0_8_ + 0x10);
          }
          else {
            uVar10 = (**(code **)(*(long *)local_20._0_8_ + 0x48))();
            if (uVar10 == 0xffffffff) {
              local_20._0_8_ = (long *)0x0;
              goto LAB_00638650;
            }
          }
          uVar12 = uVar10 & 0xff;
          local_20._8_4_ = uVar10;
        }
      }
      else {
        if (local_20._8_4_ == 0xffffffff) {
                    /* try { // try from 00638584 to 0073858b has its CatchHandler @ 00638c0c */
          if (*(byte **)(local_20._0_8_ + 0x10) < *(byte **)(local_20._0_8_ + 0x18)) {
            uVar10 = (uint)**(byte **)(local_20._0_8_ + 0x10);
          }
          else {
            uVar10 = (**(code **)(*(long *)local_20._0_8_ + 0x48))();
            if (uVar10 == 0xffffffff) {
              local_20._0_8_ = (long *)0x0;
              goto LAB_00638628;
            }
          }
          iVar8 = 0;
                    /* try { // try from 006385a4 to 007385ab has its CatchHandler @ 006390cc */
          local_20._8_4_ = uVar10;
          if (local_30 != (long *)0x0) {
                    /* try { // try from 006385ac to 007385bf has its CatchHandler @ 006390c8 */
            goto joined_r0x006385b4;
          }
          goto LAB_00638458;
        }
        iVar8 = 0;
        if (local_30 != (long *)0x0) goto LAB_00638440;
LAB_0063846c:
        uVar12 = local_20._8_4_ & 0xff;
      }
      if (!bVar4) {
                    /* try { // try from 00638474 to 0073847b has its CatchHandler @ 00639128 */
        bVar6 = *(byte *)(*(long *)(lVar11 + 0x38) + uVar13) == uVar12;
      }
      if (bVar6 < bVar5) break;
      if (!bVar5) {
        bVar7 = *(byte *)(*(long *)(lVar11 + 0x28) + uVar13) == uVar12;
      }
                    /* try { // try from 006384a4 to 007384af has its CatchHandler @ 006390d8 */
      if ((bVar7 < bVar4) || (bVar7 < (bVar6 ^ 1U))) {
        if ((bVar6) && ((*(ulong *)(lVar11 + 0x40) == uVar13 && (uVar13 != 0)))) {
          *param_8 = 0;
          *param_7 = 0;
          goto LAB_00638544;
        }
        *param_8 = 0;
        goto LAB_006386d8;
      }
      uVar13 = uVar13 + 1;
      if ((long *)local_20._0_8_ != (long *)0x0) {
        if (*(ulong *)(local_20._0_8_ + 0x10) < *(ulong *)(local_20._0_8_ + 0x18)) {
                    /* try { // try from 006384d0 to 007384f7 has its CatchHandler @ 00638d04 */
          *(ulong *)(local_20._0_8_ + 0x10) = *(ulong *)(local_20._0_8_ + 0x10) + 1;
        }
        else {
          (**(code **)(*(long *)local_20._0_8_ + 0x50))();
        }
        local_20._8_4_ = 0xffffffff;
      }
      bVar4 = true;
      if (bVar6) {
        bVar4 = *(ulong *)(lVar11 + 0x40) <= uVar13;
      }
      bVar5 = true;
      if (!bVar7) goto LAB_00638414;
                    /* try { // try from 006384f8 to 007384ff has its CatchHandler @ 006390d4 */
      bVar5 = *(ulong *)(lVar11 + 0x30) <= uVar13;
                    /* try { // try from 00638500 to 00738513 has its CatchHandler @ 006390d0 */
      if (!bVar5 < bVar4) break;
    } while( true );
  }
  iVar8 = 0;
                    /* try { // try from 00638514 to 00738577 has its CatchHandler @ 00639588 */
joined_r0x006385e0:
  if (((bVar6) && (*(ulong *)(lVar11 + 0x40) == uVar13)) && (uVar13 != 0)) {
    *param_8 = 0;
    if ((!bVar7) || (*(ulong *)(lVar11 + 0x30) != uVar13)) {
      *param_7 = iVar8 << 1;
      goto LAB_00638544;
    }
  }
  else {
    if (((bVar7) && (*(ulong *)(lVar11 + 0x30) == uVar13)) && (uVar13 != 0)) {
      *param_8 = 1;
      *param_7 = iVar8 << 1;
      goto LAB_00638660;
    }
    *param_8 = 0;
    if (iVar8 != 0) {
      *param_7 = 6;
      auVar3._8_4_ = local_20._8_4_;
      auVar3._0_8_ = local_20._0_8_;
                    /* try { // try from 006386a0 to 007386c7 has its CatchHandler @ 00638cb4 */
      auVar3._12_4_ = uStack_14;
      return auVar3;
    }
  }
LAB_006386d8:
  *param_7 = 4;
LAB_00638544:
  auVar1._8_4_ = local_20._8_4_;
  auVar1._0_8_ = local_20._0_8_;
  auVar1._12_4_ = uStack_14;
  return auVar1;
}



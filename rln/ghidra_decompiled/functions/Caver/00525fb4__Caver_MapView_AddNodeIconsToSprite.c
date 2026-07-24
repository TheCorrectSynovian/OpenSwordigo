/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00525fb4
 * Function: Caver::MapView::AddNodeIconsToSprite
 * Signature: undefined __thiscall AddNodeIconsToSprite(MapView * this, MapViewNode * param_1, Rectangle * param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode*, Caver::Rectangle const&, float) */

void __thiscall
Caver::MapView::AddNodeIconsToSprite
          (MapView *this,MapViewNode *param_1,Rectangle *param_2,float param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long **pplVar8;
  undefined8 uVar9;
  Rectangle local_f0 [8];
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  MapViewNode local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *local_a0 [3];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_a0[0] = (long *)0x0;
  local_a0[1] = (long *)0x0;
  local_a0[2] = (long *)0x0;
  if (param_1[0x28] == (MapViewNode)0x0) {
    uVar7 = 0;
  }
  else {
    local_a0[0] = *(long **)(this + 0x380);
    if (local_a0[0] != (long *)0x0) {
      *(int *)(local_a0[0] + 1) = (int)local_a0[0][1] + 1;
    }
                    /* try { // try from 00526024 to 00626027 has its CatchHandler @ 005261a0 */
    uVar7 = 1;
                    /* try { // try from 00526028 to 006261b3 has its CatchHandler @ 00525b44 */
    local_c4[0] = param_1[0x29];
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (0 < iVar4) {
    lVar6 = 0;
    pplVar8 = local_a0 + uVar7;
    do {
      plVar5 = *(long **)(this + 0x390);
      if (plVar5 != (long *)0x0) {
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      }
      plVar3 = *pplVar8;
      *pplVar8 = plVar5;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))();
        iVar4 = *(int *)(param_1 + 0x20);
      }
      pplVar8 = pplVar8 + 1;
      *(bool *)(((ulong)local_c4 | uVar7) + lVar6) = (int)lVar6 < *(int *)(param_1 + 0x24);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar4);
    uVar7 = (ulong)(uint)((int)uVar7 + (int)lVar6);
  }
  uStack_b8 = _UNK_00694808;
  local_c0 = _DAT_00694800;
  uStack_a8 = _UNK_00694818;
  uStack_b0 = _DAT_00694810;
  if (0 < (int)uVar7) {
    lVar6 = 0;
    uVar9 = DAT_00694838;
    while( true ) {
      local_d8 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * 0.5 +
                          param_3 * (float)((ulong)uVar9 >> 0x20),
                          (float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 8) * 0.5
                          + param_3 * (float)uVar9);
      Vector2::Rounded();
      plVar5 = local_a0[lVar6];
      local_dc = 0xb2000000;
      if (local_c4[lVar6] != (MapViewNode)0x0) {
        local_dc = 0xffffffff;
      }
      if (plVar5 != (long *)0x0) {
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      }
      uVar9 = *(undefined8 *)((long)plVar5 + 0x54);
      Vector2::Rounded();
      local_e8 = CONCAT44(param_3 * (float)((ulong)uVar9 >> 0x20),param_3 * (float)uVar9);
      Sprite::AddRectangle
                ((Sprite *)(this + 0x188),local_f0,(Rectangle *)((long)plVar5 + 0x5c),
                 (Color *)&local_dc);
                    /* catch() { ... } // from try @ 00526024 with catch @ 005261a0 */
      iVar4 = (int)plVar5[1] + -1;
      *(int *)(plVar5 + 1) = iVar4;
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      if ((long)(int)uVar7 <= lVar6 + 1) break;
      uVar9 = *(undefined8 *)(((ulong)&local_c0 | 8) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    }
  }
  if ((local_a0[2] != (long *)0x0) &&
     (iVar4 = (int)local_a0[2][1] + -1, *(int *)(local_a0[2] + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_a0[2] + 8))();
  }
  if ((local_a0[1] != (long *)0x0) &&
     (iVar4 = (int)local_a0[1][1] + -1, *(int *)(local_a0[1] + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_a0[1] + 8))();
  }
  if ((local_a0[0] != (long *)0x0) &&
     (iVar4 = (int)local_a0[0][1] + -1, *(int *)(local_a0[0] + 1) = iVar4, iVar4 == 0)) {
    (**(code **)(*local_a0[0] + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



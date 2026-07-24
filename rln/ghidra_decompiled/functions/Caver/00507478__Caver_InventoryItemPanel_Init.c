/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00507478
 * Function: Caver::InventoryItemPanel::Init
 * Signature: undefined __thiscall Init(InventoryItemPanel * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::InventoryItemPanel::Init(InventoryItemPanel *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUITexturedRect *pGVar6;
  string *psVar7;
  MenuItemSlot *this_00;
  InventoryTrinketSlot *pIVar8;
  undefined *puVar9;
  GUIView *this_01;
  long lVar10;
  code *pcVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  long *plVar15;
  float fVar16;
  float local_88;
  float fStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 00507478 to 006074b3 has its CatchHandler @ 005072d4 */
                    /* catch() { ... } // from try @ 00507470 with catch @ 00507480 */
                    /* catch() { ... } // from try @ 00507374 with catch @ 00507484 */
                    /* catch() { ... } // from try @ 00507320 with catch @ 0050748c */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
                    /* try { // try from 005074b4 to 006074bb has its CatchHandler @ 0050753c */
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  plVar15 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar10;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
                    /* try { // try from 00507508 to 0060750f has its CatchHandler @ 00507540 */
  pGVar6 = operator_new(0x70);
  GUITexturedRect::GUITexturedRect(pGVar6);
  local_58 = pGVar6;
  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>
            ((shared_count *)&uStack_50,pGVar6);
  boost::detail::sp_enable_shared_from_this(&local_58,pGVar6,pGVar6);
  uVar1 = *(undefined8 *)(this + 0x110);
  plVar15 = *(long **)(this + 0x118);
                    /* catch() { ... } // from try @ 005074b4 with catch @ 0050753c */
                    /* catch() { ... } // from try @ 00507508 with catch @ 00507540 */
  *(GUITexturedRect **)(this + 0x110) = local_58;
  *(long **)(this + 0x118) = uStack_50;
  local_58 = (GUITexturedRect *)uVar1;
  uStack_50 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pGVar6 = *(GUITexturedRect **)(this + 0x110);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_60,"ui_inventory_panel",auStack_68);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_60,0));
  local_58 = (GUITexturedRect *)0x0;
  uStack_50 = (long *)0x0;
  GUITexturedRect::InitWithTexture(pGVar6,(intrusive_ptr *)&local_88,(Rectangle *)&local_58,false);
  plVar15 = (long *)CONCAT44(fStack_84,local_88);
  if ((plVar15 != (long *)0x0) &&
     (iVar13 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar13, iVar13 == 0)) {
    (**(code **)(*plVar15 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_60 + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  this_00 = operator_new(0x280);
  MenuItemSlot::MenuItemSlot(this_00);
  boost::shared_ptr<Caver::MenuItemSlot>::shared_ptr<Caver::MenuItemSlot>
            ((shared_ptr<Caver::MenuItemSlot> *)&local_58,this_00);
  uVar1 = *(undefined8 *)(this + 0x120);
  plVar15 = *(long **)(this + 0x128);
  *(GUITexturedRect **)(this + 0x120) = local_58;
  *(long **)(this + 0x128) = uStack_50;
  local_58 = (GUITexturedRect *)uVar1;
  uStack_50 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  MenuItemSlot::Init(*(MenuItemSlot **)(this + 0x120),1.0);
  local_58 = *(GUITexturedRect **)(this + 0x120);
  *(undefined1 *)((long)local_58 + 0x120) = 0;
  pcVar11 = *(code **)(*(long *)this + 0x60);
  uStack_50 = *(long **)(this + 0x128);
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
                    /* catch() { ... } // from try @ 005076e0 with catch @ 005076cc */
  (*pcVar11)(this,&local_58);
  plVar15 = uStack_50;
                    /* try { // try from 005076dc to 006076df has its CatchHandler @ 005076f0 */
                    /* try { // try from 005076e0 to 00607703 has its CatchHandler @ 005076cc */
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005076dc with catch @ 005076f0 */
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pIVar8 = operator_new(0x160);
  InventoryTrinketSlot::InventoryTrinketSlot(pIVar8);
  boost::shared_ptr<Caver::InventoryTrinketSlot>::shared_ptr<Caver::InventoryTrinketSlot>
            ((shared_ptr<Caver::InventoryTrinketSlot> *)&local_58,pIVar8);
  uVar1 = *(undefined8 *)(this + 0x130);
  plVar15 = *(long **)(this + 0x138);
  *(GUITexturedRect **)(this + 0x130) = local_58;
  *(long **)(this + 0x138) = uStack_50;
  local_58 = (GUITexturedRect *)uVar1;
  uStack_50 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pIVar8 = *(InventoryTrinketSlot **)(this + 0x130);
  *(InventoryItemPanel **)(pIVar8 + 0xf8) = this + 0xf0;
  InventoryTrinketSlot::Init(pIVar8,(shared_ptr *)(this + 0x100),DAT_00684314);
  local_58 = *(GUITexturedRect **)(this + 0x130);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  uStack_50 = *(long **)(this + 0x138);
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar15 = uStack_50;
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  FUN_00666bb8(&local_88,&DAT_0068fbeb,auStack_68);
  local_70 = 0xff000000;
  uStack_6c = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_58,&local_88,&uStack_6c,&local_70);
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
  plVar15 = *(long **)(this + 0x158);
  *(GUITexturedRect **)(this + 0x150) = local_58;
  *(long **)(this + 0x158) = uStack_50;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  plVar15 = uStack_50;
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
                    /* try { // try from 005078f0 to 00607cd3 has its CatchHandler @ 005078f0
                       catch() { ... } // from try @ 005078f0 with catch @ 005078f0
                       catch() { ... } // from try @ 00507cd8 with catch @ 005078f0
                       catch() { ... } // from try @ 005080b0 with catch @ 005078f0 */
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  puVar9 = (undefined *)(CONCAT44(fStack_84,local_88) + -0x18);
  if (puVar9 != puVar5) {
    piVar12 = (int *)(CONCAT44(fStack_84,local_88) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(puVar9);
    }
  }
  local_58 = *(GUITexturedRect **)(this + 0x150);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  uStack_50 = *(long **)(this + 0x158);
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar15 = uStack_50;
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  FUN_00666bb8(&local_88,&DAT_0068fbeb,auStack_68);
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::SmallLabel((GameInterfaceBuilder *)&local_58,&local_88,&uStack_74,&local_78)
  ;
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
  plVar15 = *(long **)(this + 0x168);
  *(GUITexturedRect **)(this + 0x160) = local_58;
  *(long **)(this + 0x168) = uStack_50;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  plVar15 = uStack_50;
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  puVar9 = (undefined *)(CONCAT44(fStack_84,local_88) + -0x18);
  if (puVar9 != puVar5) {
    piVar12 = (int *)(CONCAT44(fStack_84,local_88) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar13 < 1) {
      operator_delete(puVar9);
    }
  }
  local_58 = *(GUITexturedRect **)(this + 0x160);
  pcVar11 = *(code **)(*(long *)this + 0x60);
  uStack_50 = *(long **)(this + 0x168);
  if (uStack_50 != (long *)0x0) {
    uStack_50[1] = uStack_50[1] + 1;
  }
  (*pcVar11)(this,&local_58);
  plVar15 = uStack_50;
  if ((uStack_50 != (long *)0x0) &&
     (lVar10 = uStack_50[1], uStack_50[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*uStack_50 + 0x10))(uStack_50);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  uStack_50 = *(long **)(*(GUIView **)(this + 0x120) + 0x7c);
  local_58 = (GUITexturedRect *)DAT_00693eb0;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_58);
  pGVar6 = *(GUITexturedRect **)(this + 0x110);
  plVar15 = *(long **)pGVar6;
  uVar14 = _DAT_00000054;
  fVar16 = _DAT_00000058;
  if (plVar15 != (long *)0x0) {
    uVar14 = *(undefined4 *)((long)plVar15 + 0x54);
    fVar16 = *(float *)(plVar15 + 0xb);
    if ((int)plVar15[1] == 0) {
      (**(code **)(*plVar15 + 8))(plVar15);
      pGVar6 = *(GUITexturedRect **)(this + 0x110);
    }
  }
  local_58 = (GUITexturedRect *)
             CONCAT44((int)((*(float *)(*(long *)(this + 0x120) + 0x78) +
                            *(float *)(*(long *)(this + 0x120) + 0x80) * 0.5) - fVar16 * 0.5),
                      0x42200000);
  uStack_50 = (long *)CONCAT44(fVar16,uVar14);
  GUITexturedRect::CreateWithBounds(pGVar6,(Rectangle *)&local_58,false);
  this_01 = *(GUIView **)(this + 0x130);
  uStack_50 = *(long **)(this_01 + 0x7c);
  local_58 = (GUITexturedRect *)
             ((ulong)(uint)(int)((*(float *)(*(long *)(this + 0x120) + 0x78) +
                                 *(float *)(*(long *)(this + 0x120) + 0x80) * 0.5) -
                                *(float *)(this_01 + 0x80) * 0.5) << 0x20);
  GUIView::SetFrame(this_01,(Rectangle *)&local_58);
  lVar10 = *(long *)(this + 0x130);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar10 + 0x84),25.0);
  *(long **)(lVar10 + 0x9c) = uStack_50;
  *(GUITexturedRect **)(lVar10 + 0x94) = local_58;
  local_58._4_4_ = *(float *)(*(long *)(this + 0x120) + 0x78);
  local_58._0_4_ = 0;
  uStack_50._4_4_ = *(float *)(*(long *)(this + 0x120) + 0x80);
  uStack_50._0_4_ = uVar14;
  (**(code **)(*(long *)this + 0xf8))(this,&local_58);
  *(undefined4 *)(this + 0x94) = (undefined4)local_58;
  *(undefined4 *)(this + 0x9c) = (undefined4)uStack_50;
  lVar10 = *(long *)(this + 0x110);
  *(float *)(this + 0x98) = local_58._4_4_ + -15.0;
  *(float *)(this + 0xa0) =
       (local_58._4_4_ + ((local_58._4_4_ + uStack_50._4_4_ + 10.0) - local_58._4_4_)) -
       (local_58._4_4_ + -15.0);
  local_88 = *(float *)(*(long *)(this + 0x120) + 0x74) + *(float *)(*(long *)(this + 0x120) + 0x7c)
             + 10.0;
  local_7c = *(float *)(*(long *)(*(GUIView **)(this + 0x150) + 0xf0) + 0x48);
  local_80 = *(undefined4 *)(lVar10 + 0x14);
  fStack_84 = ((*(float *)(lVar10 + 0x10) + *(float *)(lVar10 + 0x18)) - local_7c) + -3.0;
  GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_88);
                    /* try { // try from 00507cd4 to 00607cd7 has its CatchHandler @ 005081f0 */
                    /* try { // try from 00507cd8 to 006080ab has its CatchHandler @ 005078f0 */
  local_80 = *(undefined4 *)(*(long *)(this + 0x110) + 0x14);
  local_7c = *(float *)(*(long *)(*(GUIView **)(this + 0x160) + 0xf0) + 0x48);
  fStack_84 = *(float *)(*(long *)(this + 0x110) + 0x10) + 2.0;
  local_88 = *(float *)(*(long *)(this + 0x120) + 0x74) + *(float *)(*(long *)(this + 0x120) + 0x7c)
             + 12.0;
  GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_88);
  UpdateLabels(this);
  uVar1 = *(undefined8 *)(this + 0x150);
  lVar10 = *(long *)(this + 0x158);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  plVar15 = *(long **)(this + 0x148);
  *(undefined8 *)(this + 0x140) = uVar1;
  *(long *)(this + 0x148) = lVar10;
  if ((plVar15 != (long *)0x0) && (lVar10 = plVar15[1], plVar15[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar10 = plVar15[2];
    plVar15[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



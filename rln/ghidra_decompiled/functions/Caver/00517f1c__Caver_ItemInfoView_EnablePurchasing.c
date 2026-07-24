/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00517f1c
 * Function: Caver::ItemInfoView::EnablePurchasing
 * Signature: undefined __thiscall EnablePurchasing(ItemInfoView * this, int param_1, intrusive_ptr * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ItemInfoView::EnablePurchasing(int, boost::intrusive_ptr<Caver::SceneObject> const&, bool)
    */

void __thiscall
Caver::ItemInfoView::EnablePurchasing
          (ItemInfoView *this,int param_1,intrusive_ptr *param_2,bool param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  GUIButton *pGVar8;
  GUILabel *pGVar9;
  FontLibrary *pFVar10;
  ulong uVar11;
  GUIFrameView *pGVar12;
  string *psVar13;
  char *pcVar14;
  long lVar15;
  code *pcVar16;
  GUIView *pGVar17;
  int *piVar18;
  int iVar19;
  GUIControl *pGVar20;
  undefined *puVar21;
  undefined8 local_d0;
  GUILabel *local_c8;
  undefined1 auStack_c0 [8];
  long *local_b8;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  GUILabel *local_a0;
  GUILabel *pGStack_98;
  ItemInfoView *local_90;
  GUIView *local_80;
  GUILabel *pGStack_78;
  undefined8 uStack_70;
  ItemInfoView *local_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar15 = *(long *)param_2;
  if (lVar15 != 0) {
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
  }
  plVar7 = *(long **)(this + 0x178);
  *(long *)(this + 0x178) = lVar15;
  if ((plVar7 == (long *)0x0) ||
     (iVar19 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar19, iVar19 != 0)) {
    lVar15 = *(long *)(this + 0x150);
  }
  else {
    (**(code **)(*plVar7 + 8))();
    lVar15 = *(long *)(this + 0x150);
  }
  if (lVar15 == 0) {
    pGVar12 = operator_new(0x110);
    GUIFrameView::GUIFrameView(pGVar12);
    boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
              ((shared_ptr<Caver::GUIFrameView> *)&local_80,pGVar12);
    pGVar17 = *(GUIView **)(this + 0x150);
    pGVar9 = *(GUILabel **)(this + 0x158);
    *(GUIView **)(this + 0x150) = local_80;
    *(GUILabel **)(this + 0x158) = pGStack_78;
    local_80 = pGVar17;
    pGStack_78 = pGVar9;
    if ((pGVar9 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGVar9 + 8), *(long *)(pGVar9 + 8) = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGVar9 + 0x10))(pGVar9);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
                    /* catch() { ... } // from try @ 00518260 with catch @ 005183b8 */
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar12 = *(GUIFrameView **)(this + 0x150);
                    /* catch() { ... } // from try @ 005182c4 with catch @ 005183cc */
    psVar13 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 005183d0 to 006183d7 has its CatchHandler @ 005183e0 */
                    /* try { // try from 005183d8 to 006183e3 has its CatchHandler @ 005181e8 */
                    /* catch() { ... } // from try @ 005183d0 with catch @ 005183e0 */
                    /* catch() { ... } // from try @ 0051842c with catch @ 005183e4
                       catch() { ... } // from try @ 00518448 with catch @ 005183e4 */
    FUN_00666bb8(&local_a0,"ui_frame_dark",&local_b8);
    TextureLibrary::TextureForName(psVar13,SUB81(&local_a0,0));
    GUIFrameView::SetFrameTexture(pGVar12,(intrusive_ptr *)&local_80,false);
    if ((local_80 != (GUIView *)0x0) &&
       (iVar19 = *(int *)(local_80 + 8), *(int *)(local_80 + 8) = iVar19 + -1, iVar19 + -1 == 0)) {
                    /* try { // try from 00518428 to 0061842b has its CatchHandler @ 0051843c */
                    /* try { // try from 0051842c to 0061843f has its CatchHandler @ 005183e4 */
      (**(code **)(*(long *)local_80 + 8))();
    }
    puVar6 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00518428 with catch @ 0051843c */
                    /* try { // try from 00518440 to 00618447 has its CatchHandler @ 00518450 */
    if (local_a0 + -0x18 != (GUILabel *)PTR_DAT_007e5de8) {
      pGVar9 = local_a0 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = *(int *)pGVar9;
        *(int *)pGVar9 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = *(int *)pGVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
          if (bVar3) {
            *(int *)pGVar9 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_a0 + -0x18);
      }
    }
                    /* try { // try from 00518448 to 00618453 has its CatchHandler @ 005183e4 */
                    /* catch() { ... } // from try @ 00518440 with catch @ 00518450 */
    pGStack_78 = _UNK_006944a8;
    local_80 = _DAT_006944a0;
    GUIView::SetFrame(*(GUIView **)(this + 0x150),(Rectangle *)&local_80);
    local_80 = *(GUIView **)(this + 0x150);
    pcVar16 = *(code **)(*(long *)this + 0x60);
    pGStack_78 = *(GUILabel **)(this + 0x158);
    if (pGStack_78 != (GUILabel *)0x0) {
                    /* catch() { ... } // from try @ 005184ec with catch @ 00518480 */
      *(long *)(pGStack_78 + 8) = *(long *)(pGStack_78 + 8) + 1;
    }
    (*pcVar16)(this,&local_80);
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
                    /* try { // try from 005184c4 to 006184c7 has its CatchHandler @ 005184e0 */
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
                    /* try { // try from 005184c8 to 006184cf has its CatchHandler @ 005184f4 */
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
                    /* catch() { ... } // from try @ 005184c4 with catch @ 005184e0 */
    pGVar9 = operator_new(0x150);
                    /* try { // try from 005184e4 to 006184eb has its CatchHandler @ 005184f0 */
    GUILabel::GUILabel(pGVar9);
                    /* try { // try from 005184ec to 00618507 has its CatchHandler @ 00518480 */
                    /* catch() { ... } // from try @ 005184e4 with catch @ 005184f0 */
                    /* catch() { ... } // from try @ 005184c8 with catch @ 005184f4 */
    boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
              ((shared_ptr<Caver::GUILabel> *)&local_a0,pGVar9);
    pGVar9 = local_a0;
    pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::DefaultFont(pFVar10);
    if (local_80 != *(GUIView **)(pGVar9 + 0xf0)) {
      if (pGStack_78 != (GUILabel *)0x0) {
        *(long *)(pGStack_78 + 8) = *(long *)(pGStack_78 + 8) + 1;
      }
      plVar7 = *(long **)(pGVar9 + 0xf8);
      *(GUIView **)(pGVar9 + 0xf0) = local_80;
      *(GUILabel **)(pGVar9 + 0xf8) = pGStack_78;
      if ((plVar7 != (long *)0x0) && (lVar15 = plVar7[1], plVar7[1] = lVar15 + -1, lVar15 + -1 == 0)
         ) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar15 = plVar7[2];
        plVar7[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      GUILabel::UpdateText(pGVar9);
    }
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
                    /* try { // try from 005185b0 to 00618787 has its CatchHandler @ 005185b0
                       catch() { ... } // from try @ 005185b0 with catch @ 005185b0
                       catch() { ... } // from try @ 0051878c with catch @ 005185b0 */
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar9 = local_a0;
    if ((((local_a0[0x108] != (GUILabel)0xff) || (local_a0[0x109] != (GUILabel)0xff)) ||
        (local_a0[0x10a] != (GUILabel)0xff)) || (local_a0[0x10b] != (GUILabel)0xff)) {
      plVar7 = *(long **)(local_a0 + 0x118);
      *(undefined4 *)(local_a0 + 0x108) = 0xffffffff;
      *(undefined8 *)(local_a0 + 0x110) = 0;
      *(undefined8 *)(local_a0 + 0x118) = 0;
      if ((plVar7 != (long *)0x0) && (lVar15 = plVar7[1], plVar7[1] = lVar15 + -1, lVar15 + -1 == 0)
         ) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar15 = plVar7[2];
        plVar7[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      GUILabel::UpdateText(pGVar9);
    }
    uVar5 = DAT_00683728;
    local_a0[0x140] = (GUILabel)0x1;
    *(undefined4 *)(local_a0 + 0x141) = 0xff000000;
    *(undefined8 *)(local_a0 + 0x148) = uVar5;
    GUILabel::UpdateText(local_a0);
    *(undefined4 *)(local_a0 + 0x130) = 4;
    GUILabel::UpdateBounds(local_a0);
    GUIView::SetFrame((GUIView *)local_a0,(Rectangle *)(*(long *)(this + 0x150) + 0x84));
    plVar7 = *(long **)(this + 0x150);
    pcVar16 = *(code **)(*plVar7 + 0x60);
    local_80 = (GUIView *)local_a0;
    pGStack_78 = pGStack_98;
    if (pGStack_98 != (GUILabel *)0x0) {
      *(long *)(pGStack_98 + 8) = *(long *)(pGStack_98 + 8) + 1;
    }
    (*pcVar16)(plVar7,&local_80);
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar9 = local_a0;
    FUN_00666bb8(&local_80,"Price:             x ",&local_b8);
    local_a8[0] = 0xff3bb0fb;
    GUILabel::AddText(pGVar9,&local_80,local_a8);
    if (local_80 + -0x18 != (GUIView *)puVar6) {
                    /* catch() { ... } // from try @ 00518788 with catch @ 00518a24 */
      pGVar17 = local_80 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = *(int *)pGVar17;
        *(int *)pGVar17 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = *(int *)pGVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pGVar17,0x10);
          if (bVar3) {
            *(int *)pGVar17 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_80 + -0x18);
      }
    }
    pGVar9 = local_a0;
    uVar1 = -param_1;
    if (-1 < param_1) {
      uVar1 = param_1;
    }
    local_d0 = (GUIView *)(puVar6 + 0x18);
    pcVar14 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned_int,char>
                        (uVar1,(char *)((long)&uStack_70 + 4));
    puVar21 = puVar6 + 0x18;
    if (param_1 < 0) {
                    /* try { // try from 00518788 to 0061878b has its CatchHandler @ 00518a24 */
                    /* try { // try from 0051878c to 00618a37 has its CatchHandler @ 005185b0 */
      pcVar14 = pcVar14 + -1;
      *pcVar14 = '-';
      puVar21 = local_d0;
    }
    FUN_00669e1c(&local_d0,0,*(undefined8 *)(puVar21 + -0x18),pcVar14,
                 ((long)&uStack_70 + 4) - (long)pcVar14);
    local_ac = 0xffffffff;
    GUILabel::AddText(pGVar9,&local_d0,&local_ac);
    if (local_d0 + -0x18 != (GUIView *)puVar6) {
      piVar18 = (int *)(local_d0 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = *piVar18;
        *piVar18 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = *piVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar3) {
            *piVar18 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_d0 + -0x18);
      }
    }
    psVar13 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_80,"ui_inventory_coin",auStack_c0);
    TextureLibrary::TextureForName(psVar13,SUB81(&local_80,0));
    if (local_80 + -0x18 != (GUIView *)puVar6) {
      pGVar17 = local_80 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = *(int *)pGVar17;
        *(int *)pGVar17 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = *(int *)pGVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pGVar17,0x10);
          if (bVar3) {
            *(int *)pGVar17 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_80 + -0x18);
      }
    }
    pGVar12 = operator_new(0x110);
    GUIFrameView::GUIFrameView(pGVar12);
    boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
              ((shared_ptr<Caver::GUIFrameView> *)&local_80,pGVar12);
    GUIFrameView::SetFrameTexture((GUIFrameView *)local_80,(intrusive_ptr *)&local_b8,true);
    local_c8 = *(GUILabel **)((long)local_b8 + 0x54);
    local_d0 = (GUIView *)
               CONCAT44((int)((*(float *)(*(long *)(this + 0x150) + 0x88) +
                              *(float *)(*(long *)(this + 0x150) + 0x90) * 0.5) -
                             *(float *)(local_b8 + 0xb) * 0.5),
                        DAT_00683480 - *(float *)(local_a0 + 0x84));
    GUIView::SetFrame(local_80,(Rectangle *)&local_d0);
    plVar7 = *(long **)(this + 0x150);
    pcVar16 = *(code **)(*plVar7 + 0x60);
    local_d0 = local_80;
    local_c8 = pGStack_78;
    if (pGStack_78 != (GUILabel *)0x0) {
      *(long *)(pGStack_78 + 8) = *(long *)(pGStack_78 + 8) + 1;
    }
    (*pcVar16)(plVar7,&local_d0);
    pGVar9 = local_c8;
    if ((local_c8 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(local_c8 + 8), *(long *)(local_c8 + 8) = lVar15 + -1, lVar15 + -1 == 0))
    {
      (**(code **)(*(long *)local_c8 + 0x10))(local_c8);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    if ((local_b8 != (long *)0x0) &&
       (iVar19 = (int)local_b8[1] + -1, *(int *)(local_b8 + 1) = iVar19, iVar19 == 0)) {
      (**(code **)(*local_b8 + 8))();
    }
    pGVar9 = pGStack_98;
    if ((pGStack_98 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_98 + 8), *(long *)(pGStack_98 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGStack_98 + 0x10))(pGStack_98);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
        lVar15 = *(long *)(this + 0x160);
        goto joined_r0x005189cc;
      }
    }
  }
  lVar15 = *(long *)(this + 0x160);
joined_r0x005189cc:
  if ((lVar15 == 0) && (param_3)) {
    pGVar8 = operator_new(0x1d0);
    GUIButton::GUIButton(pGVar8,1);
    boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
              ((shared_ptr<Caver::GUIButton> *)&local_80,pGVar8);
    pGVar17 = *(GUIView **)(this + 0x160);
    pGVar9 = *(GUILabel **)(this + 0x168);
    *(GUIView **)(this + 0x160) = local_80;
    *(GUILabel **)(this + 0x168) = pGStack_78;
    local_80 = pGVar17;
    pGStack_78 = pGVar9;
    if ((pGVar9 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGVar9 + 8), *(long *)(pGVar9 + 8) = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*(long *)pGVar9 + 0x10))(pGVar9);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar9 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x160));
    pFVar10 = (FontLibrary *)FontLibrary::sharedLibrary();
    FontLibrary::DefaultFont(pFVar10);
    if (local_80 != *(GUIView **)(pGVar9 + 0xf0)) {
      if (pGStack_78 != (GUILabel *)0x0) {
        *(long *)(pGStack_78 + 8) = *(long *)(pGStack_78 + 8) + 1;
      }
      plVar7 = *(long **)(pGVar9 + 0xf8);
      *(GUIView **)(pGVar9 + 0xf0) = local_80;
      *(GUILabel **)(pGVar9 + 0xf8) = pGStack_78;
      if ((plVar7 != (long *)0x0) && (lVar15 = plVar7[1], plVar7[1] = lVar15 + -1, lVar15 + -1 == 0)
         ) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar15 = plVar7[2];
        plVar7[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      GUILabel::UpdateText(pGVar9);
    }
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005180f4 with catch @ 005180c4 */
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
                    /* try { // try from 005180e0 to 006180f3 has its CatchHandler @ 00518118 */
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
    pGVar9 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x160));
                    /* try { // try from 005180f4 to 0061811b has its CatchHandler @ 005180c4 */
                    /* catch() { ... } // from try @ 005180e0 with catch @ 00518118 */
    if ((((pGVar9[0x108] != (GUILabel)0xff) || (pGVar9[0x109] != (GUILabel)0xff)) ||
        (pGVar9[0x10a] != (GUILabel)0xff)) || (pGVar9[0x10b] != (GUILabel)0xff)) {
      plVar7 = *(long **)(pGVar9 + 0x118);
      *(undefined4 *)(pGVar9 + 0x108) = 0xffffffff;
      *(undefined8 *)(pGVar9 + 0x110) = 0;
      *(undefined8 *)(pGVar9 + 0x118) = 0;
      if ((plVar7 != (long *)0x0) && (lVar15 = plVar7[1], plVar7[1] = lVar15 + -1, lVar15 + -1 == 0)
         ) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar15 = plVar7[2];
        plVar7[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
                    /* catch() { ... } // from try @ 005181dc with catch @ 0051817c */
      GUILabel::UpdateText(pGVar9);
    }
    pGVar9 = (GUILabel *)GUIButton::titleLabel(*(GUIButton **)(this + 0x160));
    uVar5 = DAT_00683728;
    pGVar9[0x140] = (GUILabel)0x1;
    *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
    *(undefined8 *)(pGVar9 + 0x148) = uVar5;
    GUILabel::UpdateText(pGVar9);
    pGVar8 = *(GUIButton **)(this + 0x160);
                    /* try { // try from 005181c0 to 006181c3 has its CatchHandler @ 005181d0 */
    FUN_00666bb8(&local_80,&DAT_00694311,&local_d0);
    GUIButton::SetTitle(pGVar8,(string *)&local_80);
                    /* catch() { ... } // from try @ 005181c0 with catch @ 005181d0 */
                    /* try { // try from 005181d4 to 006181db has its CatchHandler @ 005181e4 */
                    /* try { // try from 005181dc to 006181e7 has its CatchHandler @ 0051817c */
                    /* catch() { ... } // from try @ 005181d4 with catch @ 005181e4 */
    if (local_80 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
      pGVar17 = local_80 + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar19 = *(int *)pGVar17;
        *(int *)pGVar17 = iVar19 + -1;
      }
      else {
        do {
          iVar19 = *(int *)pGVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pGVar17,0x10);
          if (bVar3) {
            *(int *)pGVar17 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar19 < 1) {
        operator_delete(local_80 + -0x18);
      }
    }
                    /* try { // try from 005181e8 to 0061825f has its CatchHandler @ 005181e8
                       catch() { ... } // from try @ 005181e8 with catch @ 005181e8
                       catch() { ... } // from try @ 00518264 with catch @ 005181e8
                       catch() { ... } // from try @ 005182e0 with catch @ 005181e8
                       catch() { ... } // from try @ 005183d8 with catch @ 005181e8 */
    pGStack_78 = _DAT_006944b8;
    local_80 = _DAT_006944b0;
    GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_80);
    pGVar20 = *(GUIControl **)(this + 0x160);
    local_80 = (GUIView *)0x0;
    pGStack_98 = (GUILabel *)0x0;
    local_a0 = (GUILabel *)PTR_ButtonPressed_007e6f70;
    local_90 = this;
    uVar11 = boost::detail::function::has_empty_target(&local_a0);
    if ((uVar11 & 1) == 0) {
      local_68 = local_90;
      uStack_70 = pGStack_98;
      pGStack_78 = local_a0;
      local_80 = (GUIView *)PTR_stored_vtable_007e6530;
    }
    else {
      local_80 = (GUIView *)0x0;
    }
                    /* try { // try from 00518260 to 00618263 has its CatchHandler @ 005183b8 */
    GUIControl::AddTargetActionForControlEvent(pGVar20,this,&local_80,1);
                    /* try { // try from 00518264 to 006182c3 has its CatchHandler @ 005181e8 */
    if (((local_80 != (GUIView *)0x0) && (((ulong)local_80 & 1) == 0)) &&
       (*(code **)((ulong)local_80 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)local_80 & 0xfffffffffffffffe))(&pGStack_78,&pGStack_78,2);
    }
    local_80 = *(GUIView **)(this + 0x160);
    pcVar16 = *(code **)(*(long *)this + 0x60);
    pGStack_78 = *(GUILabel **)(this + 0x168);
    if (pGStack_78 != (GUILabel *)0x0) {
      *(long *)(pGStack_78 + 8) = *(long *)(pGStack_78 + 8) + 1;
    }
                    /* try { // try from 005182c4 to 006182df has its CatchHandler @ 005183cc */
    (*pcVar16)(this,&local_80);
    pGVar9 = pGStack_78;
    if ((pGStack_78 != (GUILabel *)0x0) &&
       (lVar15 = *(long *)(pGStack_78 + 8), *(long *)(pGStack_78 + 8) = lVar15 + -1,
       lVar15 + -1 == 0)) {
                    /* try { // try from 005182e0 to 006183cf has its CatchHandler @ 005181e8 */
      (**(code **)(*(long *)pGStack_78 + 0x10))(pGStack_78);
      lVar15 = *(long *)(pGVar9 + 0x10);
      *(long *)(pGVar9 + 0x10) = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*(long *)pGVar9 + 0x18))(pGVar9);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



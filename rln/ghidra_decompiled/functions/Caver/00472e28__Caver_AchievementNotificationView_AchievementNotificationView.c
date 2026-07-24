/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472e28
 * Function: Caver::AchievementNotificationView::AchievementNotificationView
 * Signature: undefined __thiscall AchievementNotificationView(AchievementNotificationView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::AchievementNotificationView() */

void __thiscall
Caver::AchievementNotificationView::AchievementNotificationView(AchievementNotificationView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  string *psVar5;
  GUIFrameView *this_00;
  FontLibrary *this_01;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  GUILabel *pGVar11;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  long local_68;
  GUILabel *local_60;
  long *local_58;
  long local_48;
  
                    /* try { // try from 00472e30 to 00572e3b has its CatchHandler @ 00472e8c */
                    /* try { // try from 00472e3c to 00572eaf has its CatchHandler @ 00472d10 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIFrameView::GUIFrameView((GUIFrameView *)this);
  *(undefined **)this = PTR_vtable_007e58c8 + 0x10;
  memset(this + 0x110,0,0x70);
  psVar5 = (string *)TextureLibrary::sharedLibrary();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00472e30 with catch @ 00472e8c
                        */
  FUN_00666bb8(&local_68,"ui_frame",auStack_70);
  TextureLibrary::TextureForName(psVar5,SUB81(&local_68,0));
                    /* try { // try from 00472eb0 to 00572eb7 has its CatchHandler @ 00472ec0 */
  GUIFrameView::SetFrameTexture((GUIFrameView *)this,(intrusive_ptr *)&local_60,false);
                    /* try { // try from 00472eb8 to 00572ec3 has its CatchHandler @ 00472d10 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00472eb0 with catch @ 00472ec0
                        */
                    /* try { // try from 00472ec4 to 00573183 has its CatchHandler @ 00472ec4
                       catch() { ... } // from try @ 00472ec4 with catch @ 00472ec4
                       catch() { ... } // from try @ 00473208 with catch @ 00472ec4 */
  if ((local_60 != (GUILabel *)0x0) &&
     (iVar9 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar9 + -1, iVar9 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 00473690 to 00573697 has its CatchHandler @ 00473974 */
                    /* try { // try from 00473698 to 0057376f has its CatchHandler @ 0047359c */
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  local_60 = (GUILabel *)CONCAT44(local_60._4_4_,0xbfbfbfbf);
  GUIFrameView::SetFrameColor((GUIFrameView *)this,(Color *)&local_60);
  this_00 = operator_new(0x110);
  GUIFrameView::GUIFrameView(this_00);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_60,this_00);
  pGVar11 = *(GUILabel **)(this + 0x140);
  plVar10 = *(long **)(this + 0x148);
  *(GUILabel **)(this + 0x140) = local_60;
  *(long **)(this + 0x148) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    local_60 = pGVar11;
    local_58 = plVar10;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  local_60 = *(GUILabel **)(this + 0x140);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x148);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_74,&local_78);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x158);
  *(GUILabel **)(this + 0x150) = local_60;
  *(long **)(this + 0x158) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  local_60 = *(GUILabel **)(this + 0x150);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x158);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_80 = 0xff000000;
  uStack_7c = 0xffffffff;
                    /* try { // try from 00473184 to 00573197 has its CatchHandler @ 004732b0 */
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_7c,&local_80);
                    /* try { // try from 00473198 to 005731a7 has its CatchHandler @ 004732b8 */
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x168);
  *(GUILabel **)(this + 0x160) = local_60;
  *(long **)(this + 0x168) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
                    /* try { // try from 004731e4 to 005731f7 has its CatchHandler @ 004732b4 */
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* try { // try from 004731f8 to 00573207 has its CatchHandler @ 004732f8 */
  plVar10 = local_58;
                    /* try { // try from 00473208 to 00573367 has its CatchHandler @ 00472ec4 */
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 00473770 to 00573783 has its CatchHandler @ 004739e4 */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar11 = *(GUILabel **)(this + 0x160);
  this_01 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_01);
  if (local_60 != *(GUILabel **)(pGVar11 + 0xf0)) {
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    plVar10 = *(long **)(pGVar11 + 0xf8);
    *(GUILabel **)(pGVar11 + 0xf0) = local_60;
    *(long **)(pGVar11 + 0xf8) = local_58;
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
                    /* catch() { ... } // from try @ 00473184 with catch @ 004732b0 */
      lVar6 = plVar10[2];
                    /* catch() { ... } // from try @ 004731e4 with catch @ 004732b4 */
                    /* catch() { ... } // from try @ 00473198 with catch @ 004732b8 */
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar11);
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 004731f8 with catch @ 004732f8 */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pGVar11 = *(GUILabel **)(this + 0x160);
  if ((((pGVar11[0x108] != (GUILabel)0xc8) || (pGVar11[0x109] != (GUILabel)0xb4)) ||
      (pGVar11[0x10a] != (GUILabel)0xa0)) || (pGVar11[0x10b] != (GUILabel)0xff)) {
    plVar10 = *(long **)(pGVar11 + 0x118);
    *(undefined4 *)(pGVar11 + 0x108) = 0xffa0b4c8;
    *(undefined8 *)(pGVar11 + 0x110) = 0;
    *(undefined8 *)(pGVar11 + 0x118) = 0;
                    /* try { // try from 00473368 to 005733c3 has its CatchHandler @ 00473368
                       catch() { ... } // from try @ 00473368 with catch @ 00473368
                       catch() { ... } // from try @ 00473424 with catch @ 00473368 */
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar6 = plVar10[2];
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar11);
    pGVar11 = *(GUILabel **)(this + 0x160);
  }
  local_58 = *(long **)(this + 0x168);
  pcVar7 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 004733c4 to 005733d7 has its CatchHandler @ 00473528 */
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  local_60 = pGVar11;
                    /* try { // try from 004733dc to 005733eb has its CatchHandler @ 0047352c */
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
                    /* try { // try from 00473404 to 00573417 has its CatchHandler @ 00473524 */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
                    /* try { // try from 0047341c to 00573423 has its CatchHandler @ 004734ec */
                    /* try { // try from 00473424 to 0057359b has its CatchHandler @ 00473368 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_88 = 0xff000000;
  uStack_84 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_84,&local_88);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(this + 0x178);
  *(GUILabel **)(this + 0x170) = local_60;
  *(long **)(this + 0x178) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
                    /* catch() { ... } // from try @ 0047341c with catch @ 004734ec */
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar4) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0047378c to 00573793 has its CatchHandler @ 00473934 */
    if (iVar9 < 1) {
                    /* try { // try from 00473794 to 0057380f has its CatchHandler @ 0047359c */
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar11 = *(GUILabel **)(this + 0x170);
                    /* catch() { ... } // from try @ 00473404 with catch @ 00473524 */
                    /* catch() { ... } // from try @ 004733c4 with catch @ 00473528 */
                    /* catch() { ... } // from try @ 004733dc with catch @ 0047352c */
  GameInterfaceBuilder::TextGradient(DAT_00687988,1.0,DAT_0068ea1c,1.0);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar10 = *(long **)(pGVar11 + 0x118);
  *(GUILabel **)(pGVar11 + 0x110) = local_60;
  *(long **)(pGVar11 + 0x118) = local_58;
  if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* try { // try from 0047359c to 00573673 has its CatchHandler @ 0047359c
                       catch() { ... } // from try @ 0047359c with catch @ 0047359c
                       catch() { ... } // from try @ 00473698 with catch @ 0047359c
                       catch() { ... } // from try @ 00473794 with catch @ 0047359c
                       catch() { ... } // from try @ 0047382c with catch @ 0047359c
                       catch() { ... } // from try @ 00473a40 with catch @ 0047359c */
  GUILabel::UpdateText(pGVar11);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  local_60 = *(GUILabel **)(this + 0x170);
  pcVar7 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x178);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar7)(this,&local_60);
  plVar10 = local_58;
  if ((local_58 != (long *)0x0) && (lVar6 = local_58[1], local_58[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar6 = plVar10[2];
    plVar10[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
                    /* try { // try from 00473674 to 00573687 has its CatchHandler @ 004739e8 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



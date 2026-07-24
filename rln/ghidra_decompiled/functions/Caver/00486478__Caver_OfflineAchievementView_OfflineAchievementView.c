/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00486478
 * Function: Caver::OfflineAchievementView::OfflineAchievementView
 * Signature: undefined __thiscall OfflineAchievementView(OfflineAchievementView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementView::OfflineAchievementView() */

void __thiscall Caver::OfflineAchievementView::OfflineAchievementView(OfflineAchievementView *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  GUIFrameView *this_00;
  GUIView *this_01;
  FontLibrary *this_02;
  long lVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  GUILabel *pGVar10;
  undefined4 local_90;
  undefined4 uStack_8c;
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
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e4bf8 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined **)this = puVar1;
  memset(this + 0x108,0,0x60);
  this_00 = operator_new(0x110);
  GUIFrameView::GUIFrameView(this_00);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_60,this_00);
  pGVar10 = *(GUILabel **)(this + 0x108);
  plVar9 = *(long **)(this + 0x110);
  *(GUILabel **)(this + 0x108) = local_60;
  *(long **)(this + 0x110) = local_58;
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    local_60 = pGVar10;
    local_58 = plVar9;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00486604 with catch @ 00486538
                       catch() { ... } // from try @ 00486730 with catch @ 00486538 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  local_60 = *(GUILabel **)(this + 0x108);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x110);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar6)(this,&local_60);
  plVar9 = local_58;
                    /* try { // try from 0048658c to 0058658f has its CatchHandler @ 00486624 */
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 004865b0 to 005865b3 has its CatchHandler @ 0048661c */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
                    /* try { // try from 004865dc to 005865df has its CatchHandler @ 004866fc */
  local_78 = 0xff000000;
  uStack_74 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_74,&local_78);
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00486600 to 00586603 has its CatchHandler @ 00486614 */
                    /* try { // try from 00486604 to 00586647 has its CatchHandler @ 00486538 */
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(this + 0x120);
  *(GUILabel **)(this + 0x118) = local_60;
  *(long **)(this + 0x120) = local_58;
                    /* catch() { ... } // from try @ 00486600 with catch @ 00486614 */
                    /* catch() { ... } // from try @ 004865b0 with catch @ 0048661c */
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0048658c with catch @ 00486624 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00486648 to 0058664f has its CatchHandler @ 004866f0 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* try { // try from 00486678 to 0058667b has its CatchHandler @ 004866b4 */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 0048669c to 0058669f has its CatchHandler @ 004866ac */
  puVar1 = PTR_DAT_007e5de8;
                    /* try { // try from 004866a0 to 005866a7 has its CatchHandler @ 004866f0 */
                    /* catch() { ... } // from try @ 0048669c with catch @ 004866ac */
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
                    /* catch() { ... } // from try @ 00486678 with catch @ 004866b4 */
  pGVar10 = *(GUILabel **)(this + 0x118);
                    /* try { // try from 004866d8 to 005866e7 has its CatchHandler @ 004866ec */
  if ((((pGVar10[0x108] != (GUILabel)0x99) || (pGVar10[0x109] != (GUILabel)0x99)) ||
      (pGVar10[0x10a] != (GUILabel)0x99)) || (pGVar10[0x10b] != (GUILabel)0x99)) {
    plVar9 = *(long **)(pGVar10 + 0x118);
                    /* catch() { ... } // from try @ 004866d8 with catch @ 004866ec */
                    /* catch() { ... } // from try @ 00486648 with catch @ 004866f0
                       catch() { ... } // from try @ 004866a0 with catch @ 004866f0 */
    *(undefined4 *)(pGVar10 + 0x108) = 0x99999999;
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
                    /* catch() { ... } // from try @ 004865dc with catch @ 004866fc */
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
                    /* try { // try from 00486720 to 0058672f has its CatchHandler @ 00486738 */
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 00486730 to 0058673b has its CatchHandler @ 00486538 */
                    /* catch() { ... } // from try @ 00486720 with catch @ 00486738 */
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
                    /* catch() { ... } // from try @ 00486750 with catch @ 0048673c */
    GUILabel::UpdateText(pGVar10);
    pGVar10 = *(GUILabel **)(this + 0x118);
  }
  pGVar10[0x140] = (GUILabel)0x0;
                    /* try { // try from 0048674c to 0058674f has its CatchHandler @ 00486760 */
                    /* try { // try from 00486750 to 00586773 has its CatchHandler @ 0048673c */
  GUILabel::UpdateText(pGVar10);
  local_60 = *(GUILabel **)(this + 0x118);
  pcVar6 = *(code **)(*(long *)this + 0x60);
                    /* catch() { ... } // from try @ 0048674c with catch @ 00486760 */
  local_58 = *(long **)(this + 0x120);
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00486774 to 0058678f has its CatchHandler @ 00486774
                       catch() { ... } // from try @ 00486774 with catch @ 00486774
                       catch() { ... } // from try @ 00486794 with catch @ 00486774 */
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar6)(this,&local_60);
  plVar9 = local_58;
                    /* try { // try from 00486790 to 00586793 has its CatchHandler @ 004867fc */
                    /* try { // try from 00486794 to 0058680f has its CatchHandler @ 00486774 */
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  this_01 = operator_new(0xf0);
  GUIView::GUIView(this_01);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_60,this_01);
  pGVar10 = *(GUILabel **)(this + 0x128);
  plVar9 = *(long **)(this + 0x130);
                    /* catch() { ... } // from try @ 00486790 with catch @ 004867fc */
  *(GUILabel **)(this + 0x128) = local_60;
  *(long **)(this + 0x130) = local_58;
  local_60 = pGVar10;
  local_58 = plVar9;
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  (**(code **)(*(long *)this + 0x60))(this,this + 0x128);
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_80 = 0xff000000;
  uStack_7c = 0xffffffff;
                    /* catch() { ... } // from try @ 004868c0 with catch @ 00486890 */
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_7c,&local_80);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(this + 0x140);
                    /* try { // try from 004868ac to 005868bf has its CatchHandler @ 004868e4 */
  *(GUILabel **)(this + 0x138) = local_60;
  *(long **)(this + 0x140) = local_58;
                    /* try { // try from 004868c0 to 005868e7 has its CatchHandler @ 00486890 */
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 004868ac with catch @ 004868e4 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* catch() { ... } // from try @ 00486a6c with catch @ 004868f4
                       catch() { ... } // from try @ 00486d34 with catch @ 004868f4 */
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar1) {
    piVar7 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* try { // try from 00486ed8 to 00586f4b has its CatchHandler @ 00486ed8
                       catch() { ... } // from try @ 00486ed8 with catch @ 00486ed8
                       catch() { ... } // from try @ 00486f50 with catch @ 00486ed8 */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  plVar9 = *(long **)(this + 0x128);
  local_60 = *(GUILabel **)(this + 0x138);
  pcVar6 = *(code **)(*plVar9 + 0x60);
  local_58 = *(long **)(this + 0x140);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar6)(plVar9,&local_60);
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_88 = 0xff000000;
  uStack_84 = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_84,&local_88);
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00486a04 to 00586a17 has its CatchHandler @ 00486bec */
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(this + 0x150);
  *(GUILabel **)(this + 0x148) = local_60;
  *(long **)(this + 0x150) = local_58;
                    /* try { // try from 00486a18 to 00586a2f has its CatchHandler @ 00486b80 */
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
                    /* try { // try from 00486a40 to 00586a53 has its CatchHandler @ 00486b70 */
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00486a54 to 00586a6b has its CatchHandler @ 00486b38 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_58;
                    /* try { // try from 00486a6c to 00586c0f has its CatchHandler @ 004868f4 */
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar1) {
    piVar7 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x148);
  this_02 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::SmallDefaultFont(this_02);
  if (local_60 != *(GUILabel **)(pGVar10 + 0xf0)) {
    if (local_58 != (long *)0x0) {
      local_58[1] = local_58[1] + 1;
    }
    plVar9 = *(long **)(pGVar10 + 0xf8);
    *(GUILabel **)(pGVar10 + 0xf0) = local_60;
    *(long **)(pGVar10 + 0xf8) = local_58;
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
                    /* catch() { ... } // from try @ 00486a54 with catch @ 00486b38 */
    GUILabel::UpdateText(pGVar10);
  }
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
                    /* catch() { ... } // from try @ 00486a40 with catch @ 00486b70 */
    if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 00486a18 with catch @ 00486b80 */
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  pGVar10 = *(GUILabel **)(this + 0x148);
  if ((((pGVar10[0x108] != (GUILabel)0xc8) || (pGVar10[0x109] != (GUILabel)0xb4)) ||
      (pGVar10[0x10a] != (GUILabel)0xa0)) || (pGVar10[0x10b] != (GUILabel)0xff)) {
    plVar9 = *(long **)(pGVar10 + 0x118);
    *(undefined4 *)(pGVar10 + 0x108) = 0xffa0b4c8;
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
    if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00486a04 with catch @ 00486bec */
      (**(code **)(*plVar9 + 0x10))(plVar9);
      lVar5 = plVar9[2];
      plVar9[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
                    /* try { // try from 00486c10 to 00586d33 has its CatchHandler @ 00486d3c */
    GUILabel::UpdateText(pGVar10);
    pGVar10 = *(GUILabel **)(this + 0x148);
  }
  plVar9 = *(long **)(this + 0x128);
  local_58 = *(long **)(this + 0x150);
  pcVar6 = *(code **)(*plVar9 + 0x60);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  local_60 = pGVar10;
  (*pcVar6)(plVar9,&local_60);
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  FUN_00666bb8(&local_68,&DAT_0068fbeb,auStack_70);
  local_90 = 0xff000000;
  uStack_8c = 0xffffffff;
  GameInterfaceBuilder::NormalLabel
            ((GameInterfaceBuilder *)&local_60,&local_68,&uStack_8c,&local_90);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  plVar9 = *(long **)(this + 0x160);
  *(GUILabel **)(this + 0x158) = local_60;
  *(long **)(this + 0x160) = local_58;
  if ((plVar9 != (long *)0x0) && (lVar5 = plVar9[1], plVar9[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  plVar9 = local_58;
                    /* try { // try from 00486d34 to 00586d3f has its CatchHandler @ 004868f4 */
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 00486c10 with catch @ 00486d3c */
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar1) {
    piVar7 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  local_60 = *(GUILabel **)(this + 0x158);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x160);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar6)(this,&local_60);
  plVar9 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar9[2];
    plVar9[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



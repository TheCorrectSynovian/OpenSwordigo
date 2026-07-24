/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048a020
 * Function: Caver::ChooseAgeView::ChooseAgeView
 * Signature: undefined __thiscall ChooseAgeView(ChooseAgeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChooseAgeView::ChooseAgeView() */

void __thiscall Caver::ChooseAgeView::ChooseAgeView(ChooseAgeView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  GUIFrameView *pGVar7;
  string *psVar8;
  GUILabel *pGVar9;
  GradientColor *pGVar10;
  GameInterfaceBuilder *this_00;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  GradientColor *pGVar14;
  GUIControl *pGVar15;
  long *plVar16;
  undefined1 auStack_b0 [8];
  long *local_a8;
  GradientColor *local_a0;
  long *local_98;
  undefined8 uStack_90;
  ChooseAgeView *local_88;
  undefined8 local_80;
  float local_78 [2];
  long *local_70;
  undefined8 uStack_68;
  ChooseAgeView *local_60;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e4a58 + 0x10;
  memset(this + 0xec,0,0x6c);
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar7);
  pGVar10 = *(GradientColor **)(this + 0xf8);
  plVar16 = *(long **)(this + 0x100);
  *(GradientColor **)(this + 0xf8) = local_a0;
  *(long **)(this + 0x100) = local_98;
  local_a0 = pGVar10;
  local_98 = plVar16;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00489ffc with catch @ 0048a0b8
                        */
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0048a0d8 to 0058a0df has its CatchHandler @ 0048a0e8 */
                    /* try { // try from 0048a0e0 to 0058a0eb has its CatchHandler @ 00489f98 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048a0d8 with catch @ 0048a0e8
                        */
  pGVar7 = *(GUIFrameView **)(this + 0xf8);
                    /* try { // try from 0048a0ec to 0058a12f has its CatchHandler @ 0048a0ec
                       catch() { ... } // from try @ 0048a0ec with catch @ 0048a0ec
                       catch() { ... } // from try @ 0048a134 with catch @ 0048a0ec */
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_slider_frame",&local_80);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_70,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_a0,false);
                    /* try { // try from 0048a130 to 0058a133 has its CatchHandler @ 0048a16c */
                    /* try { // try from 0048a134 to 0058a17f has its CatchHandler @ 0048a0ec */
  if ((local_a0 != (GradientColor *)0x0) &&
     (iVar6 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
  if (local_70 + -3 != (long *)PTR_DAT_007e5de8) {
    plVar16 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar16;
      *(int *)plVar16 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *(int *)plVar16 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_70 + -3);
    }
  }
                    /* catch() { ... } // from try @ 0048a130 with catch @ 0048a16c */
  local_a0 = (GradientColor *)CONCAT44(local_a0._4_4_,0xff82645a);
  GUIFrameView::SetFrameColor(*(GUIFrameView **)(this + 0xf8),(Color *)&local_a0);
                    /* try { // try from 0048a180 to 0058a1af has its CatchHandler @ 0048a180
                       catch() { ... } // from try @ 0048a180 with catch @ 0048a180
                       catch() { ... } // from try @ 0048a304 with catch @ 0048a180
                       catch() { ... } // from try @ 0048a3c0 with catch @ 0048a180
                       catch() { ... } // from try @ 0048a478 with catch @ 0048a180 */
  local_a0 = *(GradientColor **)(this + 0xf8);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  local_98 = *(long **)(this + 0x100);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
                    /* try { // try from 0048a1b0 to 0058a1b3 has its CatchHandler @ 0048a3c8 */
  (*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* try { // try from 0048a1d0 to 0058a1e3 has its CatchHandler @ 0048a3c4 */
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
                    /* try { // try from 0048a1e4 to 0058a1f7 has its CatchHandler @ 0048a3dc */
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0048a1f8 to 0058a203 has its CatchHandler @ 0048a394 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar7);
  pGVar10 = *(GradientColor **)(this + 0x108);
  plVar16 = *(long **)(this + 0x110);
                    /* try { // try from 0048a224 to 0058a227 has its CatchHandler @ 0048a3dc */
  *(GradientColor **)(this + 0x108) = local_a0;
  *(long **)(this + 0x110) = local_98;
  local_a0 = pGVar10;
  local_98 = plVar16;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* try { // try from 0048a258 to 0058a2cf has its CatchHandler @ 0048a44c */
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = *(GUIFrameView **)(this + 0x108);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_slider_frame",&local_80);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_70,0));
  GUIFrameView::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_a0,false);
  if ((local_a0 != (GradientColor *)0x0) &&
     (iVar6 = *(int *)(local_a0 + 8), *(int *)(local_a0 + 8) = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*(long *)local_a0 + 8))();
  }
                    /* try { // try from 0048a2e4 to 0058a303 has its CatchHandler @ 0048a450 */
  if (local_70 + -3 != (long *)puVar5) {
    plVar16 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar16;
      *(int *)plVar16 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *(int *)plVar16 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 0048ac80 to 0058ac8f has its CatchHandler @ 0048aefc */
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  local_a0 = (GradientColor *)CONCAT44(local_a0._4_4_,0xff82645a);
                    /* try { // try from 0048a304 to 0058a3b7 has its CatchHandler @ 0048a180 */
  GUIFrameView::SetFrameColor(*(GUIFrameView **)(this + 0x108),(Color *)&local_a0);
  local_a0 = *(GradientColor **)(this + 0x108);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  local_98 = *(long **)(this + 0x110);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar9 = operator_new(0x150);
                    /* catch() { ... } // from try @ 0048a1f8 with catch @ 0048a394 */
  GUILabel::GUILabel(pGVar9);
  boost::shared_ptr<Caver::GUILabel>::shared_ptr<Caver::GUILabel>
            ((shared_ptr<Caver::GUILabel> *)&local_a0,pGVar9);
  pGVar10 = *(GradientColor **)(this + 0x118);
  plVar16 = *(long **)(this + 0x120);
  *(GradientColor **)(this + 0x118) = local_a0;
  *(long **)(this + 0x120) = local_98;
                    /* try { // try from 0048a3b8 to 0058a3bf has its CatchHandler @ 0048a480 */
  local_a0 = pGVar10;
  local_98 = plVar16;
                    /* try { // try from 0048a3c0 to 0058a473 has its CatchHandler @ 0048a180 */
                    /* catch() { ... } // from try @ 0048a1d0 with catch @ 0048a3c4 */
                    /* catch() { ... } // from try @ 0048a1b0 with catch @ 0048a3c8 */
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* catch() { ... } // from try @ 0048a1e4 with catch @ 0048a3dc
                       catch() { ... } // from try @ 0048a224 with catch @ 0048a3dc */
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x118);
  *(undefined4 *)(pGVar9 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x118);
  *(undefined4 *)(pGVar9 + 0x134) = 4;
  GUILabel::UpdateBounds(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x118);
  psVar8 = (string *)FontLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"megalopolis_36",&local_80);
  FontLibrary::FontWithName(psVar8);
                    /* catch() { ... } // from try @ 0048a258 with catch @ 0048a44c */
                    /* catch() { ... } // from try @ 0048a2e4 with catch @ 0048a450 */
  if (local_a0 != *(GradientColor **)(pGVar9 + 0xf0)) {
    if (local_98 != (long *)0x0) {
      local_98[1] = local_98[1] + 1;
    }
    plVar16 = *(long **)(pGVar9 + 0xf8);
                    /* try { // try from 0048a474 to 0058a477 has its CatchHandler @ 0048a480 */
    *(GradientColor **)(pGVar9 + 0xf0) = local_a0;
    *(long **)(pGVar9 + 0xf8) = local_98;
                    /* try { // try from 0048a478 to 0058a483 has its CatchHandler @ 0048a180 */
                    /* catch() { ... } // from try @ 0048a3b8 with catch @ 0048a480
                       catch() { ... } // from try @ 0048a474 with catch @ 0048a480 */
                    /* try { // try from 0048a484 to 0058a82f has its CatchHandler @ 0048a484
                       catch(type#1 @ 00000000) { ... } // from try @ 0048a484 with catch @ 0048a484
                       catch(type#1 @ 00000000) { ... } // from try @ 0048a8a8 with catch @ 0048a484
                       catch(type#1 @ 00000000) { ... } // from try @ 0048a9e8 with catch @ 0048a484
                        */
    if ((plVar16 != (long *)0x0) &&
       (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar12 = plVar16[2];
      plVar16[2] = lVar12 + -1;
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    GUILabel::UpdateText(pGVar9);
  }
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if (local_70 + -3 != (long *)puVar5) {
                    /* try { // try from 0048ac90 to 0058ae43 has its CatchHandler @ 0048a9fc */
    plVar16 = local_70 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = (int)*plVar16;
      *(int *)plVar16 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = (int)*plVar16;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar2) {
          *(int *)plVar16 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_70 + -3);
    }
  }
  local_78[0] = 0.0;
  local_78[1] = 1.0;
  local_80 = 0xffffffffffffffff;
  pGVar9 = *(GUILabel **)(this + 0x118);
  pGVar10 = operator_new(0x18);
  GradientColor::GradientColor(pGVar10,2,local_78,(Color *)&local_80);
  local_a0 = pGVar10;
  boost::detail::shared_count::shared_count<Caver::GradientColor>((shared_count *)&local_98,pGVar10)
  ;
  boost::detail::sp_enable_shared_from_this(&local_a0,pGVar10,pGVar10);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  plVar16 = *(long **)(pGVar9 + 0x118);
  *(GradientColor **)(pGVar9 + 0x110) = local_a0;
  *(long **)(pGVar9 + 0x118) = local_98;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  GUILabel::UpdateText(pGVar9);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  uVar4 = DAT_00683728;
  pGVar9 = *(GUILabel **)(this + 0x118);
  pGVar9[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar9 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar9 + 0x148) = uVar4;
  GUILabel::UpdateText(pGVar9);
  pGVar9 = *(GUILabel **)(this + 0x118);
  FUN_00666bb8(&local_a0,&DAT_00690d2f,&local_a8);
  pGVar10 = local_a0;
  pGVar14 = local_a0 + -0x18;
  if ((*(size_t *)pGVar14 != *(size_t *)((long)*(void **)(pGVar9 + 0x100) + -0x18)) ||
     (iVar6 = memcmp(local_a0,*(void **)(pGVar9 + 0x100),*(size_t *)pGVar14), iVar6 != 0)) {
    FUN_0066a6a8(pGVar9 + 0x100,&local_a0);
    GUILabel::UpdateText(pGVar9);
    pGVar14 = local_a0 + -0x18;
    pGVar10 = local_a0;
  }
  if (pGVar14 != (GradientColor *)puVar5) {
    pGVar10 = pGVar10 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar2) {
          *(int *)pGVar10 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(pGVar14);
    }
  }
  local_a0 = *(GradientColor **)(this + 0x118);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  local_98 = *(long **)(this + 0x120);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  this_00 = (GameInterfaceBuilder *)(*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    this_00 = (GameInterfaceBuilder *)(**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      this_00 = (GameInterfaceBuilder *)(**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  GameInterfaceBuilder::Slider(this_00,0.0,DAT_00690d18);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  plVar16 = *(long **)(this + 0x130);
  *(GradientColor **)(this + 0x128) = local_a0;
  *(long **)(this + 0x130) = local_98;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  local_70 = (long *)PTR_SliderValueChanged_007e7508;
  pGVar15 = *(GUIControl **)(this + 0x128);
  *(undefined2 *)(pGVar15 + 0x16c) = 0x101;
  local_a0 = (GradientColor *)0x0;
  uStack_68 = 0;
  local_60 = this;
  uVar11 = boost::detail::function::has_empty_target(&local_70);
  if ((uVar11 & 1) == 0) {
    local_88 = local_60;
                    /* try { // try from 0048a830 to 0058a8a7 has its CatchHandler @ 0048a9bc */
    uStack_90 = uStack_68;
    local_98 = local_70;
    local_a0 = (GradientColor *)PTR_stored_vtable_007e65b8;
  }
  else {
    local_a0 = (GradientColor *)0x0;
  }
  GUIControl::AddTargetActionForControlEvent(pGVar15,this,&local_a0,0x1000);
  if (((local_a0 != (GradientColor *)0x0) && (((ulong)local_a0 & 1) == 0)) &&
     (*(code **)((ulong)local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
    (**(code **)((ulong)local_a0 & 0xfffffffffffffffe))(&local_98,&local_98,2);
  }
  local_a0 = *(GradientColor **)(this + 0x128);
  pcVar13 = *(code **)(*(long *)this + 0x60);
  local_98 = *(long **)(this + 0x130);
  if (local_98 != (long *)0x0) {
                    /* try { // try from 0048a8a8 to 0058a9df has its CatchHandler @ 0048a484 */
    local_98[1] = local_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar7);
  pGVar10 = *(GradientColor **)(this + 0x138);
  plVar16 = *(long **)(this + 0x140);
  *(GradientColor **)(this + 0x138) = local_a0;
  *(long **)(this + 0x140) = local_98;
  local_a0 = pGVar10;
  local_98 = plVar16;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,&DAT_00690d33,auStack_50);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_a0,0));
  if (local_a0 + -0x18 != (GradientColor *)puVar5) {
    pGVar10 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar2) {
          *(int *)pGVar10 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048a830 with catch @ 0048a9bc
                        */
  GUIFrameView::SetFrameTexture(*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)&local_70,false);
  local_a0 = *(GradientColor **)(*(GUIView **)(this + 0x138) + 0x74);
  local_98 = *(long **)((long)local_70 + 0x54);
                    /* try { // try from 0048a9e0 to 0058a9e7 has its CatchHandler @ 0048a9f0 */
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_a0);
                    /* try { // try from 0048a9e8 to 0058a9f3 has its CatchHandler @ 0048a484 */
  local_a0 = *(GradientColor **)(this + 0x138);
  local_a0[0xe5] = (GradientColor)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0048a9e0 with catch @ 0048a9f0
                        */
  pcVar13 = *(code **)(*(long *)this + 0x60);
                    /* try { // try from 0048a9fc to 0058aab3 has its CatchHandler @ 0048a9fc
                       catch() { ... } // from try @ 0048a9fc with catch @ 0048a9fc
                       catch() { ... } // from try @ 0048ab34 with catch @ 0048a9fc
                       catch() { ... } // from try @ 0048ac90 with catch @ 0048a9fc
                       catch() { ... } // from try @ 0048ae74 with catch @ 0048a9fc
                       catch() { ... } // from try @ 0048af28 with catch @ 0048a9fc
                       catch() { ... } // from try @ 0048af5c with catch @ 0048a9fc */
  local_98 = *(long **)(this + 0x140);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  pGVar7 = operator_new(0x110);
  GUIFrameView::GUIFrameView(pGVar7);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_a0,pGVar7);
  pGVar10 = *(GradientColor **)(this + 0x148);
  plVar16 = *(long **)(this + 0x150);
  *(GradientColor **)(this + 0x148) = local_a0;
  *(long **)(this + 0x150) = local_98;
  local_a0 = pGVar10;
  local_98 = plVar16;
  if ((plVar16 != (long *)0x0) && (lVar12 = plVar16[1], plVar16[1] = lVar12 + -1, lVar12 + -1 == 0))
  {
                    /* try { // try from 0048aab4 to 0058aac7 has its CatchHandler @ 0048af2c */
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar12 = plVar16[2];
                    /* try { // try from 0048aac8 to 0058aad7 has its CatchHandler @ 0048af64 */
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
                    /* try { // try from 0048aad8 to 0058ab0f has its CatchHandler @ 0048af30 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_a0,"arro_r",auStack_b0);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_a0,0));
  if (local_a0 + -0x18 != (GradientColor *)puVar5) {
    pGVar10 = local_a0 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *(int *)pGVar10;
      *(int *)pGVar10 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *(int *)pGVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar10,0x10);
        if (bVar2) {
          *(int *)pGVar10 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(local_a0 + -0x18);
    }
  }
                    /* try { // try from 0048ab30 to 0058ab33 has its CatchHandler @ 0048af64 */
  GUIFrameView::SetFrameTexture(*(GUIFrameView **)(this + 0x148),(intrusive_ptr *)&local_a8,false);
                    /* try { // try from 0048ab34 to 0058ac7f has its CatchHandler @ 0048a9fc */
  local_a0 = *(GradientColor **)(*(GUIView **)(this + 0x148) + 0x74);
  local_98 = *(long **)((long)local_a8 + 0x54);
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_a0);
  local_a0 = *(GradientColor **)(this + 0x148);
  local_a0[0xe5] = (GradientColor)0x0;
  pcVar13 = *(code **)(*(long *)this + 0x60);
  local_98 = *(long **)(this + 0x150);
  if (local_98 != (long *)0x0) {
    local_98[1] = local_98[1] + 1;
  }
  (*pcVar13)(this,&local_a0);
  plVar16 = local_98;
  if ((local_98 != (long *)0x0) &&
     (lVar12 = local_98[1], local_98[1] = lVar12 + -1, lVar12 + -1 == 0)) {
    (**(code **)(*local_98 + 0x10))(local_98);
    lVar12 = plVar16[2];
    plVar16[2] = lVar12 + -1;
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  if ((local_a8 != (long *)0x0) &&
     (iVar6 = (int)local_a8[1] + -1, *(int *)(local_a8 + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_a8 + 8))();
  }
  if ((local_70 != (long *)0x0) &&
     (iVar6 = (int)local_70[1] + -1, *(int *)(local_70 + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*local_70 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



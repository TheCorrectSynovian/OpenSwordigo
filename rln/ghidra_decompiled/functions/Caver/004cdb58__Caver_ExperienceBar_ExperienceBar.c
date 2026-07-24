/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cdb58
 * Function: Caver::ExperienceBar::ExperienceBar
 * Signature: undefined __thiscall ExperienceBar(ExperienceBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::ExperienceBar() */

void __thiscall Caver::ExperienceBar::ExperienceBar(ExperienceBar *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  string *psVar6;
  GUISlider *pGVar7;
  FontLibrary *this_00;
  long lVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  ExperienceBar *pEVar14;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  long *local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined **)this = PTR_vtable_007e7418 + 0x10;
  pEVar14 = this + 0xf0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)pEVar14 = 0;
  *(undefined8 *)(this + 0x114) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  this[0x110] = (ExperienceBar)0x0;
  *(undefined8 *)(this + 300) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  *(undefined8 *)(this + 0x133) = 0;
  *(undefined8 *)(this + 0x11c) = 0;
  this[0x13b] = (ExperienceBar)0xff;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  this[0x154] = (ExperienceBar)0xff;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1d0] = (ExperienceBar)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  this[0x22a] = (ExperienceBar)0x0;
  *(undefined2 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  this[0x22b] = (ExperienceBar)0xff;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  this[0x244] = (ExperienceBar)0xff;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[0x2c0] = (ExperienceBar)0x0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0xffffffff;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
                    /* catch() { ... } // from try @ 004cdd04 with catch @ 004cdcbc */
  this[0x31b] = (ExperienceBar)0xff;
  this[0x334] = (ExperienceBar)0xff;
  this[0x31a] = (ExperienceBar)0x0;
  *(undefined2 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x398) = 0;
                    /* try { // try from 004cdce8 to 005cdceb has its CatchHandler @ 004cdcf8 */
  this[0x3b0] = (ExperienceBar)0x0;
  *(undefined8 *)(this + 0x3a8) = 0;
                    /* catch() { ... } // from try @ 004cdce8 with catch @ 004cdcf8 */
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
                    /* try { // try from 004cdcfc to 005cdd03 has its CatchHandler @ 004cdd0c */
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
                    /* try { // try from 004cdd04 to 005cdd0f has its CatchHandler @ 004cdcbc */
  *(undefined4 *)(this + 0x358) = 0;
                    /* catch() { ... } // from try @ 004cdcfc with catch @ 004cdd0c */
  *(undefined8 *)(this + 1000) = 0;
                    /* try { // try from 004cdd10 to 005cdd97 has its CatchHandler @ 004cdd10
                       catch(type#1 @ 00000000) { ... } // from try @ 004cdd10 with catch @ 004cdd10
                       catch(type#1 @ 00000000) { ... } // from try @ 004cddb4 with catch @ 004cdd10
                       catch(type#1 @ 00000000) { ... } // from try @ 004cddd8 with catch @ 004cdd10
                        */
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined4 *)(this + 0x3f0) = 0xffffffff;
  *(undefined2 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  this[0xe5] = (ExperienceBar)0x0;
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_xp_frame",&local_88);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_78,0));
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 004ce1c0 to 005ce22b has its CatchHandler @ 004ce15c */
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_xp_bar",auStack_90);
                    /* try { // try from 004cdd98 to 005cddb3 has its CatchHandler @ 004cddcc */
  TextureLibrary::TextureForName(psVar6,SUB81(&local_78,0));
  if ((undefined *)(local_78 + -0x18) != puVar5) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
                    /* try { // try from 004ce1a4 to 005ce1bf has its CatchHandler @ 004ce228 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
                    /* try { // try from 004cddb4 to 005cddcf has its CatchHandler @ 004cdd10 */
  pGVar7 = operator_new(0x170);
  GUISlider::GUISlider(pGVar7);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004cdd98 with catch @ 004cddcc
                        */
                    /* try { // try from 004cddd0 to 005cddd7 has its CatchHandler @ 004cdde0 */
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>
            ((shared_ptr<Caver::GUISlider> *)&local_78,pGVar7);
  lVar9 = *(long *)(this + 0xf0);
  plVar13 = *(long **)(this + 0xf8);
                    /* try { // try from 004cddd8 to 005cdde3 has its CatchHandler @ 004cdd10 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004cddd0 with catch @ 004cdde0
                        */
  *(long *)(this + 0xf0) = local_78;
  *(long **)(this + 0xf8) = local_70;
  local_78 = lVar9;
  local_70 = plVar13;
                    /* catch() { ... } // from try @ 004cde20 with catch @ 004cddfc */
  if ((plVar13 != (long *)0x0) && (lVar8 = plVar13[1], plVar13[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
                    /* try { // try from 004cde1c to 005cde1f has its CatchHandler @ 004cde30 */
    if (lVar9 + -1 == 0) {
                    /* try { // try from 004cde20 to 005cde43 has its CatchHandler @ 004cddfc */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
                    /* catch() { ... } // from try @ 004cde1c with catch @ 004cde30 */
  pGVar7 = *(GUISlider **)pEVar14;
  pGVar7[0xe5] = (GUISlider)0x0;
  GUISlider::SetFrameTexture(pGVar7,(intrusive_ptr *)&local_80);
  GUISlider::SetBarTexture(*(GUISlider **)pEVar14,(intrusive_ptr *)&local_88);
  local_78 = *(long *)(this + 0xf0);
  pcVar10 = *(code **)(*(long *)this + 0x60);
  local_70 = *(long **)(this + 0xf8);
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  (*pcVar10)(this,&local_78);
  plVar13 = local_70;
  if ((local_70 != (long *)0x0) && (lVar9 = local_70[1], local_70[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar13 = *(long **)(this + 0x130);
  *(long *)(this + 0x128) = local_78;
  *(long **)(this + 0x130) = local_70;
  if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  uVar4 = DAT_00683728;
  this[0x150] = (ExperienceBar)0x1;
  *(undefined4 *)(this + 0x151) = 0xff000000;
  *(undefined8 *)(this + 0x158) = uVar4;
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
  FontText::SetColor((FontText *)(this + 0x128),(Color *)&local_a0);
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar13 = *(long **)(this + 0x220);
  *(long *)(this + 0x218) = local_78;
  *(long **)(this + 0x220) = local_70;
  if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  this[0x240] = (ExperienceBar)0x1;
  *(undefined4 *)(this + 0x241) = 0xff000000;
  *(undefined8 *)(this + 0x248) = uVar4;
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
  FontText::SetColor((FontText *)(this + 0x218),(Color *)&local_a0);
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar13 = *(long **)(this + 0x310);
  *(long *)(this + 0x308) = local_78;
  *(long **)(this + 0x310) = local_70;
  if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  this[0x330] = (ExperienceBar)0x1;
  *(undefined4 *)(this + 0x331) = 0xff000000;
  *(undefined8 *)(this + 0x338) = uVar4;
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
  FontText::SetColor((FontText *)(this + 0x308),(Color *)&local_a0);
  uStack_94 = (undefined4)local_80[0xb];
  local_a0 = 0;
                    /* catch() { ... } // from try @ 004ce0c8 with catch @ 004ce098 */
  local_98 = 0x43e10000;
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_a0);
  plVar13 = local_70;
                    /* try { // try from 004ce0b4 to 005ce0c7 has its CatchHandler @ 004ce0ec */
  if ((local_70 != (long *)0x0) && (lVar9 = local_70[1], local_70[1] = lVar9 + -1, lVar9 + -1 == 0))
  {
                    /* try { // try from 004ce0c8 to 005ce0ef has its CatchHandler @ 004ce098 */
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar9 = plVar13[2];
    plVar13[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 004ce0b4 with catch @ 004ce0ec */
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if ((local_88 != (long *)0x0) &&
     (iVar12 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar12, iVar12 == 0)) {
                    /* catch() { ... } // from try @ 004ce150 with catch @ 004ce110 */
    (**(code **)(*local_88 + 8))();
  }
  if ((local_80 != (long *)0x0) &&
     (iVar12 = (int)local_80[1] + -1, *(int *)(local_80 + 1) = iVar12, iVar12 == 0)) {
                    /* try { // try from 004ce134 to 005ce137 has its CatchHandler @ 004ce144 */
    (**(code **)(*local_80 + 8))();
  }
                    /* catch() { ... } // from try @ 004ce134 with catch @ 004ce144 */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004ce148 to 005ce14f has its CatchHandler @ 004ce158 */
                    /* try { // try from 004ce150 to 005ce15b has its CatchHandler @ 004ce110 */
                    /* catch() { ... } // from try @ 004ce148 with catch @ 004ce158 */
                    /* try { // try from 004ce15c to 005ce1a3 has its CatchHandler @ 004ce15c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce15c with catch @ 004ce15c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce1c0 with catch @ 004ce15c
                       catch(type#1 @ 00000000) { ... } // from try @ 004ce234 with catch @ 004ce15c
                        */
  return;
}



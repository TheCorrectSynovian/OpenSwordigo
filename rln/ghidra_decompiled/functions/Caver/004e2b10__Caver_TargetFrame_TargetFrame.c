/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e2b10
 * Function: Caver::TargetFrame::TargetFrame
 * Signature: undefined __thiscall TargetFrame(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x004e2eec) */
/* Caver::TargetFrame::TargetFrame() */

void __thiscall Caver::TargetFrame::TargetFrame(TargetFrame *this)

{
  undefined *puVar1;
  TargetFrame *pTVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined *puVar8;
  FontLibrary *this_00;
  string *psVar9;
  GUISlider *pGVar10;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  undefined1 auStack_98 [8];
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined1 auStack_70 [8];
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  GUIView::GUIView((GUIView *)this);
  puVar8 = PTR_DAT_007e5de8;
  puVar1 = PTR_vtable_007e7aa0 + 0x10;
  *(undefined8 *)(this + 0xec) = 0x7f7fffff;
  *(undefined **)this = puVar1;
  this[0x104] = (TargetFrame)0x0;
  this[0x10c] = (TargetFrame)0x0;
  *(undefined4 *)(this + 0x108) = 0xbf800000;
  *(undefined4 *)(this + 0x130) = 0xff000000;
  *(undefined **)(this + 0xf8) = puVar8 + 0x18;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (TargetFrame)0xff;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  this[0x1c8] = (TargetFrame)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x208) = 0xffffffff;
  this[0x222] = (TargetFrame)0x0;
  *(undefined2 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  this[0x223] = (TargetFrame)0xff;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  this[0x23c] = (TargetFrame)0xff;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  this[0x2b8] = (TargetFrame)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2f8) = 0xffffffff;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  this[0xe5] = (TargetFrame)0x0;
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (local_78 != (long *)0x0) {
    local_78[1] = local_78[1] + 1;
  }
  plVar15 = *(long **)(this + 0x218);
  *(undefined8 *)(this + 0x210) = local_80;
  *(long **)(this + 0x218) = local_78;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  uVar7 = DAT_00683728;
  this[0x238] = (TargetFrame)0x1;
  *(undefined4 *)(this + 0x239) = 0xff000000;
  *(undefined8 *)(this + 0x240) = uVar7;
  local_68 = CONCAT44(local_68._4_4_,0xffffffff);
  FontText::SetColor((FontText *)(this + 0x210),(Color *)&local_68);
  if (local_78 != (long *)0x0) {
    local_78[1] = local_78[1] + 1;
  }
  plVar15 = *(long **)(this + 0x128);
  *(undefined8 *)(this + 0x120) = local_80;
  *(long **)(this + 0x128) = local_78;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  this[0x148] = (TargetFrame)0x1;
  *(undefined4 *)(this + 0x149) = 0xff000000;
  *(undefined8 *)(this + 0x150) = uVar7;
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_68,"ui_xp_frame",auStack_70);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_68,0));
  if ((undefined *)(local_68 + -0x18) != puVar8) {
    piVar13 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  psVar9 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_68,"ui_health_bar",auStack_98);
  TextureLibrary::TextureForName(psVar9,SUB81(&local_68,0));
  if ((undefined *)(local_68 + -0x18) != puVar8) {
    piVar13 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar14 = *piVar13;
      *piVar13 = iVar14 + -1;
    }
    else {
      do {
        iVar14 = *piVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar14 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar10 = operator_new(0x170);
  GUISlider::GUISlider(pGVar10);
  boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>
            ((shared_ptr<Caver::GUISlider> *)&local_68,pGVar10);
  lVar11 = *(long *)(this + 0x110);
  plVar15 = *(long **)(this + 0x118);
  *(long *)(this + 0x110) = local_68;
  *(long **)(this + 0x118) = local_60;
  local_68 = lVar11;
  local_60 = plVar15;
  if ((plVar15 != (long *)0x0) && (lVar11 = plVar15[1], plVar15[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  pTVar2 = this + 0x110;
  pGVar10 = *(GUISlider **)pTVar2;
  pGVar10[0xe5] = (GUISlider)0x0;
  GUISlider::SetFrameTexture(pGVar10,(intrusive_ptr *)&local_88);
  GUISlider::SetBarTexture(*(GUISlider **)pTVar2,(intrusive_ptr *)&local_90);
  lVar11 = *(long *)pTVar2;
  fVar16 = *(float *)(lVar11 + 0x124);
  *(undefined4 *)(lVar11 + 0x138) = 0x3f800000;
  if (fVar16 <= 1.0) {
    fVar6 = *(float *)(lVar11 + 0x128);
  }
  else {
    fVar16 = *(float *)(lVar11 + 0x134);
    *(undefined4 *)(lVar11 + 300) = 0;
    *(undefined1 *)(lVar11 + 0x160) = 1;
    if (fVar16 <= 1.0) {
      fVar16 = 1.0;
    }
    *(float *)(lVar11 + 0x124) = fVar16;
    *(float *)(lVar11 + 0x128) = fVar16;
    fVar6 = fVar16;
  }
  if (1.0 < fVar6) {
    if (*(char *)(lVar11 + 0x16c) != '\0') {
      fVar16 = (float)(int)fVar16;
    }
    if (fVar16 <= *(float *)(lVar11 + 0x134)) {
      fVar16 = *(float *)(lVar11 + 0x134);
    }
    *(undefined4 *)(lVar11 + 300) = 0;
    *(float *)(lVar11 + 0x124) = fVar16;
    *(float *)(lVar11 + 0x128) = fVar16;
    *(undefined1 *)(lVar11 + 0x160) = 1;
  }
  *(undefined1 *)(lVar11 + 0x160) = 1;
  local_68 = *(long *)(this + 0x110);
  pcVar12 = *(code **)(*(long *)this + 0x60);
  local_60 = *(long **)(this + 0x118);
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  (*pcVar12)(this,&local_68);
  plVar15 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar11 = local_60[1], local_60[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar11 = plVar15[2];
    plVar15[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  local_68 = 0;
  local_60 = (long *)CONCAT44((int)local_88[0xb],0x43500000);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_68);
  this[0xe4] = (TargetFrame)0x1;
  if ((local_90 != (long *)0x0) &&
     (iVar14 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((local_88 != (long *)0x0) &&
     (iVar14 = (int)local_88[1] + -1, *(int *)(local_88 + 1) = iVar14, iVar14 == 0)) {
    (**(code **)(*local_88 + 8))();
  }
  if ((local_78 != (long *)0x0) &&
     (lVar11 = local_78[1], local_78[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar11 = local_78[2];
    local_78[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_78 + 0x18))(local_78);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



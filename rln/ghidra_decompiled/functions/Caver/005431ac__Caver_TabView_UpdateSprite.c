/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005431ac
 * Function: Caver::TabView::UpdateSprite
 * Signature: undefined __thiscall UpdateSprite(TabView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabView::UpdateSprite() */

void __thiscall Caver::TabView::UpdateSprite(TabView *this)

{
  Sprite *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  string *psVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  long local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  long local_a8;
  
                    /* try { // try from 005431c4 to 006431cb has its CatchHandler @ 005435bc */
                    /* try { // try from 005431cc to 006431d7 has its CatchHandler @ 00543554 */
                    /* try { // try from 005431d8 to 00643277 has its CatchHandler @ 00542f7c */
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  this_00 = (Sprite *)(this + 0x1b0);
  Sprite::Clear(this_00);
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
  fVar7 = _DAT_00694ee8;
  fVar6 = _DAT_006884d0;
  fVar5 = DAT_006882c0;
  local_b0 = *(float *)(this + 0x8c);
  local_b8 = 0;
  local_ac = 0.0;
  if (0 < *(int *)(this + 0x210)) {
    uVar15 = 0;
    do {
      lVar10 = GUIWindow::mainWindow();
      lVar13 = *(long *)(this + 0xf8);
      fVar16 = 10.0;
                    /* try { // try from 005432b8 to 00643527 has its CatchHandler @ 00542f7c */
      if (*(float *)(lVar10 + 0x90) < fVar6) {
        fVar16 = 6.0;
      }
      fVar16 = (*(float *)(lVar13 + 0x58) + fVar16) * (float)(int)uVar15;
      if (uVar15 == *(uint *)(this + 0x208)) {
        local_c0 = *(undefined8 *)(*(long *)(this + 0x100) + 0x54);
        local_c8 = (ulong)(uint)fVar16 << 0x20;
        local_d0 = 0xffffffff;
        Sprite::AddRectangle
                  (this_00,(Rectangle *)&local_c8,(Rectangle *)(*(long *)(this + 0x100) + 0x5c),
                   (Color *)&local_d0);
      }
      else {
        fVar17 = *(float *)(lVar13 + 0x54);
        local_c8 = (ulong)(uint)fVar16 << 0x20;
        local_c0 = CONCAT44(*(float *)(lVar13 + 0x58),fVar17);
        local_d0 = 0xffffffff;
        Sprite::AddRectangle
                  (this_00,(Rectangle *)&local_c8,(Rectangle *)(lVar13 + 0x5c),(Color *)&local_d0);
        local_b0 = fVar17 - (float)local_b8;
      }
      psVar11 = (string *)TextureLibrary::sharedLibrary();
      FUN_0035a030(&local_c8,"ui_tab_",*(long *)(this + 0x218) + uVar15 * 8);
      TextureLibrary::TextureForName(psVar11,SUB81(&local_c8,0));
      if ((undefined *)(local_c8 + -0x18) != puVar9) {
        piVar12 = (int *)(local_c8 + -8);
        if (puVar8 == (undefined *)0x0) {
                    /* try { // try from 00543278 to 006432b7 has its CatchHandler @ 00543508 */
          iVar14 = *piVar12;
          *piVar12 = iVar14 + -1;
        }
        else {
          do {
            iVar14 = *piVar12;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = iVar14 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar14 < 1) {
          operator_delete((undefined *)(local_c8 + -0x18));
        }
      }
      fVar17 = *(float *)(CONCAT44(uStack_cc,local_d0) + 0x54);
      fVar18 = *(float *)(CONCAT44(uStack_cc,local_d0) + 0x58);
      local_e0 = fVar7 - fVar17;
      if (uVar15 == *(uint *)(this + 0x208)) {
        fVar17 = fVar17 * fVar5;
        fVar18 = fVar18 * fVar5;
      }
      local_e0 = local_e0 + 0.0;
      fStack_dc = (float)(int)(fVar16 + *(float *)(*(long *)(this + 0xf8) + 0x58) * 0.5) +
                  fVar18 * -0.5;
      Vector2::Rounded();
      local_c0 = CONCAT44(fVar18,fVar17);
      local_e4 = 0xffffffff;
      local_c8 = local_d8;
      Sprite::AddRectangle
                (this_00,(Rectangle *)&local_c8,(Rectangle *)(CONCAT44(uStack_cc,local_d0) + 0x5c),
                 (Color *)&local_e4);
      plVar4 = (long *)CONCAT44(uStack_cc,local_d0);
      local_ac = (fVar16 + *(float *)(*(long *)(this + 0xf8) + 0x58)) - local_b8._4_4_;
      if ((plVar4 != (long *)0x0) &&
         (iVar14 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar14, iVar14 == 0)) {
        (**(code **)(*plVar4 + 8))();
      }
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)*(int *)(this + 0x210));
  }
  (**(code **)(*(long *)this + 0xf8))(this,&local_b8);
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



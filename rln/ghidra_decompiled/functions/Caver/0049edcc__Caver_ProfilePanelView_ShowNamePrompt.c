/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049edcc
 * Function: Caver::ProfilePanelView::ShowNamePrompt
 * Signature: undefined __thiscall ShowNamePrompt(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::ShowNamePrompt() */

void __thiscall Caver::ProfilePanelView::ShowNamePrompt(ProfilePanelView *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUITextField *pGVar5;
  FontLibrary *this_00;
  undefined *puVar6;
  GUIFrameView *this_01;
  string *psVar7;
  int in_w5;
  long lVar8;
  GUIView *pGVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  code *pcVar13;
  undefined1 auStack_c0 [4];
  float local_bc;
  undefined1 auStack_b8 [4];
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  GUIView *local_88;
  long *local_80;
  undefined1 auStack_78 [8];
  long local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  long local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_58,"Set name",&local_a0);
  FUN_00666bb8(&local_50,"Cancel",&local_88);
  FUN_00666bb8(&local_88,"SET PLAYER NAME",auStack_68);
  FUN_00666bb8(&local_70,&DAT_0068fbeb,auStack_78);
  GameInterfaceBuilder::AlertView
            ((GameInterfaceBuilder *)&local_88,(string *)&local_70,(string *)0x2,
             (int)&stack0xfffffffffffffff0 + -0x48,(string *)0x1,in_w5);
  lVar8 = CONCAT44(fStack_94,fStack_98);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  }
  plVar12 = *(long **)(this + 0x158);
  *(ulong *)(this + 0x150) = CONCAT44(fStack_9c,local_a0);
  *(long *)(this + 0x158) = lVar8;
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0049ecf8 with catch @ 0049eea0 */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  plVar12 = (long *)CONCAT44(fStack_94,fStack_98);
                    /* catch() { ... } // from try @ 0049ece0 with catch @ 0049eed8 */
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0049ecbc with catch @ 0049eedc */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  puVar4 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 0049eca4 with catch @ 0049ef14 */
                    /* catch() { ... } // from try @ 0049ec80 with catch @ 0049ef18 */
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  if (local_88 + -0x18 != (GUIView *)puVar4) {
    pGVar9 = local_88 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *(int *)pGVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar2) {
          *(int *)pGVar9 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(local_88 + -0x18);
    }
  }
  *(ProfilePanelView **)(*(long *)(this + 0x150) + 0x118) = this + 0x110;
  pGVar5 = (GUITextField *)GUITextField::New();
  boost::shared_ptr<Caver::GUITextField>::shared_ptr<Caver::GUITextField>
            ((shared_ptr<Caver::GUITextField> *)&local_88,pGVar5);
  pGVar9 = local_88;
                    /* catch() { ... } // from try @ 0049ec68 with catch @ 0049ef50 */
                    /* catch() { ... } // from try @ 0049ec40 with catch @ 0049ef54 */
  pcVar13 = *(code **)(*(long *)local_88 + 0x140);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  (*pcVar13)(pGVar9,&local_a0);
  plVar12 = (long *)CONCAT44(fStack_94,fStack_98);
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0049ec2c with catch @ 0049ef8c */
                    /* catch() { ... } // from try @ 0049ebfc with catch @ 0049ef90 */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  local_8c = 0xffffffff;
  (**(code **)(*(long *)local_88 + 0x150))(local_88,&local_8c);
  pGVar9 = local_88;
  pcVar13 = *(code **)(*(long *)local_88 + 0x170);
  FUN_00666bb8(&local_a0,"Player name...",auStack_60);
                    /* catch() { ... } // from try @ 0049ebe8 with catch @ 0049effc */
  (*pcVar13)(pGVar9,&local_a0);
  puVar6 = (undefined *)(CONCAT44(fStack_9c,local_a0) + -0x18);
  if (puVar6 != puVar4) {
    piVar10 = (int *)(CONCAT44(fStack_9c,local_a0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(puVar6);
    }
  }
  pGVar9 = local_88;
  pcVar13 = *(code **)(*(long *)local_88 + 0x160);
                    /* try { // try from 0049f028 to 0059f0df has its CatchHandler @ 0049f0e8 */
  FUN_0066a528(&local_a0,*(long *)(this + 0x168) + 0x20);
  (*pcVar13)(pGVar9,&local_a0);
  puVar6 = (undefined *)(CONCAT44(fStack_9c,local_a0) + -0x18);
  if (puVar6 != puVar4) {
    piVar10 = (int *)(CONCAT44(fStack_9c,local_a0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete(puVar6);
    }
  }
  fStack_94 = (float)_UNK_006913e8;
  uStack_90 = (undefined4)((ulong)_UNK_006913e8 >> 0x20);
  fStack_9c = (float)_DAT_006913e0;
  fStack_98 = (float)((ulong)_DAT_006913e0 >> 0x20);
  local_a0 = -NAN;
  (**(code **)(*(long *)local_88 + 0x1a0))(local_88,&local_a0);
  pGVar9 = local_88;
  (**(code **)(*(long *)local_88 + 0x198))(auStack_b8,local_88);
  (**(code **)(*(long *)local_88 + 0x1b0))(auStack_c0);
  fStack_9c = 0.0 - local_ac;
  local_a0 = 0.0 - local_b4;
  fStack_94 = local_bc + local_ac + fStack_a8;
  fStack_98 = local_b4 + DAT_00689fe0 + local_b0;
                    /* try { // try from 0049f0e0 to 0059f0eb has its CatchHandler @ 0049eb20 */
  GUIView::SetFrame(pGVar9,(Rectangle *)&local_a0);
                    /* catch() { ... } // from try @ 0049f028 with catch @ 0049f0e8 */
  this_01 = (GUIFrameView *)GUITextField::frameView((GUITextField *)local_88);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"ui_frame",auStack_68);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_70,0));
  GUIFrameView::SetFrameTexture(this_01,(intrusive_ptr *)&local_a0,false);
  plVar12 = (long *)CONCAT44(fStack_9c,local_a0);
  if ((plVar12 != (long *)0x0) &&
     (iVar11 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar11, iVar11 == 0)) {
    (**(code **)(*plVar12 + 8))();
  }
  if ((undefined *)(local_70 + -0x18) != puVar4) {
    piVar10 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  GUIAlertView::AddTextField(*(GUIAlertView **)(this + 0x150),(shared_ptr *)&local_88);
  (**(code **)(*(long *)local_88 + 0x1d0))(local_88,1);
  *(ProfilePanelView **)(local_88 + 0x138) = this + 0x118;
  GUIAlertView::PresentFromView(*(GUIAlertView **)(this + 0x150),(GUIView *)this);
  if ((local_80 != (long *)0x0) && (lVar8 = local_80[1], local_80[1] = lVar8 + -1, lVar8 + -1 == 0))
  {
    (**(code **)(*local_80 + 0x10))(local_80);
    lVar8 = local_80[2];
    local_80[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*local_80 + 0x18))(local_80);
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar10 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if ((undefined *)(local_58 + -0x18) != puVar4) {
    piVar10 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = iVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



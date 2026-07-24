/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046cbdc
 * Function: Caver::MainMenuViewController::ShowNeutralAgeScreenDialog
 * Signature: undefined __thiscall ShowNeutralAgeScreenDialog(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MainMenuViewController::ShowNeutralAgeScreenDialog() */

void __thiscall
Caver::MainMenuViewController::ShowNeutralAgeScreenDialog(MainMenuViewController *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  GUIFrameView *this_00;
  string *psVar7;
  long *plVar8;
  ChooseAgeView *this_01;
  GUIView *pGVar9;
  int in_w5;
  long lVar10;
  int *piVar11;
  int iVar12;
  GUIButton *pGVar13;
  GUIAlertView *this_02;
  GUIView *local_98;
  long *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  GUIFrameView *local_78;
  long *local_70;
  GUIView *local_60;
  long *local_58;
  long local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00666bb8(&local_50,"OK",&local_60);
  FUN_00666bb8(&local_60,"PLEASE ENTER YOUR AGE",auStack_80);
  FUN_00666bb8(&local_98,&DAT_0068fbeb,auStack_88);
  GameInterfaceBuilder::AlertView
            ((GameInterfaceBuilder *)&local_60,(string *)&local_98,(string *)0x1,
             (int)&stack0xfffffffffffffff0 + -0x40,(string *)0xffffffff,in_w5);
  puVar6 = PTR_DAT_007e5de8;
  if (local_98 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
    pGVar9 = local_98 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
  if (local_60 + -0x18 != (GUIView *)puVar6) {
    pGVar9 = local_60 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_60 + -0x18);
    }
  }
  this_00 = local_78;
  *(MainMenuViewController **)(local_78 + 0x118) = this + 0x48;
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_98,"ui_frame_dark_blue",auStack_80);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_98,0));
  GUIFrameView::SetFrameTexture(this_00,(intrusive_ptr *)&local_60,false);
  if ((local_60 != (GUIView *)0x0) &&
     (iVar12 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar12 + -1, iVar12 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  if (local_98 + -0x18 != (GUIView *)puVar6) {
    pGVar9 = local_98 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
  pGVar13 = (GUIButton *)**(undefined8 **)(local_78 + 0x158);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_98,"ui_guide_buy",auStack_80);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_98,0));
  GUIButton::SetFrameTextureForState(pGVar13,0,&local_60);
  if ((local_60 != (GUIView *)0x0) &&
     (iVar12 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar12 + -1, iVar12 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  if (local_98 + -0x18 != (GUIView *)puVar6) {
    pGVar9 = local_98 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
  pGVar13 = (GUIButton *)**(undefined8 **)(local_78 + 0x158);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_98,"ui_guide_buy_pressed",auStack_80);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_98,0));
  GUIButton::SetFrameTextureForState(pGVar13,1,&local_60);
  if ((local_60 != (GUIView *)0x0) &&
     (iVar12 = *(int *)(local_60 + 8), *(int *)(local_60 + 8) = iVar12 + -1, iVar12 + -1 == 0)) {
    (**(code **)(*(long *)local_60 + 8))();
  }
  if (local_98 + -0x18 != (GUIView *)puVar6) {
    pGVar9 = local_98 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *(int *)pGVar9;
      *(int *)pGVar9 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *(int *)pGVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pGVar9,0x10);
        if (bVar4) {
          *(int *)pGVar9 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete(local_98 + -0x18);
    }
  }
  plVar8 = (long *)**(long **)(local_78 + 0x158);
  uVar1 = *(uint *)(plVar8 + 0x24);
  uVar2 = uVar1 | 2;
  *(uint *)(plVar8 + 0x24) = uVar2;
  if (uVar2 != uVar1) {
    (**(code **)(*plVar8 + 0x130))();
  }
  this_01 = operator_new(0x158);
  ChooseAgeView::ChooseAgeView(this_01);
  boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>
            ((shared_ptr<Caver::ChooseAgeView> *)&local_98,this_01);
  local_60 = *(GUIView **)(local_98 + 0x74);
  local_58 = (long *)_DAT_0068fae0;
  GUIView::SetFrame(local_98,(Rectangle *)&local_60);
  *(MainMenuViewController **)(local_98 + 0xf0) = this + 0x68;
  local_60 = local_98;
  local_58 = local_90;
  if (local_90 != (long *)0x0) {
    local_90[1] = local_90[1] + 1;
  }
  GUIAlertView::AddCustomView((GUIAlertView *)local_78,(shared_ptr *)&local_60);
  plVar8 = local_58;
  if ((local_58 != (long *)0x0) &&
     (lVar10 = local_58[1], local_58[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if (local_70 != (long *)0x0) {
    local_70[1] = local_70[1] + 1;
  }
  plVar8 = *(long **)(this + 0xf0);
  *(GUIFrameView **)(this + 0xe8) = local_78;
  *(long **)(this + 0xf0) = local_70;
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  pGVar9 = *(GUIView **)(this + 0x18);
  this_02 = *(GUIAlertView **)(this + 0xe8);
  if (pGVar9 == (GUIView *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
    pGVar9 = *(GUIView **)(this + 0x18);
  }
  plVar8 = *(long **)(this + 0x20);
  if (plVar8 != (long *)0x0) {
    plVar8[1] = plVar8[1] + 1;
  }
  GUIAlertView::PresentFromView(this_02,pGVar9);
  if ((plVar8 != (long *)0x0) && (lVar10 = plVar8[1], plVar8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar10 = plVar8[2];
    plVar8[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  if ((local_90 != (long *)0x0) &&
     (lVar10 = local_90[1], local_90[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_90 + 0x10))(local_90);
    lVar10 = local_90[2];
    local_90[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_90 + 0x18))(local_90);
    }
  }
  if ((local_70 != (long *)0x0) &&
     (lVar10 = local_70[1], local_70[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_70 + 0x10))(local_70);
    lVar10 = local_70[2];
    local_70[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_70 + 0x18))(local_70);
    }
  }
  if ((undefined *)(local_50 + -0x18) != puVar6) {
    piVar11 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar12 = *piVar11;
      *piVar11 = iVar12 + -1;
    }
    else {
      do {
        iVar12 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar12 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



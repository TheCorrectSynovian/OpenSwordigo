/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046d660
 * Function: Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog
 * Signature: undefined __thiscall ShowPrivacyPolicyConsentDialog(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog() */

void __thiscall
Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(MainMenuViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  GUIFrameView *pGVar5;
  undefined4 uVar6;
  int iVar7;
  string *psVar8;
  GUIView *pGVar9;
  int in_w5;
  long lVar10;
  int *piVar11;
  long *plVar12;
  GUIButton *pGVar13;
  GUILabel *pGVar14;
  GUIAlertView *this_00;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 auStack_70 [8];
  GUIFrameView *local_68;
  long *local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00666bb8(&local_50,"Accept",&local_68);
                    /* try { // try from 0046d6a4 to 0056d6ab has its CatchHandler @ 0046d6fc */
                    /* try { // try from 0046d6ac to 0056d727 has its CatchHandler @ 0046d634 */
  FUN_00666bb8(&local_90,"INFORMATION",auStack_70);
  FUN_00666bb8(&local_78,&DAT_0068fbeb,auStack_80);
  GameInterfaceBuilder::AlertView
            ((GameInterfaceBuilder *)&local_90,(string *)&local_78,(string *)0x1,(int)&local_50,
             (string *)0xffffffff,in_w5);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046dd20 with catch @ 0046dd30
                        */
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar11;
      *piVar11 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
                    /* try { // try from 0046de84 to 0056df1b has its CatchHandler @ 0046de84
                       catch(type#1 @ 00000000) { ... } // from try @ 0046de84 with catch @ 0046de84
                       catch(type#1 @ 00000000) { ... } // from try @ 0046df28 with catch @ 0046de84
                       catch(type#1 @ 00000000) { ... } // from try @ 0046dfb0 with catch @ 0046de84
                        */
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046d6a4 with catch @ 0046d6fc
                        */
  if (local_90 + -3 != (long *)puVar4) {
    plVar12 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar12;
      *(int *)plVar12 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  if (local_60 != (long *)0x0) {
    local_60[1] = local_60[1] + 1;
  }
  plVar12 = *(long **)(this + 0x100);
  *(GUIFrameView **)(this + 0xf8) = local_68;
  *(long **)(this + 0x100) = local_60;
                    /* try { // try from 0046d728 to 0056d72f has its CatchHandler @ 0046d738 */
                    /* try { // try from 0046d730 to 0056d73b has its CatchHandler @ 0046d634 */
  if ((plVar12 != (long *)0x0) && (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046d728 with catch @ 0046d738
                        */
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = plVar12[2];
    plVar12[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  pGVar5 = local_68;
  *(MainMenuViewController **)(local_68 + 0x118) = this + 0x48;
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_frame_dark_blue",auStack_70);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_78,0));
  GUIFrameView::SetFrameTexture(pGVar5,(intrusive_ptr *)&local_90,false);
  if ((local_90 != (long *)0x0) &&
     (iVar7 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((undefined *)(local_78 + -0x18) != puVar4) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar11;
      *piVar11 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  pGVar13 = (GUIButton *)**(undefined8 **)(local_68 + 0x158);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_guide_buy",auStack_70);
  TextureLibrary::TextureForName(psVar8,SUB81(&local_78,0));
  GUIButton::SetFrameTextureForState(pGVar13,0,&local_90);
  if ((local_90 != (long *)0x0) &&
     (iVar7 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((undefined *)(local_78 + -0x18) != puVar4) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar11;
      *piVar11 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  pGVar13 = (GUIButton *)**(undefined8 **)(local_68 + 0x158);
  psVar8 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_78,"ui_guide_buy_pressed",auStack_70);
                    /* try { // try from 0046d894 to 0056d8f3 has its CatchHandler @ 0046d894
                       catch() { ... } // from try @ 0046d894 with catch @ 0046d894
                       catch() { ... } // from try @ 0046d918 with catch @ 0046d894 */
  TextureLibrary::TextureForName(psVar8,SUB81(&local_78,0));
  GUIButton::SetFrameTextureForState(pGVar13,1,&local_90);
  if ((local_90 != (long *)0x0) &&
     (iVar7 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((undefined *)(local_78 + -0x18) != puVar4) {
    piVar11 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar11;
      *piVar11 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  pGVar14 = *(GUILabel **)(local_68 + 0x130);
                    /* try { // try from 0046d8f4 to 0056d907 has its CatchHandler @ 0046d9a0 */
  Font::SmallDefaultFont();
  if (local_90 != *(long **)(pGVar14 + 0xf0)) {
                    /* try { // try from 0046d90c to 0056d917 has its CatchHandler @ 0046d9a4 */
    if (local_88 != (long *)0x0) {
                    /* try { // try from 0046d918 to 0056da13 has its CatchHandler @ 0046d894 */
      local_88[1] = local_88[1] + 1;
    }
    plVar12 = *(long **)(pGVar14 + 0xf8);
    *(long **)(pGVar14 + 0xf0) = local_90;
    *(long **)(pGVar14 + 0xf8) = local_88;
    if ((plVar12 != (long *)0x0) &&
       (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar10 = plVar12[2];
      plVar12[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    GUILabel::UpdateText(pGVar14);
  }
  if ((local_88 != (long *)0x0) &&
     (lVar10 = local_88[1], local_88[1] = lVar10 + -1, lVar10 + -1 == 0)) {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar10 = local_88[2];
                    /* catch() { ... } // from try @ 0046d8f4 with catch @ 0046d9a0 */
    local_88[2] = lVar10 + -1;
                    /* catch() { ... } // from try @ 0046d90c with catch @ 0046d9a4 */
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_88 + 0x18))(local_88);
    }
  }
  pGVar14 = *(GUILabel **)(local_68 + 0x130);
  if ((((pGVar14[0x108] != (GUILabel)0xc8) || (pGVar14[0x109] != (GUILabel)0xc8)) ||
      (pGVar14[0x10a] != (GUILabel)0xc8)) || (pGVar14[0x10b] != (GUILabel)0xff)) {
    plVar12 = *(long **)(pGVar14 + 0x118);
    *(undefined4 *)(pGVar14 + 0x108) = 0xffc8c8c8;
    *(undefined8 *)(pGVar14 + 0x110) = 0;
    *(undefined8 *)(pGVar14 + 0x118) = 0;
                    /* try { // try from 0046da14 to 0056da73 has its CatchHandler @ 0046da14
                       catch() { ... } // from try @ 0046da14 with catch @ 0046da14
                       catch() { ... } // from try @ 0046daac with catch @ 0046da14 */
    if ((plVar12 != (long *)0x0) &&
       (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar10 = plVar12[2];
      plVar12[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    GUILabel::UpdateText(pGVar14);
  }
  plVar12 = (long *)OnlineController::SharedController();
  (**(code **)(*plVar12 + 0x90))(&local_90);
  FUN_0066a6a8(this + 0x120,&local_90);
                    /* try { // try from 0046da74 to 0056daab has its CatchHandler @ 0046db54 */
  if (local_90 + -3 != (long *)puVar4) {
    plVar12 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar12;
                    /* try { // try from 0046df1c to 0056df27 has its CatchHandler @ 0046df88 */
      *(int *)plVar12 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 0046df28 to 0056dfa7 has its CatchHandler @ 0046de84 */
    if (iVar7 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  pGVar5 = local_68;
  FUN_00666bb8(&local_90,"Open Privacy Policy",auStack_58);
  uVar6 = GUIAlertView::AddLink((GUIAlertView *)pGVar5,(string *)&local_90);
  *(undefined4 *)(this + 0x110) = uVar6;
                    /* try { // try from 0046daac to 0056dbc3 has its CatchHandler @ 0046da14 */
  if (local_90 + -3 != (long *)puVar4) {
    plVar12 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar12;
      *(int *)plVar12 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  local_90 = (long *)(puVar4 + 0x18);
  plVar12 = (long *)OnlineController::SharedController();
  iVar7 = (**(code **)(*plVar12 + 0xa0))();
  if (iVar7 == 2) {
    FUN_006677d4(&local_90,
                 "Personal data collection is optional and you can change your options at any time."
                 ,0x51);
    FUN_006677d4(&local_90,&DAT_0068fbe9,2);
    pGVar5 = local_68;
    FUN_00666bb8(&local_78,&DAT_0068fcaa,auStack_70);
    uVar6 = GUIAlertView::AddLink((GUIAlertView *)pGVar5,(string *)&local_78);
    *(undefined4 *)(this + 0x10c) = uVar6;
    if ((undefined *)(local_78 + -0x18) != puVar4) {
                    /* try { // try from 0046dfa8 to 0056dfaf has its CatchHandler @ 0046dfb8 */
      piVar11 = (int *)(local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar11;
        *piVar11 = iVar7 + -1;
      }
      else {
        do {
                    /* try { // try from 0046dfb0 to 0056dfbb has its CatchHandler @ 0046de84 */
          iVar7 = *piVar11;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046dfa8 with catch @ 0046dfb8
                        */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar2) {
            *piVar11 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
                    /* catch() { ... } // from try @ 0046e17c with catch @ 0046dfbc
                       catch() { ... } // from try @ 0046e330 with catch @ 0046dfbc */
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_78 + -0x18));
      }
    }
  }
  else if (iVar7 == 1) {
    FUN_006677d4(&local_90,
                 "Swordigo may collect data such as the advertising ID of your device for the purpose of game analytics and showing in-game ads."
                 ,0x7e);
    FUN_006677d4(&local_90,&DAT_0068fbe9,2);
    FUN_006677d4(&local_90,
                 "For details about data collection and how your data is used, please review our privacy policy."
                 ,0x5e);
    pGVar5 = local_68;
    if (*(long *)(*(long *)(this + 0x120) + -0x18) != 0) {
      FUN_00666bb8(&local_78,"Show Data ID",auStack_70);
      uVar6 = GUIAlertView::AddLink((GUIAlertView *)pGVar5,(string *)&local_78);
      *(undefined4 *)(this + 0x108) = uVar6;
                    /* catch() { ... } // from try @ 0046da74 with catch @ 0046db54 */
      if ((undefined *)(local_78 + -0x18) != puVar4) {
        piVar11 = (int *)(local_78 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar7 = *piVar11;
          *piVar11 = iVar7 + -1;
        }
        else {
          do {
            iVar7 = *piVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar2) {
              *piVar11 = iVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (iVar7 < 1) {
          operator_delete((undefined *)(local_78 + -0x18));
        }
      }
    }
    goto LAB_0046dbfc;
  }
  FUN_006677d4(&local_90,
               "For details about data collection and how your data is used, please review our privacy policy."
               ,0x5e);
LAB_0046dbfc:
  GUIAlertView::SetMessage(*(GUIAlertView **)(this + 0xf8),(string *)&local_90);
  if (this[0x119] == (MainMenuViewController)0x0) {
    *(GUIAlertView *)(local_68 + 0x1a4) = (GUIAlertView)0x1;
  }
  pGVar9 = *(GUIView **)(this + 0x18);
  this_00 = *(GUIAlertView **)(this + 0xf8);
                    /* try { // try from 0046dc24 to 0056dcc3 has its CatchHandler @ 0046dc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0046dc24 with catch @ 0046dc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0046dcc8 with catch @ 0046dc24
                       catch(type#1 @ 00000000) { ... } // from try @ 0046dd28 with catch @ 0046dc24
                        */
  if (pGVar9 == (GUIView *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
    pGVar9 = *(GUIView **)(this + 0x18);
  }
  plVar12 = *(long **)(this + 0x20);
  if (plVar12 != (long *)0x0) {
    plVar12[1] = plVar12[1] + 1;
  }
  GUIAlertView::PresentFromView(this_00,pGVar9);
  if ((plVar12 != (long *)0x0) && (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = plVar12[2];
    plVar12[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (local_90 + -3 != (long *)puVar4) {
    plVar12 = local_90 + -1;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = (int)*plVar12;
      *(int *)plVar12 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = (int)*plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_90 + -3);
    }
  }
  if ((local_60 != (long *)0x0) &&
     (lVar10 = local_60[1], local_60[1] = lVar10 + -1, lVar10 + -1 == 0)) {
                    /* try { // try from 0046dcc4 to 0056dcc7 has its CatchHandler @ 0046dd00 */
                    /* try { // try from 0046dcc8 to 0056dd1f has its CatchHandler @ 0046dc24 */
    (**(code **)(*local_60 + 0x10))(local_60);
    lVar10 = local_60[2];
    local_60[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*local_60 + 0x18))(local_60);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046dcc4 with catch @ 0046dd00
                        */
  if ((undefined *)(local_50 + -0x18) != puVar4) {
    piVar11 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar11;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0046df1c with catch @ 0046df88
                        */
      *piVar11 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_50 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0046dd20 to 0056dd27 has its CatchHandler @ 0046dd30 */
                    /* try { // try from 0046dd28 to 0056dd33 has its CatchHandler @ 0046dc24 */
  return;
}



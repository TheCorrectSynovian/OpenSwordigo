/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004408e0
 * Function: Caver::GameInterfaceBuilder::AlertView
 * Signature: undefined __thiscall AlertView(GameInterfaceBuilder * this, string * param_1, string * param_2, int param_3, string * param_4, int param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::AlertView(std::string const&, std::string const&, int, std::string
   const*, int) */

void __thiscall
Caver::GameInterfaceBuilder::AlertView
          (GameInterfaceBuilder *this,string *param_1,string *param_2,int param_3,string *param_4,
          int param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GUIAlertView *this_00;
  string *psVar4;
  string *psVar5;
  shared_ptr<Caver::GUIAlertView> *in_x8;
  long lVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  GUIFrameView *this_01;
  GUILabel *pGVar10;
  long *plVar11;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long local_78 [2];
  long local_68;
  
  psVar5 = (string *)(ulong)(uint)param_3;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004407f4 with catch @ 0044090c */
  this_00 = operator_new(0x1b8);
  GUIAlertView::GUIAlertView(this_00);
  boost::shared_ptr<Caver::GUIAlertView>::shared_ptr<Caver::GUIAlertView>(in_x8,this_00);
  this_01 = *(GUIFrameView **)in_x8;
  psVar4 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(local_78,"ui_frame",auStack_80);
  TextureLibrary::TextureForName(psVar4,SUB81(local_78,0));
  GUIFrameView::SetFrameTexture(this_01,(intrusive_ptr *)&local_90,false);
  if ((local_90 != (long *)0x0) &&
     (iVar8 = (int)local_90[1] + -1, *(int *)(local_90 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_90 + 8))();
  }
  if ((undefined *)(local_78[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_78[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)(local_78[0] + -0x18));
    }
  }
  pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x120);
  Font::DefaultFont();
  if (local_90 != *(long **)(pGVar10 + 0xf0)) {
    if (local_88 != (long *)0x0) {
      local_88[1] = local_88[1] + 1;
    }
    plVar11 = *(long **)(pGVar10 + 0xf8);
    *(long **)(pGVar10 + 0xf0) = local_90;
    *(long **)(pGVar10 + 0xf8) = local_88;
    if ((plVar11 != (long *)0x0) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar6 = plVar11[2];
      plVar11[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar11 = local_88;
  if ((local_88 != (long *)0x0) && (lVar6 = local_88[1], local_88[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar6 = plVar11[2];
    plVar11[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x120);
  if ((((pGVar10[0x108] != (GUILabel)0xff) || (pGVar10[0x109] != (GUILabel)0xff)) ||
      (pGVar10[0x10a] != (GUILabel)0xff)) || (pGVar10[0x10b] != (GUILabel)0xff)) {
    plVar11 = *(long **)(pGVar10 + 0x118);
    *(undefined4 *)(pGVar10 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
    if ((plVar11 != (long *)0x0) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar6 = plVar11[2];
      plVar11[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar10);
    pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x120);
  }
  pGVar10[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar10 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar10 + 0x148) = DAT_007e98f0;
  GUILabel::UpdateText(pGVar10);
  pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x130);
  Font::DefaultFont();
  if (local_90 != *(long **)(pGVar10 + 0xf0)) {
    if (local_88 != (long *)0x0) {
      local_88[1] = local_88[1] + 1;
    }
    plVar11 = *(long **)(pGVar10 + 0xf8);
    *(long **)(pGVar10 + 0xf0) = local_90;
    *(long **)(pGVar10 + 0xf8) = local_88;
    if ((plVar11 != (long *)0x0) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar6 = plVar11[2];
      plVar11[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar10);
  }
  plVar11 = local_88;
  if ((local_88 != (long *)0x0) && (lVar6 = local_88[1], local_88[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_88 + 0x10))(local_88);
    lVar6 = plVar11[2];
    plVar11[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x130);
  if ((((pGVar10[0x108] != (GUILabel)0xff) || (pGVar10[0x109] != (GUILabel)0xff)) ||
      (pGVar10[0x10a] != (GUILabel)0xff)) || (pGVar10[0x10b] != (GUILabel)0xff)) {
    plVar11 = *(long **)(pGVar10 + 0x118);
    *(undefined4 *)(pGVar10 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar10 + 0x110) = 0;
    *(undefined8 *)(pGVar10 + 0x118) = 0;
    if ((plVar11 != (long *)0x0) && (lVar6 = plVar11[1], plVar11[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar6 = plVar11[2];
      plVar11[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    GUILabel::UpdateText(pGVar10);
    pGVar10 = *(GUILabel **)(*(long *)in_x8 + 0x130);
  }
  pGVar10[0x140] = (GUILabel)0x1;
  *(undefined4 *)(pGVar10 + 0x141) = 0xff000000;
  *(undefined8 *)(pGVar10 + 0x148) = DAT_007e98f0;
  GUILabel::UpdateText(pGVar10);
  GUIAlertView::SetTitle(*(GUIAlertView **)in_x8,(string *)this);
  GUIAlertView::SetMessage(*(GUIAlertView **)in_x8,param_1);
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      FramedButtonWithTitle(psVar5,((ulong)param_4 & 0xffffffff) == uVar9);
      GUIAlertView::AddButton(*(GUIAlertView **)in_x8,(shared_ptr *)&local_90);
      plVar11 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar6 = local_88[1], local_88[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_88 + 0x10))(local_88);
        lVar6 = plVar11[2];
        plVar11[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
      }
      uVar9 = uVar9 + 1;
      psVar5 = psVar5 + 8;
    } while ((long)uVar9 < (long)(int)param_2);
  }
  *(int *)(*(long *)in_x8 + 0x1a0) = (int)param_4;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



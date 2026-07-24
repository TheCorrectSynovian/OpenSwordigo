/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051f0fc
 * Function: Caver::MapMenuPage::ShowTravelToButtonFromNode
 * Signature: undefined __thiscall ShowTravelToButtonFromNode(MapMenuPage * this, MapViewNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode*) */

void __thiscall
Caver::MapMenuPage::ShowTravelToButtonFromNode(MapMenuPage *this,MapViewNode *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GUIButton *pGVar4;
  GUILabel *pGVar5;
  FontLibrary *this_00;
  GUIView *pGVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  GUIButton *local_80;
  long *local_78;
  GUIView *local_70;
  long *plStack_68;
  GUIView *local_58;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pGVar4 = operator_new(0x1d0);
  GUIButton::GUIButton(pGVar4,1);
  boost::shared_ptr<Caver::GUIButton>::shared_ptr<Caver::GUIButton>
            ((shared_ptr<Caver::GUIButton> *)&local_58,pGVar4);
  plStack_68 = _UNK_00694708;
  local_70 = _DAT_00694700;
  GUIView::SetFrame(local_58,(Rectangle *)&local_70);
  pGVar5 = (GUILabel *)GUIButton::titleLabel((GUIButton *)local_58);
  this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
  FontLibrary::DefaultFont(this_00);
  if (local_70 != *(GUIView **)(pGVar5 + 0xf0)) {
    if (plStack_68 != (long *)0x0) {
      plStack_68[1] = plStack_68[1] + 1;
    }
    plVar10 = *(long **)(pGVar5 + 0xf8);
    *(GUIView **)(pGVar5 + 0xf0) = local_70;
    *(long **)(pGVar5 + 0xf8) = plStack_68;
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar5);
  }
  plVar10 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = plStack_68[1], plStack_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pGVar5 = (GUILabel *)GUIButton::titleLabel((GUIButton *)local_58);
  if ((((pGVar5[0x108] != (GUILabel)0xff) || (pGVar5[0x109] != (GUILabel)0xff)) ||
      (pGVar5[0x10a] != (GUILabel)0xff)) || (pGVar5[0x10b] != (GUILabel)0xff)) {
    plVar10 = *(long **)(pGVar5 + 0x118);
    *(undefined4 *)(pGVar5 + 0x108) = 0xffffffff;
    *(undefined8 *)(pGVar5 + 0x110) = 0;
    *(undefined8 *)(pGVar5 + 0x118) = 0;
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    GUILabel::UpdateText(pGVar5);
  }
  pGVar6 = local_58;
  FUN_00666bb8(&local_70,"Teleport To",&local_90);
  GUIButton::SetTitle((GUIButton *)pGVar6,(string *)&local_70);
  if (local_70 + -0x18 != (GUIView *)PTR_DAT_007e5de8) {
    pGVar6 = local_70 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *(int *)pGVar6;
      *(int *)pGVar6 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *(int *)pGVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pGVar6,0x10);
        if (bVar2) {
          *(int *)pGVar6 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(local_70 + -0x18);
    }
  }
  pGVar6 = operator_new(0xf0);
  GUIView::GUIView(pGVar6);
  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>
            ((shared_ptr<Caver::GUIView> *)&local_70,pGVar6);
  GUIView::SetFrame(local_70,(Rectangle *)(local_58 + 0x74));
                    /* catch() { ... } // from try @ 0051f374 with catch @ 0051f344 */
  pcVar8 = *(code **)(*(long *)local_70 + 0x60);
  local_80 = (GUIButton *)local_58;
  local_78 = local_50;
  if (local_50 != (long *)0x0) {
    local_50[1] = local_50[1] + 1;
  }
                    /* try { // try from 0051f360 to 0061f373 has its CatchHandler @ 0051f398 */
  (*pcVar8)(local_70,&local_80);
  plVar10 = local_78;
                    /* try { // try from 0051f374 to 0061f39b has its CatchHandler @ 0051f344 */
  if ((local_78 != (long *)0x0) && (lVar7 = local_78[1], local_78[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_78 + 0x10))(local_78);
    lVar7 = plVar10[2];
                    /* catch() { ... } // from try @ 0051f360 with catch @ 0051f398 */
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  uVar11 = NEON_fmov(0xc1800000,4);
  local_90 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)param_1 + 8) >> 0x20) +
                      (float)((ulong)uVar11 >> 0x20),
                      (float)*(undefined8 *)(*(long *)param_1 + 8) + (float)uVar11);
  uStack_88 = 0x4200000042000000;
                    /* catch() { ... } // from try @ 0051f420 with catch @ 0051f3d4 */
  GUIView::ConvertRectFromView((Rectangle *)this,(GUIView *)&local_90);
  GUIView::PresentPopoverViewFromRectangle
            ((GUIView *)this,(shared_ptr *)&local_70,(Rectangle *)&local_80,4);
  plVar10 = plStack_68;
                    /* try { // try from 0051f404 to 0061f407 has its CatchHandler @ 0051f414 */
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = plStack_68[1], plStack_68[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0051f404 with catch @ 0051f414 */
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    /* try { // try from 0051f418 to 0061f41f has its CatchHandler @ 0051f428 */
    lVar7 = plVar10[2];
                    /* try { // try from 0051f420 to 0061f42b has its CatchHandler @ 0051f3d4 */
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 0051f418 with catch @ 0051f428 */
                    /* try { // try from 0051f42c to 0061f473 has its CatchHandler @ 0051f42c
                       catch(type#1 @ 00000000) { ... } // from try @ 0051f42c with catch @ 0051f42c
                       catch(type#1 @ 00000000) { ... } // from try @ 0051f490 with catch @ 0051f42c
                       catch(type#1 @ 00000000) { ... } // from try @ 0051f538 with catch @ 0051f42c
                        */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar7 = local_50[1], local_50[1] = lVar7 + -1, lVar7 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar7 = local_50[2];
    local_50[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 0051f474 to 0061f48f has its CatchHandler @ 0051f52c */
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0051f490 to 0061f52f has its CatchHandler @ 0051f42c */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00441fac
 * Function: Caver::GameInterfaceBuilder::InfoBubble
 * Signature: undefined __thiscall InfoBubble(GameInterfaceBuilder * this, string * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameInterfaceBuilder::InfoBubble(std::string const&, float) */

void __thiscall
Caver::GameInterfaceBuilder::InfoBubble(GameInterfaceBuilder *this,string *param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  GUIBubbleView *this_00;
  string *psVar6;
  shared_ptr<Caver::GUIBubbleView> *in_x8;
  int *piVar7;
  int iVar8;
  GUITextBubble *pGVar9;
  undefined4 local_78 [2];
  undefined1 auStack_70 [8];
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
                    /* try { // try from 00441fc0 to 00542127 has its CatchHandler @ 00441eb0 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_00 = operator_new(0x118);
  GUIBubbleView::GUIBubbleView(this_00);
  boost::shared_ptr<Caver::GUIBubbleView>::shared_ptr<Caver::GUIBubbleView>(in_x8,this_00);
  pGVar9 = *(GUITextBubble **)(*(long *)in_x8 + 0xf0);
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_68,"ui_frame",auStack_70);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_68,0));
  local_78[0] = 0xffffffff;
  GUITextBubble::SetFrameTexture(pGVar9,(intrusive_ptr *)&local_60,(Color *)local_78);
  plVar4 = (long *)CONCAT44(uStack_5c,local_60);
  if ((plVar4 != (long *)0x0) &&
     (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 00441fa4 with catch @ 00442080 */
  if ((undefined *)(local_68 + -0x18) != PTR_DAT_007e5de8) {
    piVar7 = (int *)(local_68 + -8);
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
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  pGVar9 = *(GUITextBubble **)(*(long *)in_x8 + 0xf0);
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_68,"textbubble_peg",auStack_70);
                    /* catch() { ... } // from try @ 00441f08 with catch @ 004420b8 */
  TextureLibrary::TextureForName(psVar6,SUB81(&local_68,0));
  local_78[0] = 0xffffffff;
  GUITextBubble::SetPegTexture(pGVar9,(intrusive_ptr *)&local_60,(Color *)local_78);
  plVar4 = (long *)CONCAT44(uStack_5c,local_60);
  if ((plVar4 != (long *)0x0) &&
     (iVar8 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if ((undefined *)(local_68 + -0x18) != puVar5) {
    piVar7 = (int *)(local_68 + -8);
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
      operator_delete((undefined *)(local_68 + -0x18));
    }
  }
  local_60 = 0xff8cdcff;
  GUITextBubble::SetText
            (*(GUITextBubble **)(*(long *)in_x8 + 0xf0),(string *)this,(Color *)&local_60,param_2);
  pGVar9 = *(GUITextBubble **)(*(long *)in_x8 + 0xf0);
  *(undefined4 *)(pGVar9 + 0x8c) = 0x3cf5c28f;
  GUITextBubble::SetShowsIndicatorWhenFinished(pGVar9,true);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



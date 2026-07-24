/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033cea0
 * Function: Caver::TextBubbleComponent::ShowText
 * Signature: undefined __thiscall ShowText(TextBubbleComponent * this, string * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::ShowText(std::string const&, float) */

void __thiscall
Caver::TextBubbleComponent::ShowText(TextBubbleComponent *this,string *param_1,float param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  GUITextBubble *pGVar6;
  string *psVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  undefined4 local_80 [2];
  undefined1 auStack_78 [8];
  long local_70;
  GUITextBubble *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pGVar6 = operator_new(0x98);
  GUITextBubble::GUITextBubble(pGVar6);
  local_68 = pGVar6;
  boost::detail::shared_count::shared_count<Caver::GUITextBubble>((shared_count *)&local_60,pGVar6);
  boost::detail::sp_enable_shared_from_this(&local_68,pGVar6,pGVar6);
  pGVar6 = *(GUITextBubble **)(this + 0x78);
  plVar1 = *(long **)(this + 0x80);
  *(GUITextBubble **)(this + 0x78) = local_68;
  *(long **)(this + 0x80) = local_60;
  local_68 = pGVar6;
  local_60 = plVar1;
  if ((plVar1 != (long *)0x0) && (lVar8 = plVar1[1], plVar1[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar8 = plVar1[2];
    plVar1[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  pGVar6 = *(GUITextBubble **)(this + 0x78);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"textbubble_border",auStack_78);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_70,0));
  local_80[0] = 0xcccccccc;
  GUITextBubble::SetFrameTexture(pGVar6,(intrusive_ptr *)&local_68,(Color *)local_80);
  if ((local_68 != (GUITextBubble *)0x0) &&
     (iVar10 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_68 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
  if ((undefined *)(local_70 + -0x18) != PTR_DAT_007e5de8) {
    piVar9 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  pGVar6 = *(GUITextBubble **)(this + 0x78);
  psVar7 = (string *)TextureLibrary::sharedLibrary();
  FUN_00666bb8(&local_70,"textbubble_peg",auStack_78);
  TextureLibrary::TextureForName(psVar7,SUB81(&local_70,0));
  local_80[0] = 0xffffffff;
  GUITextBubble::SetPegTexture(pGVar6,(intrusive_ptr *)&local_68,(Color *)local_80);
  if ((local_68 != (GUITextBubble *)0x0) &&
     (iVar10 = *(int *)(local_68 + 8), *(int *)(local_68 + 8) = iVar10 + -1, iVar10 + -1 == 0)) {
    (**(code **)(*(long *)local_68 + 8))();
  }
  if ((undefined *)(local_70 + -0x18) != puVar5) {
    piVar9 = (int *)(local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete((undefined *)(local_70 + -0x18));
    }
  }
  local_68 = (GUITextBubble *)CONCAT44(local_68._4_4_,0xff78d2ff);
  GUITextBubble::SetText(*(GUITextBubble **)(this + 0x78),param_1,(Color *)&local_68,param_2);
  *(undefined2 *)(this + 0x75) = 1;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00494244
 * Function: Caver::MainMenuView::SetOnlineMenuVisible
 * Signature: undefined __thiscall SetOnlineMenuVisible(MainMenuView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::SetOnlineMenuVisible(bool) */

void __thiscall Caver::MainMenuView::SetOnlineMenuVisible(MainMenuView *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  GUIAnimation *pGVar4;
  GUIView *pGVar5;
  shared_ptr asStack_48 [8];
  long *local_40;
  long local_38;
  
                    /* try { // try from 0049424c to 0059427b has its CatchHandler @ 0049424c
                       catch() { ... } // from try @ 0049424c with catch @ 0049424c
                       catch() { ... } // from try @ 004943c4 with catch @ 0049424c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x1a8);
                    /* try { // try from 0049427c to 0059428f has its CatchHandler @ 0049468c */
  if ((*(char *)(lVar3 + 0xe4) == '\0') != param_1) {
    if (param_1) {
      *(undefined1 *)(*(long *)(this + 0x108) + 0xe4) = 1;
      *(undefined1 *)(lVar3 + 0xe4) = 0;
      pGVar4 = (GUIAnimation *)OnlineMenuView::AnimateIn();
      pGVar5 = *(GUIView **)(this + 0x208);
                    /* try { // try from 004942a0 to 005942ab has its CatchHandler @ 00494620 */
      pGVar5[0xe4] = (GUIView)0x0;
      *(undefined1 *)(*(long *)(this + 0x218) + 0xe4) = 0;
      GUIAnimation::AlphaAnimation(pGVar4,0.0,1.0,0.5);
      GUIView::RemoveAllAnimations(pGVar5);
      pGVar4 = (GUIAnimation *)GUIView::AddAnimation(pGVar5,asStack_48);
      plVar2 = local_40;
                    /* try { // try from 004942d4 to 0059430f has its CatchHandler @ 004945bc */
      if ((local_40 != (long *)0x0) &&
         (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        pGVar4 = (GUIAnimation *)(**(code **)(*local_40 + 0x10))(local_40);
        lVar3 = plVar2[2];
        plVar2[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          pGVar4 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      pGVar5 = *(GUIView **)(this + 0x218);
      GUIAnimation::AlphaAnimation(pGVar4,0.0,1.0,0.5);
      GUIView::RemoveAllAnimations(pGVar5);
                    /* try { // try from 00494338 to 0059434b has its CatchHandler @ 004945b8 */
      GUIView::AddAnimation(pGVar5,asStack_48);
      if ((local_40 != (long *)0x0) &&
         (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 0049435c to 00594367 has its CatchHandler @ 00494580 */
        (**(code **)(*local_40 + 0x10))(local_40);
        lVar3 = local_40[2];
        local_40[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* try { // try from 00494388 to 005943c3 has its CatchHandler @ 00494524 */
          (**(code **)(*local_40 + 0x18))(local_40);
        }
      }
      if (*(long *)(this + 0x238) != 0) {
        *(undefined1 *)(*(long *)(this + 0x238) + 0xe4) = 1;
        *(undefined1 *)(*(long *)(this + 0x228) + 0xe4) = 1;
      }
    }
    else {
      *(undefined1 *)(lVar3 + 0xe4) = 1;
      *(undefined1 *)(*(long *)(this + 0x108) + 0xe4) = 0;
      pGVar4 = (GUIAnimation *)AnimateButtonsIn(0.0);
                    /* try { // try from 004943c4 to 0059468f has its CatchHandler @ 0049424c */
      *(undefined1 *)(*(long *)(this + 0x208) + 0xe4) = 1;
      *(undefined1 *)(*(long *)(this + 0x218) + 0xe4) = 1;
      pGVar5 = *(GUIView **)(this + 0x238);
      if (pGVar5 != (GUIView *)0x0) {
        pGVar5[0xe4] = (GUIView)0x0;
        *(undefined1 *)(*(long *)(this + 0x228) + 0xe4) = 0;
        GUIAnimation::AlphaAnimation(pGVar4,0.0,1.0,0.5);
        GUIView::RemoveAllAnimations(pGVar5);
        pGVar4 = (GUIAnimation *)GUIView::AddAnimation(pGVar5,asStack_48);
        plVar2 = local_40;
        if ((local_40 != (long *)0x0) &&
           (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
          pGVar4 = (GUIAnimation *)(**(code **)(*local_40 + 0x10))(local_40);
          lVar3 = plVar2[2];
          plVar2[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            pGVar4 = (GUIAnimation *)(**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
        pGVar5 = *(GUIView **)(this + 0x228);
        GUIAnimation::AlphaAnimation(pGVar4,0.0,1.0,0.5);
        GUIView::RemoveAllAnimations(pGVar5);
        GUIView::AddAnimation(pGVar5,asStack_48);
        if ((local_40 != (long *)0x0) &&
           (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
          (**(code **)(*local_40 + 0x10))(local_40);
          lVar3 = local_40[2];
          local_40[2] = lVar3 + -1;
          if (lVar3 + -1 == 0) {
            (**(code **)(*local_40 + 0x18))(local_40);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



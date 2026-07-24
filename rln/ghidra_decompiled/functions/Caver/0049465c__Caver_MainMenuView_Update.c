/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049465c
 * Function: Caver::MainMenuView::Update
 * Signature: undefined __thiscall Update(MainMenuView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::Update(float) */

void __thiscall Caver::MainMenuView::Update(MainMenuView *this,float param_1)

{
  int iVar1;
  long *plVar2;
  BadgeCountView *this_00;
  
  GUIView::Update((GUIView *)this,param_1);
  if (this[0xe9] != (MainMenuView)0x0) {
    CameraController::GotoTargetImmediately((CameraController *)(*(long *)(this + 0xf8) + 0x100));
    this[0xe9] = (MainMenuView)0x0;
  }
  this_00 = *(BadgeCountView **)(this + 0x288);
                    /* catch() { ... } // from try @ 0049427c with catch @ 0049468c */
  plVar2 = (long *)OnlineController::SharedController();
  iVar1 = (**(code **)(*plVar2 + 0xc0))();
  BadgeCountView::SetCount(this_00,iVar1);
  return;
}



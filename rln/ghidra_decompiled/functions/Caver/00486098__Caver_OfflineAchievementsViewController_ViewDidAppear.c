/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00486098
 * Function: Caver::OfflineAchievementsViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(OfflineAchievementsViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::ViewDidAppear() */

void __thiscall
Caver::OfflineAchievementsViewController::ViewDidAppear(OfflineAchievementsViewController *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + 0x58) + 0xf0))();
  *(undefined4 *)(lVar1 + 0x1dc) = 0x3f70a3d7;
  OfflineAchievementsView::AnimateIn();
  return;
}



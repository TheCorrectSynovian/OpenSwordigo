/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045299c
 * Function: Caver::GameViewController::SaveGameState
 * Signature: undefined __thiscall SaveGameState(GameViewController * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::SaveGameState(bool) */

void __thiscall Caver::GameViewController::SaveGameState(GameViewController *this,bool param_1)

{
  long lVar1;
  long lVar2;
  shared_ptr asStack_58 [8];
  long *local_50;
  GameOptions *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xd8) != 0) {
    GameOptions::sharedOptions((GameOptions *)this);
    GameOverlayView::Layout();
    GameOptions::SetControlsLayout(local_48,asStack_58);
    if ((local_50 != (long *)0x0) &&
       (lVar2 = local_50[1], local_50[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar2 = local_50[2];
      local_50[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = local_40[2];
      local_40[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if (*(PlayerProfile **)(this + 0x88) != (PlayerProfile *)0x0) {
    PlayerProfile::Save(*(PlayerProfile **)(this + 0x88),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



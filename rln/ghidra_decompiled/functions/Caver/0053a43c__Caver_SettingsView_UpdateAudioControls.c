/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053a43c
 * Function: Caver::SettingsView::UpdateAudioControls
 * Signature: undefined __thiscall UpdateAudioControls(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::UpdateAudioControls() */

void __thiscall Caver::SettingsView::UpdateAudioControls(SettingsView *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long local_38;
  long *local_30;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  GameOptions::sharedOptions((GameOptions *)this);
  lVar4 = *(long *)(this + 0x198);
  cVar1 = *(char *)(local_38 + 0x20);
  if (cVar1 == '\0') {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(local_38 + 0x24);
  }
  if (*(char *)(lVar4 + 0x16c) != '\0') {
    fVar5 = (float)(int)fVar5;
  }
  fVar6 = *(float *)(lVar4 + 0x138);
  if (fVar5 <= *(float *)(lVar4 + 0x138)) {
    fVar6 = fVar5;
  }
  if (fVar6 <= *(float *)(lVar4 + 0x134)) {
    fVar6 = *(float *)(lVar4 + 0x134);
  }
  *(undefined4 *)(lVar4 + 300) = 0;
  *(float *)(lVar4 + 0x124) = fVar6;
  *(float *)(lVar4 + 0x128) = fVar6;
  *(undefined1 *)(lVar4 + 0x160) = 1;
  lVar4 = *(long *)(this + 0x1a8);
  if (*(char *)(local_38 + 0x21) == '\0') {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(local_38 + 0x28);
  }
  if (*(char *)(lVar4 + 0x16c) != '\0') {
    fVar5 = (float)(int)fVar5;
  }
  fVar6 = *(float *)(lVar4 + 0x138);
  if (fVar5 <= *(float *)(lVar4 + 0x138)) {
    fVar6 = fVar5;
  }
  if (fVar6 <= *(float *)(lVar4 + 0x134)) {
    fVar6 = *(float *)(lVar4 + 0x134);
  }
  *(undefined4 *)(lVar4 + 300) = 0;
  *(float *)(lVar4 + 0x124) = fVar6;
  *(float *)(lVar4 + 0x128) = fVar6;
  *(undefined1 *)(lVar4 + 0x160) = 1;
  if (cVar1 == '\0') {
    GUIButton::SetImage(*(GUIButton **)(this + 0x178),(intrusive_ptr *)(this + 0x1c8));
  }
  else {
    GUIButton::SetImage(*(GUIButton **)(this + 0x178),(intrusive_ptr *)(this + 0x1c0));
  }
  if (*(char *)(local_38 + 0x21) == '\0') {
    GUIButton::SetImage(*(GUIButton **)(this + 0x188),(intrusive_ptr *)(this + 0x1d8));
  }
  else {
    GUIButton::SetImage(*(GUIButton **)(this + 0x188),(intrusive_ptr *)(this + 0x1d0));
  }
  if ((local_30 != (long *)0x0) && (lVar4 = local_30[1], local_30[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar4 = local_30[2];
    local_30[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



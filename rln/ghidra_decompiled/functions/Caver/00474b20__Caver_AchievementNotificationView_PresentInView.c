/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00474b20
 * Function: Caver::AchievementNotificationView::PresentInView
 * Signature: undefined __thiscall PresentInView(AchievementNotificationView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::PresentInView(Caver::GUIView*) */

void __thiscall
Caver::AchievementNotificationView::PresentInView
          (AchievementNotificationView *this,GUIView *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 local_60;
  long *local_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  UpdateLayout(this);
  local_58 = *(long **)(this + 0x7c);
                    /* try { // try from 00474b68 to 00574b87 has its CatchHandler @ 00474b68
                       catch() { ... } // from try @ 00474b68 with catch @ 00474b68
                       catch() { ... } // from try @ 00474b90 with catch @ 00474b68
                       catch() { ... } // from try @ 00474bc0 with catch @ 00474b68 */
                    /* try { // try from 00474b88 to 00574b8f has its CatchHandler @ 00474ba8 */
                    /* try { // try from 00474b90 to 00574bb3 has its CatchHandler @ 00474b68 */
  local_60 = CONCAT44((*(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x90) + -5.0) -
                      *(float *)(this + 0x80),
                      (int)((*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x8c) * 0.5) -
                           *(float *)(this + 0x7c) * 0.5));
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_60);
  plVar3 = *(long **)(this + 0x10);
                    /* catch() { ... } // from try @ 00474b88 with catch @ 00474ba8 */
  if ((plVar3 == (long *)0x0) || (plVar3[1] == 0)) {
    local_50 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_50);
  }
  else {
                    /* try { // try from 00474bb4 to 00574bb7 has its CatchHandler @ 00474bb8 */
                    /* catch() { ... } // from try @ 00474bb4 with catch @ 00474bb8 */
    local_60 = *(undefined8 *)(this + 8);
                    /* try { // try from 00474bbc to 00574bbf has its CatchHandler @ 00474bc8 */
    lVar2 = plVar3[1] + 1;
                    /* try { // try from 00474bc0 to 00574bcb has its CatchHandler @ 00474b68 */
    pcVar4 = *(code **)(*(long *)param_1 + 0x60);
                    /* catch() { ... } // from try @ 00474bbc with catch @ 00474bc8 */
    plVar3[1] = lVar2;
    local_58 = plVar3;
                    /* catch() { ... } // from try @ 00474c1c with catch @ 00474bcc */
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    (*pcVar4)(param_1,&local_60);
    plVar3 = local_58;
                    /* try { // try from 00474c10 to 00574c1b has its CatchHandler @ 00474c7c */
                    /* try { // try from 00474c1c to 00574cc3 has its CatchHandler @ 00474bcc */
    if ((local_58 != (long *)0x0) &&
       (lVar2 = local_58[1], local_58[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_58 + 0x10))(local_58);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    AnimateIn();
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00474c10 with catch @ 00474c7c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



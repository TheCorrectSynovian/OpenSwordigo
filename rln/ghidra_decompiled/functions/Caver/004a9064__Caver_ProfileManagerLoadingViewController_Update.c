/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a9064
 * Function: Caver::ProfileManagerLoadingViewController::Update
 * Signature: undefined __thiscall Update(ProfileManagerLoadingViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingViewController::Update(float) */

void __thiscall
Caver::ProfileManagerLoadingViewController::Update
          (ProfileManagerLoadingViewController *this,float param_1)

{
  long lVar1;
  GUIAnimation *this_00;
  long lVar2;
  GUIView *this_01;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004a9088 to 005a9123 has its CatchHandler @ 004a9088
                       catch() { ... } // from try @ 004a9088 with catch @ 004a9088
                       catch() { ... } // from try @ 004a9238 with catch @ 004a9088
                       catch() { ... } // from try @ 004a93c4 with catch @ 004a9088 */
  this_00 = (GUIAnimation *)GUIViewController::Update(param_1);
  if (((this[0x48] != (ProfileManagerLoadingViewController)0x0) &&
      (*(float *)(this + 0x4c) <= *(float *)(*(long *)(this + 0x50) + 0x118))) &&
     (this[0x48] = (ProfileManagerLoadingViewController)0x0, *(long *)(this + 0x28) != 0)) {
    GUIAnimation::AlphaAnimation(this_00,1.0,0.0,DAT_00684318);
    *(undefined1 *)(local_48 + 0xb8) = 0;
    this_01 = *(GUIView **)(this + 0x50);
    GUIView::RemoveAllAnimations(this_01);
    GUIView::AddAnimation(this_01,(shared_ptr *)&local_48);
    GUIViewController::DismissModalViewController(*(GUIViewController **)(this + 0x28));
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = local_40[2];
                    /* try { // try from 004a9124 to 005a9133 has its CatchHandler @ 004a93d0 */
      local_40[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005961f4
 * Function: Caver::GUIButton::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUIButton * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUIButton::TouchBegan(GUIButton *this,FWTouch *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  long *local_30;
  
                    /* try { // try from 005961f4 to 0069621b has its CatchHandler @ 00596ae0 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(this + 0x120);
                    /* try { // try from 0059621c to 0069622f has its CatchHandler @ 00596cb8 */
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)param_1;
  if ((uVar1 & 3) == 0) {
    *(uint *)(this + 0x120) = uVar1 | 1;
    if ((uVar1 | 1) != uVar1) {
      (**(code **)(*(long *)this + 0x130))(this);
    }
                    /* try { // try from 00596274 to 0069629b has its CatchHandler @ 00596a90 */
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
    GUIControl::SendActionsForControlEvent((GUIControl *)this,1,0);
    if (*(long *)(*(long *)(this + 0x1c0) + -0x18) != 0) {
      psVar4 = (string *)AudioSystem::sharedSystem();
      AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
                    /* try { // try from 005962bc to 006962e3 has its CatchHandler @ 00596fa8 */
      if ((local_30 != (long *)0x0) &&
         (iVar2 = (int)local_30[1] + -1, *(int *)(local_30 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*local_30 + 8))();
      }
    }
  }
                    /* try { // try from 00596230 to 0069623b has its CatchHandler @ 00596fa8 */
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



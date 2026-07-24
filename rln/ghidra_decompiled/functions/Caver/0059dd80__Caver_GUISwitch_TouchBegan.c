/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059dd80
 * Function: Caver::GUISwitch::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUISwitch * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUISwitch::TouchBegan(GUISwitch *this,FWTouch *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  long lVar5;
  long *local_30;
  
                    /* try { // try from 0059dd88 to 0069dd9b has its CatchHandler @ 0059e074 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 0059dd9c to 0069dda7 has its CatchHandler @ 0059e06c */
  uVar1 = *(uint *)(this + 0x120);
                    /* try { // try from 0059dda8 to 0069ddbb has its CatchHandler @ 0059e02c */
  *(undefined8 *)(this + 0x158) = *(undefined8 *)param_1;
  if ((uVar1 & 3) == 0) {
    *(uint *)(this + 0x120) = uVar1 | 1;
    if ((uVar1 | 1) != uVar1) {
                    /* try { // try from 0059dde8 to 0069ddf7 has its CatchHandler @ 0059e07c */
      (**(code **)(*(long *)this + 0x130))(this);
    }
                    /* try { // try from 0059ddf8 to 0069e1a3 has its CatchHandler @ 0059dc7c */
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
    GUIControl::SendActionsForControlEvent((GUIControl *)this,1,0);
    if (*(long *)(*(long *)(this + 0x150) + -0x18) != 0) {
      psVar4 = (string *)AudioSystem::sharedSystem();
      AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
      if ((local_30 != (long *)0x0) &&
         (iVar2 = (int)local_30[1] + -1, *(int *)(local_30 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*local_30 + 8))();
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052ceec
 * Function: Caver::PauseView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(PauseView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::PauseView::TouchEnded(PauseView *this,FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  GUIAnimation *this_00;
  string *psVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_68 [8];
  long local_60;
  long *local_58;
  long local_50;
  long *local_48;
  long local_38;
  
                    /* try { // try from 0052ceec to 0062cef3 has its CatchHandler @ 0052cefc */
                    /* try { // try from 0052cef4 to 0062ceff has its CatchHandler @ 0052cd68 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0052ceec with catch @ 0052cefc
                        */
                    /* catch() { ... } // from try @ 0052cf24 with catch @ 0052cf00
                       catch() { ... } // from try @ 0052cf40 with catch @ 0052cf00 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = (GUIAnimation *)GUIResponder::TouchEnded((GUIResponder *)this,param_1);
                    /* try { // try from 0052cf20 to 0062cf23 has its CatchHandler @ 0052cf34 */
  if (*(int *)(param_1 + 0x20) < 1) goto LAB_0052d020;
                    /* try { // try from 0052cf24 to 0062cf37 has its CatchHandler @ 0052cf00 */
                    /* catch() { ... } // from try @ 0052cf20 with catch @ 0052cf34 */
  GUIAnimation::AlphaAnimation(this_00,1.0,0.0,0.25);
                    /* try { // try from 0052cf38 to 0062cf3f has its CatchHandler @ 0052cf48 */
  *(undefined1 *)(local_50 + 0xb8) = 0;
                    /* try { // try from 0052cf40 to 0062cf4b has its CatchHandler @ 0052cf00 */
  GUIView::RemoveAllAnimations((GUIView *)this);
                    /* catch() { ... } // from try @ 0052cf38 with catch @ 0052cf48 */
  GUIView::AddAnimation((GUIView *)this,(shared_ptr *)&local_50);
  psVar4 = (string *)AudioSystem::sharedSystem();
  FUN_00666bb8(&local_60,"click",auStack_68);
  AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
  if ((local_58 != (long *)0x0) &&
     (iVar8 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar8, iVar8 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_60 + -0x18) == PTR_DAT_007e5de8) {
LAB_0052cfc0:
    puVar5 = *(undefined8 **)(this + 0xf0);
  }
  else {
    piVar7 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar8) goto LAB_0052cfc0;
    operator_delete((undefined *)(local_60 + -0x18));
    puVar5 = *(undefined8 **)(this + 0xf0);
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,this);
  }
  if ((local_48 != (long *)0x0) && (lVar6 = local_48[1], local_48[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_48 + 0x10))(local_48);
    lVar6 = local_48[2];
    local_48[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
  }
LAB_0052d020:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0052d0e0 with catch @ 0052d090 */
  __stack_chk_fail();
}



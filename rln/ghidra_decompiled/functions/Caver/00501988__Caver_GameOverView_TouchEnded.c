/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00501988
 * Function: Caver::GameOverView::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GameOverView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverView::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GameOverView::TouchEnded(GameOverView *this,FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_58 [8];
  long local_50;
  long *local_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 0050199c with catch @ 00501988 */
                    /* try { // try from 00501998 to 0060199b has its CatchHandler @ 005019ac */
                    /* try { // try from 0050199c to 006019bf has its CatchHandler @ 00501988 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00501998 with catch @ 005019ac */
  GUIResponder::TouchEnded((GUIResponder *)this,param_1);
  if (*(int *)(param_1 + 0x20) < 1) goto LAB_00501a44;
  psVar4 = (string *)AudioSystem::sharedSystem();
  FUN_00666bb8(&local_50,"click",auStack_58);
  AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
  if ((local_48 != (long *)0x0) &&
     (iVar7 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
  if ((undefined *)(local_50 + -0x18) == PTR_DAT_007e5de8) {
LAB_00501a2c:
    puVar5 = *(undefined8 **)(this + 0xf0);
  }
  else {
    piVar6 = (int *)(local_50 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar7) goto LAB_00501a2c;
    operator_delete((undefined *)(local_50 + -0x18));
    puVar5 = *(undefined8 **)(this + 0xf0);
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,this);
  }
LAB_00501a44:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



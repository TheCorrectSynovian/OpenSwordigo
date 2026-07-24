/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594cc8
 * Function: Caver::GUIBubbleView::TouchBegan
 * Signature: undefined __cdecl TouchBegan(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIBubbleView::TouchBegan(Caver::FWTouch const&) */

void Caver::GUIBubbleView::TouchBegan(FWTouch *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  undefined *puVar5;
  GUITextBubble *this;
  int *piVar6;
  int iVar7;
  long *local_50;
  undefined1 auStack_48 [8];
  long local_40;
  long *local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  this = *(GUITextBubble **)(param_1 + 0xf0);
                    /* try { // try from 00594ce8 to 00694d0f has its CatchHandler @ 00594e68 */
  if (*(ulong *)(this + 0x80) < *(long *)(*(long *)(this + 0x28) + -0x18) - 1U) {
    GUITextBubble::FinishShowingText(this);
    psVar4 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_40,"click",auStack_48);
                    /* try { // try from 00594d30 to 00694d57 has its CatchHandler @ 00594e58 */
    AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
    if ((local_38 != (long *)0x0) &&
       (iVar7 = (int)local_38[1] + -1, *(int *)(local_38 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_38 + 8))();
    }
    puVar5 = (undefined *)(local_40 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00594e10;
                    /* try { // try from 00594d78 to 00694d9f has its CatchHandler @ 00594e48 */
    piVar6 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_00594e54:
      iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 00594d30 with catch @ 00594e58 */
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
  }
  else {
    (**(code **)(*(long *)param_1 + 0x78))();
    psVar4 = (string *)AudioSystem::sharedSystem();
    FUN_00666bb8(&local_40,"click",auStack_48);
                    /* try { // try from 00594dc0 to 00694de7 has its CatchHandler @ 00594e40 */
    AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
                    /* try { // try from 00594de8 to 00694f93 has its CatchHandler @ 005946d8 */
    if ((local_50 != (long *)0x0) &&
       (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
                    /* catch() { ... } // from try @ 00594a5c with catch @ 00594e00 */
    puVar5 = (undefined *)(local_40 + -0x18);
    if (puVar5 == PTR_DAT_007e5de8) goto LAB_00594e10;
                    /* catch() { ... } // from try @ 005949f0 with catch @ 00594e30 */
    piVar6 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_00594e54;
    do {
                    /* catch() { ... } // from try @ 00594dc0 with catch @ 00594e40 */
      iVar7 = *piVar6;
                    /* catch() { ... } // from try @ 00594d78 with catch @ 00594e48 */
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = iVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 00594ce8 with catch @ 00594e68 */
    operator_delete(puVar5);
  }
LAB_00594e10:
                    /* catch() { ... } // from try @ 00594a38 with catch @ 00594e10 */
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00594a14 with catch @ 00594e20 */
  return;
}



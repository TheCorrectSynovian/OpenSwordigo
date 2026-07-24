/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004752e0
 * Function: Caver::AchievementNotificationView::AnimationDidFinish
 * Signature: undefined __cdecl AnimationDidFinish(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementNotificationView::AnimationDidFinish(void*, Caver::GUIEvent*) */

void Caver::AchievementNotificationView::AnimationDidFinish(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(GUIEvent **)((long)param_1 + 0x120) != param_2) {
    return;
  }
  plVar2 = *(long **)((long)param_1 + 0x128);
  *(undefined8 *)((long)param_1 + 0x120) = 0;
  *(undefined8 *)((long)param_1 + 0x128) = 0;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  AnimateOutAfterDelay(2.5);
  return;
}



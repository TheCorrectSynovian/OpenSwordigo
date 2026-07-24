/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e4b44
 * Function: Caver::TargetFrame::HideAnimationFinished
 * Signature: undefined __cdecl HideAnimationFinished(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::HideAnimationFinished(void*, Caver::GUIEvent*) */

void Caver::TargetFrame::HideAnimationFinished(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x308);
  *(undefined1 *)((long)param_1 + 0xe4) = 1;
  *(undefined8 *)((long)param_1 + 0x308) = 0;
  *(undefined8 *)((long)param_1 + 0x300) = 0;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004e4bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
  return;
}



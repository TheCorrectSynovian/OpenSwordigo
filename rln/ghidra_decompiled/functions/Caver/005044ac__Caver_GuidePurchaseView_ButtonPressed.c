/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005044ac
 * Function: Caver::GuidePurchaseView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::GuidePurchaseView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(GUIEvent **)((long)param_1 + 0x140) == param_2) {
    puVar2 = *(undefined8 **)((long)param_1 + 0xf0);
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00504500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_1);
      return;
    }
  }
  else if (*(GUIEvent **)((long)param_1 + 0x130) == param_2) {
    plVar1 = *(long **)((long)param_1 + 0xf0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00504518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
      return;
    }
  }
  else if ((*(GUIEvent **)((long)param_1 + 0x150) == param_2) &&
          (plVar1 = *(long **)((long)param_1 + 0xf0), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005044e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    return;
  }
  return;
}



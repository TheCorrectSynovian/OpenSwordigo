/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590060
 * Function: Caver::GUIAlertView::PresentAnimationDidFinish
 * Signature: undefined __cdecl PresentAnimationDidFinish(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::PresentAnimationDidFinish(void*, Caver::GUIEvent*) */

void Caver::GUIAlertView::PresentAnimationDidFinish(void *param_1,GUIEvent *param_2)

{
                    /* try { // try from 00590060 to 0069006b has its CatchHandler @ 005911f4 */
  if (0 < (int)((ulong)(*(long *)((long)param_1 + 0x148) -
                       (long)*(undefined8 **)((long)param_1 + 0x140)) >> 4)) {
                    /* WARNING: Could not recover jumptable at 0x00590080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00590080 to 00690087 has its CatchHandler @ 00591b4c */
    (**(code **)(*(long *)**(undefined8 **)((long)param_1 + 0x140) + 200))();
    return;
  }
  return;
}



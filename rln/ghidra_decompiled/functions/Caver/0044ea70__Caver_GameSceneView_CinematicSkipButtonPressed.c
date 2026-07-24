/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044ea70
 * Function: Caver::GameSceneView::CinematicSkipButtonPressed
 * Signature: undefined __cdecl CinematicSkipButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::CinematicSkipButtonPressed(void*, Caver::GUIEvent*) */

void Caver::GameSceneView::CinematicSkipButtonPressed(void *param_1,GUIEvent *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
                    /* try { // try from 0044ea70 to 0054eac7 has its CatchHandler @ 00447cc4 */
  puVar1 = *(undefined8 **)(*(long *)((long)param_1 + 0x100) + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,0xd);
                    /* catch() { ... } // from try @ 00448c04 with catch @ 0044eaa8 */
    plVar2 = *(long **)(*(long *)((long)param_1 + 0x100) + 0xf0);
                    /* catch() { ... } // from try @ 00448bb8 with catch @ 0044eaac */
                    /* WARNING: Could not recover jumptable at 0x0044eab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,0xd);
    return;
  }
  return;
}



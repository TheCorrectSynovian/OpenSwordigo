/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005070b8
 * Function: Caver::GuideToggleView::SwitchToggled
 * Signature: undefined __cdecl SwitchToggled(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideToggleView::SwitchToggled(void*, Caver::GUIEvent*) */

void Caver::GuideToggleView::SwitchToggled(void *param_1,GUIEvent *param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 005070b8 to 006070d3 has its CatchHandler @ 005072bc */
  if ((*(GUIEvent **)((long)param_1 + 0x108) == param_2) &&
     (puVar1 = *(undefined8 **)((long)param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
                    /* try { // try from 005070d4 to 00607213 has its CatchHandler @ 00507070 */
                    /* WARNING: Could not recover jumptable at 0x005070e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1);
    return;
  }
  return;
}



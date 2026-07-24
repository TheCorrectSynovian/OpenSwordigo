/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049ac04
 * Function: Caver::ProfilePanelView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfilePanelView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::ProfilePanelView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (*(GUIEvent **)((long)param_1 + 0x188) == param_2) {
    uVar1 = PlayerProfile::ProfileExists(*(PlayerProfile **)((long)param_1 + 0x168));
    if ((uVar1 & 1) == 0) {
      CreateProfile(param_1);
    }
    puVar2 = *(undefined8 **)((long)param_1 + 0x160);
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0049ac64 to 0059ac6f has its CatchHandler @ 0049b03c */
                    /* try { // try from 0049ac70 to 0059ac77 has its CatchHandler @ 0049af78 */
                    /* WARNING: Could not recover jumptable at 0x0049ac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,param_1);
      return;
    }
  }
  else {
    if (*(GUIEvent **)((long)param_1 + 0x178) == param_2) {
                    /* try { // try from 0049ac8c to 0059acb7 has its CatchHandler @ 0049b04c */
      ShowDeleteConfirmation(param_1);
      return;
    }
    if (*(GUIEvent **)((long)param_1 + 0x198) == param_2) {
      ShowNamePrompt(param_1);
      return;
    }
  }
  return;
}



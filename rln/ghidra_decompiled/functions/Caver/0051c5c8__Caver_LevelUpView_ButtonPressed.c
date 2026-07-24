/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051c5c8
 * Function: Caver::LevelUpView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::LevelUpView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  undefined8 *puVar1;
  
  if (*(GUIEvent **)((long)param_1 + 0x108) != param_2) {
                    /* try { // try from 0051c5ec to 0061c5ef has its CatchHandler @ 0051c640 */
    return;
  }
                    /* try { // try from 0051c5f0 to 0061c657 has its CatchHandler @ 0051c54c */
  puVar1 = *(undefined8 **)((long)param_1 + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,param_1);
  }
  GUIView::DismissModalView(param_1,(GUIView *)0x0);
  return;
}



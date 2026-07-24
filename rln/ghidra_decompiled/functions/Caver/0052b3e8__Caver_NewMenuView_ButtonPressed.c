/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052b3e8
 * Function: Caver::NewMenuView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewMenuView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::NewMenuView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)((long)param_1 + 0xf8);
  lVar3 = *(long *)((long)param_1 + 0x100);
  if (lVar3 != lVar2) {
    lVar5 = 0;
    uVar4 = 0;
    do {
                    /* try { // try from 0052b414 to 0062b42f has its CatchHandler @ 0052b500 */
      if ((*(GUIEvent **)(lVar2 + lVar5) == param_2) &&
         (puVar1 = *(undefined8 **)((long)param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
                    /* try { // try from 0052b430 to 0062b503 has its CatchHandler @ 0052b3cc */
        (**(code **)*puVar1)(puVar1,param_1,uVar4 & 0xffffffff);
        lVar2 = *(long *)((long)param_1 + 0xf8);
        lVar3 = *(long *)((long)param_1 + 0x100);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < (ulong)(lVar3 - lVar2 >> 4));
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d3c58
 * Function: Caver::GameOverlayView::ButtonHighlightChanged
 * Signature: undefined __cdecl ButtonHighlightChanged(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x004d3d84) */
/* WARNING: Removing unreachable block (ram,0x004d3d6c) */
/* WARNING: Removing unreachable block (ram,0x004d3d60) */
/* WARNING: Removing unreachable block (ram,0x004d3d78) */
/* WARNING: Removing unreachable block (ram,0x004d3d90) */
/* WARNING: Removing unreachable block (ram,0x004d3d54) */
/* Caver::GameOverlayView::ButtonHighlightChanged(void*, Caver::GUIEvent*) */

void Caver::GameOverlayView::ButtonHighlightChanged(void *param_1,GUIEvent *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long *plVar2;
  
  if (*(GUIEvent **)((long)param_1 + 0x140) == param_2) {
    iVar1 = 1;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x150) == param_2) {
    iVar1 = 2;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x160) == param_2) {
    iVar1 = 3;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x170) == param_2) {
    iVar1 = 4;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x180) == param_2) {
    iVar1 = 5;
  }
  else if (*(GUIEvent **)((long)param_1 + 400) == param_2) {
    iVar1 = 6;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x1b8) == param_2) {
    iVar1 = 7;
  }
  else if (*(GUIEvent **)((long)param_1 + 0x1c8) == param_2) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
    if (*(GUIEvent **)((long)param_1 + 0x1d8) != param_2) {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      return;
    }
  }
  plVar2 = *(long **)((long)param_1 + 0xf0);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (((byte)param_2[0x120] & 1) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 8);
  }
  else {
    if (*(char *)((long)param_1 + 0x13c) != '\0') {
      *(undefined1 *)((long)param_1 + 0x13c) = 0;
      (*(GUIEvent **)((long)param_1 + 0x140))[0x124] = (GUIEvent)0x0;
      *(undefined1 *)(*(long *)((long)param_1 + 0x150) + 0x124) = 0;
      *(undefined1 *)(*(long *)((long)param_1 + 0x170) + 0x124) = 0;
      *(undefined1 *)(*(long *)((long)param_1 + 0x160) + 0x124) = 0;
      *(undefined1 *)(*(long *)((long)param_1 + 400) + 0x124) = 0;
      *(undefined1 *)(*(long *)((long)param_1 + 0x180) + 0x124) = 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)*plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x004d3d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,iVar1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00590e34
 * Function: Caver::GUIAlertView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::GUIAlertView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)((long)param_1 + 0x158);
  if (0 < (int)((ulong)(*(long *)((long)param_1 + 0x160) - lVar3) >> 4)) {
    lVar6 = 0;
    uVar4 = 0;
    do {
      if ((*(GUIEvent **)(lVar3 + lVar6) == param_2) &&
         ((puVar1 = *(undefined8 **)((long)param_1 + 0x118), puVar1 == (undefined8 *)0x0 ||
          (uVar2 = (**(code **)*puVar1)(puVar1,param_1,uVar4 & 0xffffffff), (uVar2 & 1) != 0)))) {
        Dismiss(param_1);
      }
      lVar3 = *(long *)((long)param_1 + 0x158);
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((long)uVar4 < (long)(int)((ulong)(*(long *)((long)param_1 + 0x160) - lVar3) >> 4));
  }
  lVar3 = *(long *)((long)param_1 + 0x170);
  if (0 < (int)((ulong)(*(long *)((long)param_1 + 0x178) - lVar3) >> 4)) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (((*(GUIEvent **)(lVar3 + lVar5) == param_2) &&
          (puVar1 = *(undefined8 **)((long)param_1 + 0x118), puVar1 != (undefined8 *)0x0)) &&
         (uVar4 = (**(code **)*puVar1)
                            (puVar1,param_1,
                             (int)lVar6 +
                             (int)((ulong)(*(long *)((long)param_1 + 0x160) -
                                          *(long *)((long)param_1 + 0x158)) >> 4)), (uVar4 & 1) != 0
         )) {
        Dismiss(param_1);
      }
      lVar3 = *(long *)((long)param_1 + 0x170);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)((ulong)(*(long *)((long)param_1 + 0x178) - lVar3) >> 4));
  }
  return;
}



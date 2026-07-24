/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3d00
 * Function: Caver::GameEvent::ClearEvents
 * Signature: undefined __cdecl ClearEvents(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEvent::ClearEvents() */

void Caver::GameEvent::ClearEvents(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar4 = PTR_currentManager__007e6f50;
  puVar6 = *(undefined8 **)PTR_currentManager__007e6f50;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = operator_new(0x28);
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 4) = 1;
    *(undefined8 **)puVar4 = puVar6;
  }
  lVar3 = puVar6[2];
  lVar2 = puVar6[1];
  for (lVar1 = lVar2; lVar3 != lVar1; lVar1 = lVar1 + 0x10) {
    plVar7 = *(long **)(lVar1 + 8);
    if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar5 = plVar7[2];
      plVar7[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* catch() { ... } // from try @ 004b3c80 with catch @ 004b3d98 */
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
  }
  puVar6[2] = lVar2;
  return;
}



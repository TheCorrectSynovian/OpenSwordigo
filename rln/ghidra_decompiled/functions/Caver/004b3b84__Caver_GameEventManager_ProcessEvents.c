/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3b84
 * Function: Caver::GameEventManager::ProcessEvents
 * Signature: undefined __thiscall ProcessEvents(GameEventManager * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameEventManager::ProcessEvents() */

void __thiscall Caver::GameEventManager::ProcessEvents(GameEventManager *this)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = *(long *)(this + 8);
  lVar7 = *(long *)(this + 0x10);
  lVar4 = lVar2;
  if (lVar7 != lVar2) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar2 + lVar5);
      plVar3 = (long *)((undefined8 *)(lVar2 + lVar5))[1];
      if (plVar3 != (long *)0x0) {
        plVar3[1] = plVar3[1] + 1;
      }
      (**(code **)**(undefined8 **)this)(*(undefined8 **)this,uVar1);
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 004b3bfc to 005b3c27 has its CatchHandler @ 004b3bfc
                       catch() { ... } // from try @ 004b3bfc with catch @ 004b3bfc
                       catch() { ... } // from try @ 004b3cbc with catch @ 004b3bfc */
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar2 = *(long *)(this + 8);
      lVar7 = *(long *)(this + 0x10);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
                    /* try { // try from 004b3c28 to 005b3c3b has its CatchHandler @ 004b3e68 */
      lVar4 = lVar2;
    } while (uVar6 < (ulong)(lVar7 - lVar2 >> 4));
  }
  for (; lVar2 != lVar7; lVar2 = lVar2 + 0x10) {
    plVar3 = *(long **)(lVar2 + 8);
                    /* try { // try from 004b3c4c to 005b3c57 has its CatchHandler @ 004b3dfc */
    if ((plVar3 != (long *)0x0) && (lVar5 = plVar3[1], plVar3[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar5 = plVar3[2];
      plVar3[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
                    /* try { // try from 004b3c80 to 005b3cbb has its CatchHandler @ 004b3d98 */
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  *(long *)(this + 0x10) = lVar4;
  return;
}



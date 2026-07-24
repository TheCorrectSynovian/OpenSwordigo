/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1ef8
 * Function: Caver::Quest::~Quest
 * Signature: undefined __thiscall ~Quest(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quest::~Quest() */

void __thiscall Caver::Quest::~Quest(Quest *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  puVar4 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 004b1e24 with catch @ 004b1efc */
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004b1dcc with catch @ 004b1f14 */
                    /* catch() { ... } // from try @ 004b1d14 with catch @ 004b1f18 */
                    /* catch() { ... } // from try @ 004b1b64 with catch @ 004b1f1c */
  puVar5 = (undefined *)(*(long *)(this + 0x20) + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)(this + 0x20) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 0x18) + -0x18);
                    /* try { // try from 004b1f40 to 005b1f47 has its CatchHandler @ 004b206c */
  if (puVar5 != puVar4) {
    piVar7 = (int *)(*(long *)(this + 0x18) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 004b1e04 with catch @ 004b2038
                       catch() { ... } // from try @ 004b1e38 with catch @ 004b2038 */
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 004b1d20 with catch @ 004b203c */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 004b1bc4 with catch @ 004b1fc8
                       catch() { ... } // from try @ 004b1cec with catch @ 004b1fc8 */
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
                    /* try { // try from 004b1f48 to 005b205f has its CatchHandler @ 004b1a84 */
  puVar5 = (undefined *)(*(long *)(this + 0x10) + -0x18);
                    /* catch() { ... } // from try @ 004b1b3c with catch @ 004b1f4c */
                    /* catch() { ... } // from try @ 004b1b1c with catch @ 004b1f50 */
  if (puVar5 != puVar4) {
    piVar7 = (int *)(*(long *)(this + 0x10) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* try { // try from 004b2060 to 005b2063 has its CatchHandler @ 004b206c */
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* try { // try from 004b2064 to 005b206f has its CatchHandler @ 004b1a84 */
    if (iVar8 < 1) {
                    /* catch() { ... } // from try @ 004b1f40 with catch @ 004b206c
                       catch() { ... } // from try @ 004b2060 with catch @ 004b206c */
                    /* catch() { ... } // from try @ 004b2138 with catch @ 004b2070
                       catch() { ... } // from try @ 004b21cc with catch @ 004b2070 */
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(*(long *)(this + 8) + -0x18);
  if (puVar5 != puVar4) {
    piVar7 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
                    /* catch() { ... } // from try @ 004b1b50 with catch @ 004b1f64
                       catch() { ... } // from try @ 004b1b90 with catch @ 004b1f64 */
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



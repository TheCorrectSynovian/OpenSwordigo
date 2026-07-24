/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a1234
 * Function: Caver::Item::~Item
 * Signature: undefined __thiscall ~Item(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Item::~Item() */

void __thiscall Caver::Item::~Item(Item *this)

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
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
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
  if (puVar5 != puVar4) {
    piVar7 = (int *)(*(long *)(this + 0x18) + -8);
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
  puVar5 = (undefined *)(*(long *)(this + 0x10) + -0x18);
  if (puVar5 != puVar4) {
    piVar7 = (int *)(*(long *)(this + 0x10) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004a1394 to 005a144b has its CatchHandler @ 004a1394
                       catch(type#1 @ 00000000) { ... } // from try @ 004a1394 with catch @ 004a1394
                       catch(type#1 @ 00000000) { ... } // from try @ 004a1450 with catch @ 004a1394
                       catch(type#1 @ 00000000) { ... } // from try @ 004a16d0 with catch @ 004a1394
                        */
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
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



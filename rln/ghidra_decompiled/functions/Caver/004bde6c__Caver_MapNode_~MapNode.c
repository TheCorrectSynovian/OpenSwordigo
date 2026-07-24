/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bde6c
 * Function: Caver::MapNode::~MapNode
 * Signature: undefined __thiscall ~MapNode(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapNode::~MapNode() */

void __thiscall Caver::MapNode::~MapNode(MapNode *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
                    /* catch() { ... } // from try @ 004bd08c with catch @ 004bde6c */
  puVar5 = PTR_DAT_007e5de8;
                    /* catch() { ... } // from try @ 004bd030 with catch @ 004bde70 */
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined *)(*(long *)(this + 0x60) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x60) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
                    /* try { // try from 004bdfe4 to 005be09b has its CatchHandler @ 004bdfe4
                       catch() { ... } // from try @ 004bdfe4 with catch @ 004bdfe4
                       catch() { ... } // from try @ 004be0f0 with catch @ 004bdfe4
                       catch() { ... } // from try @ 004be26c with catch @ 004bdfe4 */
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = PTR_pthread_create_007e4e78;
  plVar11 = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x38);
  if (plVar11 != plVar1) {
    do {
                    /* catch() { ... } // from try @ 004bcfd8 with catch @ 004bdf04 */
      puVar7 = (undefined *)(*plVar11 + -0x18);
                    /* catch() { ... } // from try @ 004bcf74 with catch @ 004bdf08 */
      if (puVar7 != puVar5) {
        piVar9 = (int *)(*plVar11 + -8);
        if (puVar6 == (undefined *)0x0) {
          iVar10 = *piVar9;
          *piVar9 = iVar10 + -1;
        }
        else {
          do {
                    /* catch() { ... } // from try @ 004bcffc with catch @ 004bdecc */
            iVar10 = *piVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar10 < 1) {
          operator_delete(puVar7);
        }
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar1);
    plVar11 = *(long **)(this + 0x30);
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  puVar6 = (undefined *)(*(long *)(this + 0x18) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 0x18) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x10) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 0x10) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* catch() { ... } // from try @ 004bcf18 with catch @ 004bdfd8 */
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004bcf3c with catch @ 004bdf6c */
  return;
}



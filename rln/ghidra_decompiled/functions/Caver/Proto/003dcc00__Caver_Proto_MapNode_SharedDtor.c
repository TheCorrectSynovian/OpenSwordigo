/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dcc00
 * Function: Caver::Proto::MapNode::SharedDtor
 * Signature: undefined __thiscall SharedDtor(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::SharedDtor() */

void __thiscall Caver::Proto::MapNode::SharedDtor(MapNode *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x18);
  if ((plVar4 != (long *)PTR__default_level_name__007e5878) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  plVar4 = *(long **)(this + 0x20);
  if ((plVar4 != (long *)PTR__default_title__007e6348) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  plVar4 = *(long **)(this + 0x70);
  if ((plVar4 != (long *)PTR__default_music__007e7748) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
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
        operator_delete(puVar6);
      }
    }
    operator_delete(plVar4);
  }
  if ((*(MapNode **)PTR_default_instance__007e5378 != this) &&
     (*(long **)(this + 0x10) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



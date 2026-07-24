/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e2b8
 * Function: Caver::Proto::CollectableItemComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::SharedDtor() */

void __thiscall Caver::Proto::CollectableItemComponent::SharedDtor(CollectableItemComponent *this)

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
  if ((plVar4 != (long *)PTR__default_item_name__007e5e68) && (plVar4 != (long *)0x0)) {
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
                    /* try { // try from 0042e30c to 0052e3fb has its CatchHandler @ 0042e30c
                       catch() { ... } // from try @ 0042e30c with catch @ 0042e30c
                       catch() { ... } // from try @ 0042e424 with catch @ 0042e30c
                       catch() { ... } // from try @ 0042e52c with catch @ 0042e30c
                       catch() { ... } // from try @ 0042e5ac with catch @ 0042e30c */
  plVar4 = *(long **)(this + 0x20);
  if ((plVar4 != (long *)PTR__default_identifier__007e6b70) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(*plVar4 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0042e3fc to 0052e423 has its CatchHandler @ 0042e560 */
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
                    /* try { // try from 0042e424 to 0052e523 has its CatchHandler @ 0042e30c */
      }
    }
    operator_delete(plVar4);
  }
  if ((*(CollectableItemComponent **)PTR_default_instance__007e5fb8 != this) &&
     (*(long **)(this + 0x30) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



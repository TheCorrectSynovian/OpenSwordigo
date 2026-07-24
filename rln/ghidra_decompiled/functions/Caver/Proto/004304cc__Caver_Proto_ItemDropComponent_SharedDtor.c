/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004304cc
 * Function: Caver::Proto::ItemDropComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::SharedDtor() */

void __thiscall Caver::Proto::ItemDropComponent::SharedDtor(ItemDropComponent *this)

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
  plVar4 = *(long **)(this + 0x10);
                    /* catch() { ... } // from try @ 004303e8 with catch @ 00430500 */
  if ((plVar4 != (long *)PTR__default_item_name__007e5cd8) && (plVar4 != (long *)0x0)) {
                    /* try { // try from 00430504 to 0053055b has its CatchHandler @ 00430504
                       catch() { ... } // from try @ 00430504 with catch @ 00430504
                       catch() { ... } // from try @ 00430560 with catch @ 00430504
                       catch() { ... } // from try @ 004305a4 with catch @ 00430504
                       catch() { ... } // from try @ 00430608 with catch @ 00430504
                       catch() { ... } // from try @ 0043067c with catch @ 00430504
                       catch() { ... } // from try @ 00430720 with catch @ 00430504
                       catch() { ... } // from try @ 004307c8 with catch @ 00430504
                       catch() { ... } // from try @ 004307fc with catch @ 00430504
                       catch() { ... } // from try @ 004308c0 with catch @ 00430504
                       catch() { ... } // from try @ 00430a00 with catch @ 00430504
                       catch() { ... } // from try @ 00430a74 with catch @ 00430504
                       catch() { ... } // from try @ 00430bd0 with catch @ 00430504 */
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
  plVar4 = *(long **)(this + 0x18);
  if ((plVar4 != (long *)PTR__default_item_identifier__007e6a38) && (plVar4 != (long *)0x0)) {
    puVar6 = (undefined *)(*plVar4 + -0x18);
    if (puVar6 != PTR_DAT_007e5de8) {
                    /* try { // try from 004305a0 to 005305a3 has its CatchHandler @ 00430af4 */
                    /* try { // try from 004305a4 to 00530603 has its CatchHandler @ 00430504 */
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
                    /* try { // try from 00430604 to 00530607 has its CatchHandler @ 00430af0 */
        operator_delete(puVar6);
                    /* try { // try from 00430608 to 00530623 has its CatchHandler @ 00430504 */
      }
    }
    operator_delete(plVar4);
  }
                    /* try { // try from 0043055c to 0053055f has its CatchHandler @ 00430b04 */
                    /* try { // try from 00430560 to 0053059f has its CatchHandler @ 00430504 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



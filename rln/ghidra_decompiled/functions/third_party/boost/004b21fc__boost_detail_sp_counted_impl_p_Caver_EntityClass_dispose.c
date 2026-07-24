/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b21fc
 * Function: boost::detail::sp_counted_impl_p<Caver::EntityClass>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::EntityClass> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::EntityClass>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::EntityClass>::dispose
          (sp_counted_impl_p<Caver::EntityClass> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
                    /* catch() { ... } // from try @ 004b21e8 with catch @ 004b21fc */
  puVar6 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
                    /* try { // try from 004b2210 to 005b222b has its CatchHandler @ 004b2210
                       catch() { ... } // from try @ 004b2210 with catch @ 004b2210
                       catch() { ... } // from try @ 004b2230 with catch @ 004b2210 */
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x18);
  if (plVar9 != (long *)0x0) {
                    /* try { // try from 004b222c to 005b222f has its CatchHandler @ 004b226c */
    puVar4 = (undefined *)(plVar9[1] + -0x18);
                    /* try { // try from 004b2230 to 005b227f has its CatchHandler @ 004b2210 */
    if (puVar4 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(plVar9[1] + -8);
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
        operator_delete(puVar4);
        puVar6 = PTR_DAT_007e5de8;
      }
    }
    puVar4 = (undefined *)(*plVar9 + -0x18);
    if (puVar4 != puVar6) {
      piVar7 = (int *)(*plVar9 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 004b2310 with catch @ 004b22e0 */
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
        operator_delete(puVar4);
                    /* try { // try from 004b22fc to 005b230f has its CatchHandler @ 004b2334 */
      }
    }
    operator_delete(plVar9);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004b222c with catch @ 004b226c */
  return;
}



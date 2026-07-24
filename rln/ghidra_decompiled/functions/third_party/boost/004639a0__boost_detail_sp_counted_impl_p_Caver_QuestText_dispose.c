/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004639a0
 * Function: boost::detail::sp_counted_impl_p<Caver::QuestText>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::QuestText> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::QuestText>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::QuestText>::dispose
          (sp_counted_impl_p<Caver::QuestText> *this)

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
  long *plVar12;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar7 = PTR_pthread_create_007e4e78;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  plVar11 = *(long **)(this + 0x18);
  if (plVar11 != (long *)0x0) {
    plVar12 = (long *)plVar11[1];
    plVar1 = (long *)plVar11[2];
    if (plVar12 != plVar1) {
      do {
        puVar6 = (undefined *)(*plVar12 + -0x18);
        if (puVar6 != puVar5) {
          piVar9 = (int *)(*plVar12 + -8);
          if (puVar7 == (undefined *)0x0) {
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
        plVar12 = plVar12 + 1;
                    /* catch() { ... } // from try @ 00463a8c with catch @ 00463a3c
                       catch() { ... } // from try @ 00463bd0 with catch @ 00463a3c */
      } while (plVar12 != plVar1);
      plVar12 = (long *)plVar11[1];
    }
    if (plVar12 != (long *)0x0) {
      operator_delete(plVar12);
    }
    puVar7 = (undefined *)(*plVar11 + -0x18);
    if (puVar7 != PTR_DAT_007e5de8) {
      piVar9 = (int *)(*plVar11 + -8);
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
        operator_delete(puVar7);
      }
    }
    operator_delete(plVar11);
  }
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00463a88 to 00563a8b has its CatchHandler @ 00463b6c */
                    /* try { // try from 00463a8c to 00563bc7 has its CatchHandler @ 00463a3c */
  return;
}



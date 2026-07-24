/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550938
 * Function: boost::detail::sp_counted_impl_p<Caver::Skeleton>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Skeleton> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Skeleton>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Skeleton>::dispose(sp_counted_impl_p<Caver::Skeleton> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_pthread_create_007e4e78;
                    /* try { // try from 00550950 to 0065096b has its CatchHandler @ 005508a0 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 00550928 with catch @ 00550958 */
  lVar7 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005508b8 with catch @ 0055095c */
  pvVar11 = *(void **)(this + 0x18);
  if (pvVar11 != (void *)0x0) {
    plVar12 = *(long **)((long)pvVar11 + 8);
                    /* try { // try from 0055096c to 00650977 has its CatchHandler @ 00550978 */
    if (plVar12 != (long *)0x0) {
      lVar8 = plVar12[-1];
                    /* catch() { ... } // from try @ 0055096c with catch @ 00550978 */
      if (lVar8 != 0) {
                    /* try { // try from 0055097c to 0065097f has its CatchHandler @ 00550984 */
                    /* catch() { ... } // from try @ 0055097c with catch @ 00550984 */
        plVar13 = plVar12 + lVar8 * 0x12;
        do {
          while( true ) {
            plVar13 = plVar13 + -0x12;
            puVar6 = (undefined *)(*plVar13 + -0x18);
            if (puVar6 != puVar5) break;
LAB_005509a4:
            if (plVar13 == plVar12) goto LAB_005509f0;
          }
          piVar9 = (int *)(*plVar13 + -8);
          if (puVar4 == (undefined *)0x0) {
            iVar10 = *piVar9;
            *piVar9 = iVar10 + -1;
          }
          else {
            do {
              iVar10 = *piVar9;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar2) {
                *piVar9 = iVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          if (0 < iVar10) goto LAB_005509a4;
          operator_delete(puVar6);
        } while (plVar13 != plVar12);
      }
LAB_005509f0:
      operator_delete__(plVar12 + -1);
    }
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00550a18 to 00650a1b has its CatchHandler @ 00550a78 */
                    /* try { // try from 00550a1c to 00650a97 has its CatchHandler @ 005509ac */
  return;
}



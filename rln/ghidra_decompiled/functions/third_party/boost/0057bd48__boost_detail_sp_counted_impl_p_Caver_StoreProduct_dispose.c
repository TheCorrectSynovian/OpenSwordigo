/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057bd48
 * Function: boost::detail::sp_counted_impl_p<Caver::StoreProduct>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::StoreProduct> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::StoreProduct>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::StoreProduct>::dispose
          (sp_counted_impl_p<Caver::StoreProduct> *this)

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
  
  puVar6 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x18);
  if (plVar9 != (long *)0x0) {
    puVar4 = (undefined *)(plVar9[1] + -0x18);
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
      }
    }
    operator_delete(plVar9);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



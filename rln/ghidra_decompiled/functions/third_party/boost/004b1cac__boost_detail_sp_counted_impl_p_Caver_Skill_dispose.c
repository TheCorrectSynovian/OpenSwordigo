/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b1cac
 * Function: boost::detail::sp_counted_impl_p<Caver::Skill>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Skill> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Skill>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Skill>::dispose(sp_counted_impl_p<Caver::Skill> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x18);
  if (plVar9 != (long *)0x0) {
    puVar5 = (undefined *)(plVar9[2] + -0x18);
    if (puVar5 != PTR_DAT_007e5de8) {
      piVar7 = (int *)(plVar9[2] + -8);
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
                    /* try { // try from 004b1cec to 005b1cf3 has its CatchHandler @ 004b1fc8 */
    puVar5 = (undefined *)(plVar9[1] + -0x18);
    if (puVar5 != puVar4) {
      piVar7 = (int *)(plVar9[1] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar8 = *piVar7;
                    /* try { // try from 004b1dcc to 005b1ddf has its CatchHandler @ 004b1f14 */
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
                    /* try { // try from 004b1de0 to 005b1def has its CatchHandler @ 004b1fcc */
      }
    }
    puVar5 = (undefined *)(*plVar9 + -0x18);
    if (puVar5 != puVar4) {
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
        operator_delete(puVar5);
      }
    }
    operator_delete(plVar9);
  }
                    /* try { // try from 004b1d14 to 005b1d1b has its CatchHandler @ 004b1f18 */
                    /* try { // try from 004b1d20 to 005b1dc3 has its CatchHandler @ 004b203c */
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004b1e04 to 005b1e23 has its CatchHandler @ 004b2038 */
    __stack_chk_fail();
  }
  return;
}



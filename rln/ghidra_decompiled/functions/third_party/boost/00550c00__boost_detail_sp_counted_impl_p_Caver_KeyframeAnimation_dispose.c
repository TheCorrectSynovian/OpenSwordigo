/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550c00
 * Function: boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::KeyframeAnimation> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::dispose
          (sp_counted_impl_p<Caver::KeyframeAnimation> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  
                    /* catch() { ... } // from try @ 00550bfc with catch @ 00550c14 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x18);
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar9[3];
                    /* try { // try from 00550c38 to 00650c5f has its CatchHandler @ 00550c68 */
    if ((plVar10 != (long *)0x0) && (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar6 = plVar10[2];
      plVar10[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* try { // try from 00550c60 to 00650c7b has its CatchHandler @ 00550bb0 */
                    /* catch() { ... } // from try @ 00550c38 with catch @ 00550c68 */
                    /* catch() { ... } // from try @ 00550bc8 with catch @ 00550c6c */
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
                    /* try { // try from 00550c7c to 00650c87 has its CatchHandler @ 00550c88 */
    puVar4 = (undefined *)(*plVar9 + -0x18);
    if (puVar4 != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 00550d2c with catch @ 00550cbc
                       catch() { ... } // from try @ 00550dd0 with catch @ 00550cbc */
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
                    /* catch() { ... } // from try @ 00550c7c with catch @ 00550c88 */
                    /* try { // try from 00550c8c to 00650c8f has its CatchHandler @ 00550c94 */
    operator_delete(plVar9);
  }
                    /* catch() { ... } // from try @ 00550c8c with catch @ 00550c94 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



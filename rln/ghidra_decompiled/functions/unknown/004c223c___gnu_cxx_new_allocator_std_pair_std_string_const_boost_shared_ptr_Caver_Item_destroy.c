/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c223c
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::new_allocator<std::pair<std::string const, boost::shared_ptr<Caver::Item> >
   >::destroy(std::pair<std::string const, boost::shared_ptr<Caver::Item> >*) */

void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>>::destroy
          (new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Item>>> *this,
          pair *param_1)

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
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* try { // try from 004c227c to 005c227f has its CatchHandler @ 004c22d4 */
                    /* try { // try from 004c2280 to 005c22af has its CatchHandler @ 004c21f8 */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
                    /* try { // try from 004c22b0 to 005c22b3 has its CatchHandler @ 004c22d0 */
                    /* try { // try from 004c22b4 to 005c22e7 has its CatchHandler @ 004c21f8 */
  puVar4 = (undefined *)(*(long *)param_1 + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
                    /* try { // try from 004c22e8 to 005c2317 has its CatchHandler @ 004c22e8
                       catch() { ... } // from try @ 004c22e8 with catch @ 004c22e8
                       catch() { ... } // from try @ 004c2460 with catch @ 004c22e8 */
    piVar7 = (int *)(*(long *)param_1 + -8);
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
                    /* try { // try from 004c2318 to 005c232b has its CatchHandler @ 004c2728 */
    if (iVar8 < 1) {
      operator_delete(puVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004c22b0 with catch @ 004c22d0 */
                    /* catch() { ... } // from try @ 004c227c with catch @ 004c22d4 */
  return;
}



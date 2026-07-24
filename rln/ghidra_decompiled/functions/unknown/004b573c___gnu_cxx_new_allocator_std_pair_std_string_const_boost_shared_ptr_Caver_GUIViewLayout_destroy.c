/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b573c
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::new_allocator<std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout> >
   >::destroy(std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout> >*) */

void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>::
destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>> *this,
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
                    /* try { // try from 004b5754 to 005b575f has its CatchHandler @ 004b5bd4 */
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* try { // try from 004b5788 to 005b57c3 has its CatchHandler @ 004b5b78 */
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)param_1 + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
                    /* try { // try from 004b57e4 to 005b57f7 has its CatchHandler @ 004b5b74 */
    piVar7 = (int *)(*(long *)param_1 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 004b5808 to 005b5813 has its CatchHandler @ 004b5b3c */
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
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



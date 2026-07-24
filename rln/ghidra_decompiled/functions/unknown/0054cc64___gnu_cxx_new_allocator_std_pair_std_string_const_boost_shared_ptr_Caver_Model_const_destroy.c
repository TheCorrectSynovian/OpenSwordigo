/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054cc64
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::new_allocator<std::pair<std::string const, boost::shared_ptr<Caver::Model const> >
   >::destroy(std::pair<std::string const, boost::shared_ptr<Caver::Model const> >*) */

void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>::
destroy(new_allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>> *this,
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
                    /* catch() { ... } // from try @ 0054c694 with catch @ 0054cc7c */
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0054c618 with catch @ 0054ccac */
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  puVar4 = (undefined *)(*(long *)param_1 + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(*(long *)param_1 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
                    /* catch() { ... } // from try @ 0054c0a0 with catch @ 0054cd34 */
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
                    /* catch() { ... } // from try @ 0054c8b0 with catch @ 0054cd3c
                       catch() { ... } // from try @ 0054c920 with catch @ 0054cd3c */
                    /* catch() { ... } // from try @ 0054c348 with catch @ 0054cd40 */
    if (iVar8 < 1) {
      operator_delete(puVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0054c0a8 with catch @ 0054ccfc */
  return;
}



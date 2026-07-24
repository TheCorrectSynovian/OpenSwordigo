/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00344a64
 * Function: __gnu_cxx::new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>::destroy
 * Signature: undefined __thiscall destroy(new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __gnu_cxx::new_allocator<std::pair<std::string const, boost::function<Caver::Component* ()> >
   >::destroy(std::pair<std::string const, boost::function<Caver::Component* ()> >*) */

void __thiscall
__gnu_cxx::new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>::destroy
          (new_allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>> *this,
          pair *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(param_1 + 0x10,param_1 + 0x10,2);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar4 = (undefined *)(*(long *)param_1 + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
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



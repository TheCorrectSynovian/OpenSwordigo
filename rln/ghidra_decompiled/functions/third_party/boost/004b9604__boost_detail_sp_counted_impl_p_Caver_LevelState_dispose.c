/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b9604
 * Function: boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::LevelState> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::LevelState>::dispose
          (sp_counted_impl_p<Caver::LevelState> *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  plVar8 = *(long **)(this + 0x18);
  if (plVar8 != (long *)0x0) {
    std::
    _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
    ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                *)(plVar8 + 2),(_Rb_tree_node *)plVar8[4]);
                    /* try { // try from 004b963c to 005b965b has its CatchHandler @ 004b99dc */
    puVar4 = (undefined *)(*plVar8 + -0x18);
    if (puVar4 != PTR_DAT_007e5de8) {
      piVar6 = (int *)(*plVar8 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete(puVar4);
      }
    }
    operator_delete(plVar8);
  }
                    /* try { // try from 004b965c to 005b9663 has its CatchHandler @ 004b99c8 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004b966c to 005b9673 has its CatchHandler @ 004b99dc */
  return;
}



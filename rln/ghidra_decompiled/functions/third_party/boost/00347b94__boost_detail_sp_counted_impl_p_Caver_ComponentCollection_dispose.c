/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347b94
 * Function: boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ComponentCollection> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ComponentCollection>::dispose
          (sp_counted_impl_p<Caver::ComponentCollection> *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(this + 0x18);
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)*plVar4;
    plVar1 = (long *)plVar4[1];
    if (plVar5 != plVar1) {
      do {
        plVar3 = (long *)*plVar5;
        if ((plVar3 != (long *)0x0) &&
           (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar3 + 8))();
        }
        plVar5 = plVar5 + 1;
      } while (plVar1 != plVar5);
      plVar5 = (long *)*plVar4;
    }
    if (plVar5 != (long *)0x0) {
      operator_delete(plVar5);
    }
    operator_delete(plVar4);
    return;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e418
 * Function: boost::detail::sp_counted_impl_p<Caver::Sprite>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Sprite> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Sprite>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Sprite>::dispose(sp_counted_impl_p<Caver::Sprite> *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
    if ((void *)plVar3[7] != (void *)0x0) {
      operator_delete__((void *)plVar3[7]);
    }
    if ((void *)plVar3[4] != (void *)0x0) {
      operator_delete__((void *)plVar3[4]);
    }
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(plVar3);
    return;
  }
  return;
}



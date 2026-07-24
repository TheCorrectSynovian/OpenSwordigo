/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005291a4
 * Function: boost::detail::sp_counted_impl_p<Caver::MapViewNode>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::MapViewNode> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::MapViewNode>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::MapViewNode>::dispose
          (sp_counted_impl_p<Caver::MapViewNode> *this)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    plVar3 = *(long **)((long)pvVar2 + 8);
    if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* catch() { ... } // from try @ 00529234 with catch @ 00529204 */
    operator_delete(pvVar2);
    return;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003397b0
 * Function: boost::detail::sp_counted_impl_p<Caver::Polygon>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Polygon> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Polygon>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Polygon>::dispose(sp_counted_impl_p<Caver::Polygon> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}



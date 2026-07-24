/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056256c
 * Function: boost::detail::sp_counted_impl_p<Caver::PointLightGroup>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PointLightGroup> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PointLightGroup>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PointLightGroup>::dispose
          (sp_counted_impl_p<Caver::PointLightGroup> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}



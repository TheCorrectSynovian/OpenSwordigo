/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031be74
 * Function: boost::detail::sp_counted_impl_p<bool>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<bool> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<bool>::dispose() */

void __thiscall boost::detail::sp_counted_impl_p<bool>::dispose(sp_counted_impl_p<bool> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



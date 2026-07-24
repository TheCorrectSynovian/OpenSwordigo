/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031be58
 * Function: boost::detail::sp_counted_impl_p<int>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<int> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<int>::dispose() */

void __thiscall boost::detail::sp_counted_impl_p<int>::dispose(sp_counted_impl_p<int> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315a6c
 * Function: boost::detail::sp_counted_impl_p<Caver::Circle>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Circle> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Circle>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Circle>::dispose(sp_counted_impl_p<Caver::Circle> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



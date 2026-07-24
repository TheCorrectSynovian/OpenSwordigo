/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588b30
 * Function: boost::detail::sp_counted_impl_p<Caver::Vector3>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Vector3> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Vector3>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Vector3>::dispose(sp_counted_impl_p<Caver::Vector3> *this)

{
                    /* catch() { ... } // from try @ 00588a4c with catch @ 00588b30 */
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



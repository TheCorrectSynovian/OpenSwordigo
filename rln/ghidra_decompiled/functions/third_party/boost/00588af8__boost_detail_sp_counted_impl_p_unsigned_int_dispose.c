/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00588af8
 * Function: boost::detail::sp_counted_impl_p<unsigned_int>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<unsigned_int> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<unsigned int>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<unsigned_int>::dispose(sp_counted_impl_p<unsigned_int> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
                    /* try { // try from 00588b04 to 00688b93 has its CatchHandler @ 005888e8 */
  return;
}



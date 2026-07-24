/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc7c0
 * Function: boost::detail::sp_counted_impl_p<Caver::Vector2>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Vector2> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Vector2>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Vector2>::dispose(sp_counted_impl_p<Caver::Vector2> *this)

{
                    /* try { // try from 004dc7c0 to 005dc7c3 has its CatchHandler @ 004dc800 */
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



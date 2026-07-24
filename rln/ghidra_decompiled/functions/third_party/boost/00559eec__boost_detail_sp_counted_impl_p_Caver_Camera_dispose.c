/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559eec
 * Function: boost::detail::sp_counted_impl_p<Caver::Camera>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Camera> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Camera>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Camera>::dispose(sp_counted_impl_p<Caver::Camera> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
                    /* try { // try from 00559ef4 to 00659eff has its CatchHandler @ 0055a2e4 */
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



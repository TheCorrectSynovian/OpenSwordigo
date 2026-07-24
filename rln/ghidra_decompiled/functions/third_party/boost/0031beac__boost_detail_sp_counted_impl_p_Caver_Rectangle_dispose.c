/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031beac
 * Function: boost::detail::sp_counted_impl_p<Caver::Rectangle>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Rectangle> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Rectangle>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Rectangle>::dispose
          (sp_counted_impl_p<Caver::Rectangle> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}



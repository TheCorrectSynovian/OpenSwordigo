/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8e40
 * Function: boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<unsigned short*, boost::checked_array_deleter<unsigned short>
   >::dispose() */

void __thiscall
boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::
dispose(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> *this)

{
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
    return;
  }
  return;
}



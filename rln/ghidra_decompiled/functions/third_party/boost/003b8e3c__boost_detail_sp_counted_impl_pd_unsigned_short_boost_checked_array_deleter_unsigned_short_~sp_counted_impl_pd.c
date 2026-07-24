/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8e3c
 * Function: boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::~sp_counted_impl_pd
 * Signature: undefined __thiscall ~sp_counted_impl_pd(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<unsigned short*, boost::checked_array_deleter<unsigned short>
   >::~sp_counted_impl_pd() */

void __thiscall
boost::detail::sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>::
~sp_counted_impl_pd(sp_counted_impl_pd<unsigned_short*,boost::checked_array_deleter<unsigned_short>>
                    *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



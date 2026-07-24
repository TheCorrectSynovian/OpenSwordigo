/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005503f0
 * Function: boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::~sp_counted_impl_pd
 * Signature: undefined __thiscall ~sp_counted_impl_pd(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_pd<Caver::FloatDataBuffer*,
   boost::checked_array_deleter<Caver::FloatDataBuffer> >::~sp_counted_impl_pd() */

void __thiscall
boost::detail::
sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>::
~sp_counted_impl_pd(sp_counted_impl_pd<Caver::FloatDataBuffer*,boost::checked_array_deleter<Caver::FloatDataBuffer>>
                    *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



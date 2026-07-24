/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00559ee8
 * Function: boost::detail::sp_counted_impl_p<Caver::Camera>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::Camera> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Camera>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Camera>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::Camera> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



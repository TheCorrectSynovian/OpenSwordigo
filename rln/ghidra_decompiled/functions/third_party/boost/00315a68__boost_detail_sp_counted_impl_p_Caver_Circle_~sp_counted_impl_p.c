/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315a68
 * Function: boost::detail::sp_counted_impl_p<Caver::Circle>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::Circle> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Circle>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Circle>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::Circle> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



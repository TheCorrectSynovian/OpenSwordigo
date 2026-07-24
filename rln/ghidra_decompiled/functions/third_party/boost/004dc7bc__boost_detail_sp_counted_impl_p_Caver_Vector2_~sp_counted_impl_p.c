/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc7bc
 * Function: boost::detail::sp_counted_impl_p<Caver::Vector2>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::Vector2> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Vector2>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Vector2>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::Vector2> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031bea8
 * Function: boost::detail::sp_counted_impl_p<Caver::Rectangle>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::Rectangle> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Rectangle>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Rectangle>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::Rectangle> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



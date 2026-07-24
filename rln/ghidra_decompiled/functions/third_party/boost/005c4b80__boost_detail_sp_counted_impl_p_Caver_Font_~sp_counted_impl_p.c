/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c4b80
 * Function: boost::detail::sp_counted_impl_p<Caver::Font>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::Font> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Font>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Font>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::Font> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



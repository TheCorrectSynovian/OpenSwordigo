/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311f20
 * Function: boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::PlayerProfile> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PlayerProfile>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::PlayerProfile> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
}



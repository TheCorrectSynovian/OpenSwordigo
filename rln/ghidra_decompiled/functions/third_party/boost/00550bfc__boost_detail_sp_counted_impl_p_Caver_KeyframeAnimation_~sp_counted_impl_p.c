/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00550bfc
 * Function: boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::KeyframeAnimation> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::KeyframeAnimation>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::KeyframeAnimation> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
                    /* try { // try from 00550bfc to 00650c07 has its CatchHandler @ 00550c14 */
}



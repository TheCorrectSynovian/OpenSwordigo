/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004644dc
 * Function: boost::detail::sp_counted_impl_p<Caver::GameSceneController>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::GameSceneController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameSceneController>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameSceneController>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::GameSceneController> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
                    /* try { // try from 004644dc to 005644ef has its CatchHandler @ 00465034 */
}



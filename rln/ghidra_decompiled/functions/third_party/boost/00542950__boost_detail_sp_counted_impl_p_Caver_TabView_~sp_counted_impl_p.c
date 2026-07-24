/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00542950
 * Function: boost::detail::sp_counted_impl_p<Caver::TabView>::~sp_counted_impl_p
 * Signature: undefined __thiscall ~sp_counted_impl_p(sp_counted_impl_p<Caver::TabView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::TabView>::~sp_counted_impl_p() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::TabView>::~sp_counted_impl_p
          (sp_counted_impl_p<Caver::TabView> *this)

{
  (*(code *)PTR_operator_delete_007de188)();
  return;
                    /* try { // try from 00542950 to 00642977 has its CatchHandler @ 00542980 */
}



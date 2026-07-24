/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046fd78
 * Function: boost::detail::sp_counted_impl_p<Caver::ChooseAgeView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ChooseAgeView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ChooseAgeView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ChooseAgeView>::dispose
          (sp_counted_impl_p<Caver::ChooseAgeView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 0046fd84 to 0056fd97 has its CatchHandler @ 00470260 */
                    /* WARNING: Could not recover jumptable at 0x0046fd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



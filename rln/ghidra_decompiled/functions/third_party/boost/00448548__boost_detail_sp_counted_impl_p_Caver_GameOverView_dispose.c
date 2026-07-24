/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00448548
 * Function: boost::detail::sp_counted_impl_p<Caver::GameOverView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameOverView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameOverView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameOverView>::dispose
          (sp_counted_impl_p<Caver::GameOverView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00448554 to 00548563 has its CatchHandler @ 0044cf40 */
                    /* WARNING: Could not recover jumptable at 0x00448558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



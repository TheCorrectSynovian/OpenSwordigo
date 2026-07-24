/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048dd28
 * Function: boost::detail::sp_counted_impl_p<Caver::CreditsView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::CreditsView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::CreditsView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::CreditsView>::dispose
          (sp_counted_impl_p<Caver::CreditsView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048dd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
                    /* try { // try from 0048dd3c to 0058dd3f has its CatchHandler @ 0048dd68 */
  return;
}



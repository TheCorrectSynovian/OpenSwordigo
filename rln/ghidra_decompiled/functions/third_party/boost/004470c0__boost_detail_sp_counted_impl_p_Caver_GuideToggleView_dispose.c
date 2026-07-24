/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004470c0
 * Function: boost::detail::sp_counted_impl_p<Caver::GuideToggleView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GuideToggleView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GuideToggleView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GuideToggleView>::dispose
          (sp_counted_impl_p<Caver::GuideToggleView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004470d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
                    /* try { // try from 004470d4 to 005470d7 has its CatchHandler @ 00447160 */
  return;
}



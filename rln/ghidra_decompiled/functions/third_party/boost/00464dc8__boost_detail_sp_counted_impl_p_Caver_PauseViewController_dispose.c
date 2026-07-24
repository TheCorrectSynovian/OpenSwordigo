/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464dc8
 * Function: boost::detail::sp_counted_impl_p<Caver::PauseViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PauseViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PauseViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PauseViewController>::dispose
          (sp_counted_impl_p<Caver::PauseViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0046479c with catch @ 00464dd4 */
                    /* WARNING: Could not recover jumptable at 0x00464dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00464740 with catch @ 00464dd8 */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



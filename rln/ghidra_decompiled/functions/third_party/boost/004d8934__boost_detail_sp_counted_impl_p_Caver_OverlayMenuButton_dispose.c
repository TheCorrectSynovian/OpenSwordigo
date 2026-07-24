/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d8934
 * Function: boost::detail::sp_counted_impl_p<Caver::OverlayMenuButton>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::OverlayMenuButton> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::OverlayMenuButton>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::OverlayMenuButton>::dispose
          (sp_counted_impl_p<Caver::OverlayMenuButton> *this)

{
                    /* catch() { ... } // from try @ 004d8988 with catch @ 004d8938 */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004d8944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



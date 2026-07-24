/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045098c
 * Function: boost::detail::sp_counted_impl_p<Caver::GameOverlayView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameOverlayView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameOverlayView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameOverlayView>::dispose
          (sp_counted_impl_p<Caver::GameOverlayView> *this)

{
                    /* try { // try from 00450990 to 00550993 has its CatchHandler @ 004509a4 */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 00450994 to 005509b7 has its CatchHandler @ 00450978 */
                    /* WARNING: Could not recover jumptable at 0x0045099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



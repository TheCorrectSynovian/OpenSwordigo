/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e6b8
 * Function: boost::detail::sp_counted_impl_p<Caver::GUILoadingView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUILoadingView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUILoadingView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUILoadingView>::dispose
          (sp_counted_impl_p<Caver::GUILoadingView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 0043e6c0 to 0053e6fb has its CatchHandler @ 0043eab0 */
                    /* WARNING: Could not recover jumptable at 0x0043e6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



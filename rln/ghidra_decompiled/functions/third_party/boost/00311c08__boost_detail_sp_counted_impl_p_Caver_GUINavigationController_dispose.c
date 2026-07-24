/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00311c08
 * Function: boost::detail::sp_counted_impl_p<Caver::GUINavigationController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUINavigationController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUINavigationController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUINavigationController>::dispose
          (sp_counted_impl_p<Caver::GUINavigationController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00311c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



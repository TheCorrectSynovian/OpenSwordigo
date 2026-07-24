/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004705a4
 * Function: boost::detail::sp_counted_impl_p<Caver::PauseView>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::PauseView> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::PauseView>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::PauseView>::dispose
          (sp_counted_impl_p<Caver::PauseView> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004705b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x40))();
    return;
  }
  return;
}



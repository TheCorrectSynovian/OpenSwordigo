/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd018
 * Function: boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ProfileManagerLoadingViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ProfileManagerLoadingViewController>::dispose
          (sp_counted_impl_p<Caver::ProfileManagerLoadingViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005bd028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



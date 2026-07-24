/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00464f0c
 * Function: boost::detail::sp_counted_impl_p<Caver::GameMenuViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameMenuViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameMenuViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameMenuViewController>::dispose
          (sp_counted_impl_p<Caver::GameMenuViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00464f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046ffa4
 * Function: boost::detail::sp_counted_impl_p<Caver::ProfileSelectionViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::ProfileSelectionViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::ProfileSelectionViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::ProfileSelectionViewController>::dispose
          (sp_counted_impl_p<Caver::ProfileSelectionViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046ffb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



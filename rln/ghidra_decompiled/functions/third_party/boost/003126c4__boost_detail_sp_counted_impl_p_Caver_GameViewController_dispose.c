/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003126c4
 * Function: boost::detail::sp_counted_impl_p<Caver::GameViewController>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GameViewController> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GameViewController>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GameViewController>::dispose
          (sp_counted_impl_p<Caver::GameViewController> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003126d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



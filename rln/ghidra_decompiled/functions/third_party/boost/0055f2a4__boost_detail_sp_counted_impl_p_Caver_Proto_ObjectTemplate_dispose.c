/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055f2a4
 * Function: boost::detail::sp_counted_impl_p<Caver::Proto::ObjectTemplate>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Proto::ObjectTemplate> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Proto::ObjectTemplate>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Proto::ObjectTemplate>::dispose
          (sp_counted_impl_p<Caver::Proto::ObjectTemplate> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0055f2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



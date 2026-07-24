/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bce1c
 * Function: boost::detail::sp_counted_impl_p<Caver::Proto::PlayerProfile>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::Proto::PlayerProfile> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::Proto::PlayerProfile>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::Proto::PlayerProfile>::dispose
          (sp_counted_impl_p<Caver::Proto::PlayerProfile> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 005bcd60 with catch @ 005bce24 */
                    /* WARNING: Could not recover jumptable at 0x005bce2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
                    /* catch() { ... } // from try @ 005bc6ec with catch @ 005bce30 */
  return;
}



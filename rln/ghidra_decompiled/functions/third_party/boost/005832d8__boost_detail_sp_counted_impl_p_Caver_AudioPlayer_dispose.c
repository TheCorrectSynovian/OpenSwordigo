/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005832d8
 * Function: boost::detail::sp_counted_impl_p<Caver::AudioPlayer>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::AudioPlayer> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::AudioPlayer>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::AudioPlayer>::dispose
          (sp_counted_impl_p<Caver::AudioPlayer> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005832e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



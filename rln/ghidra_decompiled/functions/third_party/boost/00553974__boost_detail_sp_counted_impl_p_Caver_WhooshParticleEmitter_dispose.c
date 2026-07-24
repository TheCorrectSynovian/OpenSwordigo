/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553974
 * Function: boost::detail::sp_counted_impl_p<Caver::WhooshParticleEmitter>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::WhooshParticleEmitter> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::WhooshParticleEmitter>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::WhooshParticleEmitter>::dispose
          (sp_counted_impl_p<Caver::WhooshParticleEmitter> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00553984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



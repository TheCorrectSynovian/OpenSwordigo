/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e2a3c
 * Function: boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::FountainParticleEmitter> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::FountainParticleEmitter>::dispose
          (sp_counted_impl_p<Caver::FountainParticleEmitter> *this)

{
                    /* catch() { ... } // from try @ 004e2a90 with catch @ 004e2a40 */
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004e2a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



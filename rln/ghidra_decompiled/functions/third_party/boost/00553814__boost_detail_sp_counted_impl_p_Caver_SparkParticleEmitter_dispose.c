/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553814
 * Function: boost::detail::sp_counted_impl_p<Caver::SparkParticleEmitter>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::SparkParticleEmitter> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::SparkParticleEmitter>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::SparkParticleEmitter>::dispose
          (sp_counted_impl_p<Caver::SparkParticleEmitter> *this)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 0055381c to 00653823 has its CatchHandler @ 00553b34 */
                    /* WARNING: Could not recover jumptable at 0x00553824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00553824 to 0065382f has its CatchHandler @ 00553ac0 */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}



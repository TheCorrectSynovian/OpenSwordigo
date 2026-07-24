/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041e250
 * Function: Caver::Proto::ParticleEmitterComponent::SharedDtor
 * Signature: undefined __thiscall SharedDtor(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::SharedDtor() */

void __thiscall Caver::Proto::ParticleEmitterComponent::SharedDtor(ParticleEmitterComponent *this)

{
                    /* catch() { ... } // from try @ 0041e244 with catch @ 0041e264 */
  if (*(ParticleEmitterComponent **)PTR_default_instance__007e5ba8 != this) {
    if (*(long **)(this + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x78) + 8))();
    }
    if (*(long **)(this + 0x80) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041e2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x80) + 8))();
      return;
    }
  }
  return;
}



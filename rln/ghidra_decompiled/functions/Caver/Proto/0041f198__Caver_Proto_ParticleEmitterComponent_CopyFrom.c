/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f198
 * Function: Caver::Proto::ParticleEmitterComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ParticleEmitterComponent * this, ParticleEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::CopyFrom(Caver::Proto::ParticleEmitterComponent const&)
    */

void __thiscall
Caver::Proto::ParticleEmitterComponent::CopyFrom
          (ParticleEmitterComponent *this,ParticleEmitterComponent *param_1)

{
                    /* catch() { ... } // from try @ 0041ebe0 with catch @ 0041f1a4 */
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
                    /* catch() { ... } // from try @ 0041ebbc with catch @ 0041f1dc */
                    /* catch() { ... } // from try @ 0041eb58 with catch @ 0041f1e0 */
  return;
}



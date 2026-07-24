/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041fb00
 * Function: Caver::Proto::ParticleComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ParticleComponent * this, ParticleComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::CopyFrom(Caver::Proto::ParticleComponent const&) */

void __thiscall
Caver::Proto::ParticleComponent::CopyFrom(ParticleComponent *this,ParticleComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}



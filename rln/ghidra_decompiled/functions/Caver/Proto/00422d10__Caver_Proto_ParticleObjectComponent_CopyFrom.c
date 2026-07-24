/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422d10
 * Function: Caver::Proto::ParticleObjectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ParticleObjectComponent * this, ParticleObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::CopyFrom(Caver::Proto::ParticleObjectComponent const&) */

void __thiscall
Caver::Proto::ParticleObjectComponent::CopyFrom
          (ParticleObjectComponent *this,ParticleObjectComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}



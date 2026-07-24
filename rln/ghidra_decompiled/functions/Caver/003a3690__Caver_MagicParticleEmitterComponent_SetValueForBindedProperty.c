/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a3690
 * Function: Caver::MagicParticleEmitterComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(MagicParticleEmitterComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::MagicParticleEmitterComponent::SetValueForBindedProperty(int,
   Caver::BindingValue const&) */

void __thiscall
Caver::MagicParticleEmitterComponent::SetValueForBindedProperty
          (MagicParticleEmitterComponent *this,int param_1,BindingValue *param_2)

{
  ParticleEmitterComponent::SetValueForBindedProperty
            ((ParticleEmitterComponent *)(this + -0x10),param_1,param_2);
  return;
}



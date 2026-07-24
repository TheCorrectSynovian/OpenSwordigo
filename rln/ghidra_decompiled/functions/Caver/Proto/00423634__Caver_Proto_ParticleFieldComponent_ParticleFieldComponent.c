/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423634
 * Function: Caver::Proto::ParticleFieldComponent::ParticleFieldComponent
 * Signature: undefined __thiscall ParticleFieldComponent(ParticleFieldComponent * this, ParticleFieldComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::ParticleFieldComponent(Caver::Proto::ParticleFieldComponent
   const&) */

void __thiscall
Caver::Proto::ParticleFieldComponent::ParticleFieldComponent
          (ParticleFieldComponent *this,ParticleFieldComponent *param_1)

{
  *(undefined **)this = PTR_vtable_007e6b68 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}



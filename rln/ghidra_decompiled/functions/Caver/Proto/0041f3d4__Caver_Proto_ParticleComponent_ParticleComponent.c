/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f3d4
 * Function: Caver::Proto::ParticleComponent::ParticleComponent
 * Signature: undefined __thiscall ParticleComponent(ParticleComponent * this, ParticleComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::ParticleComponent(Caver::Proto::ParticleComponent const&) */

void __thiscall
Caver::Proto::ParticleComponent::ParticleComponent
          (ParticleComponent *this,ParticleComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e5a48;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_texture_name__007e6170;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  MergeFrom(this,param_1);
  return;
}



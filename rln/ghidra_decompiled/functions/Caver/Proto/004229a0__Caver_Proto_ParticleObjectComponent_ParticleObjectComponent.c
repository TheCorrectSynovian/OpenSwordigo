/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004229a0
 * Function: Caver::Proto::ParticleObjectComponent::ParticleObjectComponent
 * Signature: undefined __thiscall ParticleObjectComponent(ParticleObjectComponent * this, ParticleObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::ParticleObjectComponent(Caver::Proto::ParticleObjectComponent
   const&) */

void __thiscall
Caver::Proto::ParticleObjectComponent::ParticleObjectComponent
          (ParticleObjectComponent *this,ParticleObjectComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6080;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}



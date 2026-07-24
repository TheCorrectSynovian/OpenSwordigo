/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f39c
 * Function: Caver::Proto::ParticleComponent::ParticleComponent
 * Signature: undefined __thiscall ParticleComponent(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleComponent::ParticleComponent() */

void __thiscall Caver::Proto::ParticleComponent::ParticleComponent(ParticleComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e5a48;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_texture_name__007e6170;
                    /* try { // try from 0041f3b0 to 0051f3bf has its CatchHandler @ 0041f4bc */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}



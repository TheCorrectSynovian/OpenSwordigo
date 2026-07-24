/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4da0
 * Function: Caver::ParticleComponent::ParticleComponent
 * Signature: undefined __thiscall ParticleComponent(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::ParticleComponent() */

void __thiscall Caver::ParticleComponent::ParticleComponent(ParticleComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  ParticleComponent *pPVar3;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ParticleComponent)0x0;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x50) = 0;
  puVar2 = PTR_vtable_007e6850;
  *(undefined **)(this + 0x38) = puVar1 + 0x18;
  pPVar3 = this + 0x48;
  *(undefined8 *)pPVar3 = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x70) = puVar1 + 0x18;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(ParticleComponent **)(this + 0x58) = pPVar3;
  *(ParticleComponent **)(this + 0x60) = pPVar3;
  *(undefined **)(this + 0x18) = puVar2 + 0x168;
  *(undefined **)(this + 0x10) = puVar2 + 0x128;
  *(undefined8 *)(this + 0x88) = 0xffffffff00000000;
  return;
}



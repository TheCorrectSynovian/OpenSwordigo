/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac6dc
 * Function: Caver::ParticleFieldComponent::ParticleFieldComponent
 * Signature: undefined __thiscall ParticleFieldComponent(ParticleFieldComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleFieldComponent::ParticleFieldComponent() */

void __thiscall Caver::ParticleFieldComponent::ParticleFieldComponent(ParticleFieldComponent *this)

{
  undefined *puVar1;
  ParticleFieldComponent *pPVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (ParticleFieldComponent)0x0;
  puVar1 = PTR_vtable_007e6608;
  *(undefined **)(this + 0x38) = PTR_DAT_007e5de8 + 0x18;
  pPVar2 = this + 0x48;
  *(undefined8 *)pPVar2 = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x50) = 0;
  *(ParticleFieldComponent **)(this + 0x58) = pPVar2;
  *(ParticleFieldComponent **)(this + 0x60) = pPVar2;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)(this + 0x18) = puVar1 + 0x168;
  *(undefined **)(this + 0x10) = puVar1 + 0x128;
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041dca8
 * Function: Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent
 * Signature: undefined __thiscall ParticleEmitterComponent(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent() */

void __thiscall
Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(ParticleEmitterComponent *this)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  *(ParticleEmitterComponent **)(this + 0x20) = this + 0x30;
  uVar1 = DAT_0068b470;
  *(ParticleEmitterComponent **)(this + 0x40) = this + 0x58;
  *(undefined4 *)(this + 0x50) = 4;
  puVar2 = PTR_vtable_007e6068;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ParticleEmitterComponent)0x0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x88) = 0;
  return;
}



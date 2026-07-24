/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041cb5c
 * Function: Caver::Proto::ParticleEmitter::ParticleEmitter
 * Signature: undefined __thiscall ParticleEmitter(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::ParticleEmitter() */

void __thiscall Caver::Proto::ParticleEmitter::ParticleEmitter(ParticleEmitter *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e5278 + 0x10;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(ParticleEmitter **)(this + 0x30) = this + 0x40;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



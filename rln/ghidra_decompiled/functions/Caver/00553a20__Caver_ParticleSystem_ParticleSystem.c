/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00553a20
 * Function: Caver::ParticleSystem::ParticleSystem
 * Signature: undefined __thiscall ParticleSystem(ParticleSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::ParticleSystem() */

void __thiscall Caver::ParticleSystem::ParticleSystem(ParticleSystem *this)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  VertexArrayObject::VertexArrayObject((VertexArrayObject *)(this + 0x48));
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0xa0] = (ParticleSystem)0x1;
  *(long *)(this + 0xac) = auVar1._8_8_;
  *(long *)(this + 0xa4) = auVar1._0_8_;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  this[0xb8] = (ParticleSystem)0x0;
  return;
}



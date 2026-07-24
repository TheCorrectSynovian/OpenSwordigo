/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041dd14
 * Function: Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent
 * Signature: undefined __thiscall ParticleEmitterComponent(ParticleEmitterComponent * this, ParticleEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent
   const&) */

void __thiscall
Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent
          (ParticleEmitterComponent *this,ParticleEmitterComponent *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
  puVar1 = PTR_vtable_007e6068 + 0x10;
  *(undefined4 *)(this + 0x50) = 4;
  *(ParticleEmitterComponent **)(this + 0x40) = this + 0x58;
  *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 0041dd54 to 0051dd67 has its CatchHandler @ 0041de54 */
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (ParticleEmitterComponent)0x0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(ParticleEmitterComponent **)(this + 0x20) = this + 0x30;
  *(undefined **)this = puVar1;
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 0041dd6c to 0051dd7b has its CatchHandler @ 0041de20 */
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x88) = 0;
  MergeFrom(this,param_1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ab128
 * Function: Caver::ParticleEmitterComponent::AddParticle
 * Signature: undefined __thiscall AddParticle(ParticleEmitterComponent * this, Particle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::AddParticle(Caver::Particle const&) */

undefined8 __thiscall
Caver::ParticleEmitterComponent::AddParticle(ParticleEmitterComponent *this,Particle *param_1)

{
  ParticleSystem *this_00;
  long *plVar1;
  undefined8 uVar2;
  ParticleEmitterComponent *pPVar3;
  long lVar4;
  
  pPVar3 = *(ParticleEmitterComponent **)(this + 0x118);
  if (pPVar3 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
    pPVar3 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar3 == (ParticleEmitterComponent *)0x0) || (pPVar3 == this)) {
    this_00 = *(ParticleSystem **)(this + 0x148);
    plVar1 = *(long **)(this + 0x150);
  }
  else {
    this_00 = *(ParticleSystem **)(pPVar3 + 0x148);
    plVar1 = *(long **)(pPVar3 + 0x150);
  }
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  uVar2 = ParticleSystem::AddParticle(this_00,param_1);
  if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar4 = plVar1[2];
    plVar1[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return uVar2;
}



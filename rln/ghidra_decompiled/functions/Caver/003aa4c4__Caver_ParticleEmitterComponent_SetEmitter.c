/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aa4c4
 * Function: Caver::ParticleEmitterComponent::SetEmitter
 * Signature: undefined __thiscall SetEmitter(ParticleEmitterComponent * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::SetEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&) */

void __thiscall
Caver::ParticleEmitterComponent::SetEmitter(ParticleEmitterComponent *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  ParticleEmitterComponent PVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = *(undefined8 *)param_1;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x160);
  *(undefined8 *)(this + 0x158) = uVar1;
  *(long *)(this + 0x160) = lVar3;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      PVar2 = this[0x104];
      goto joined_r0x003aa55c;
    }
  }
  PVar2 = this[0x104];
joined_r0x003aa55c:
  if ((PVar2 != (ParticleEmitterComponent)0x0) && (*(long *)(this + 0x158) != 0)) {
    PrepareEmitter(this,(shared_ptr *)(this + 0x158));
    return;
  }
  return;
}



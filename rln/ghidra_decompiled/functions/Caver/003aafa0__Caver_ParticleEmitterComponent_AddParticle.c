/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aafa0
 * Function: Caver::ParticleEmitterComponent::AddParticle
 * Signature: undefined __thiscall AddParticle(ParticleEmitterComponent * this, int param_1, Vector3 * param_2, Vector3 * param_3, float param_4, Color * param_5, float param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleEmitterComponent::AddParticle(int, Caver::Vector3 const&, Caver::Vector3 const&,
   float, Caver::Color const&, float) */

undefined8 __thiscall
Caver::ParticleEmitterComponent::AddParticle
          (ParticleEmitterComponent *this,int param_1,Vector3 *param_2,Vector3 *param_3,
          float param_4,Color *param_5,float param_6)

{
  ParticleSystem *this_00;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ParticleEmitterComponent *pPVar4;
  long lVar5;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  float local_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_54 = _UNK_006896d8;
  local_5c = _DAT_006896d0;
  local_4c = 0x3f8000003f800000;
  local_40 = 0;
  local_7c = *(undefined8 *)param_2;
  local_74 = *(undefined4 *)(param_2 + 8);
  local_70 = *(undefined8 *)param_3;
  local_68 = *(undefined4 *)(param_3 + 8);
  local_64 = *(undefined4 *)param_5;
  pPVar4 = *(ParticleEmitterComponent **)(this + 0x118);
  local_80 = param_1;
  local_60 = param_4;
  local_44 = param_6;
  if (pPVar4 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
    pPVar4 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar4 == (ParticleEmitterComponent *)0x0) || (pPVar4 == this)) {
    this_00 = *(ParticleSystem **)(this + 0x148);
    plVar1 = *(long **)(this + 0x150);
  }
  else {
    this_00 = *(ParticleSystem **)(pPVar4 + 0x148);
    plVar1 = *(long **)(pPVar4 + 0x150);
  }
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  uVar3 = ParticleSystem::AddParticle(this_00,(Particle *)&local_80);
  if ((plVar1 != (long *)0x0) && (lVar5 = plVar1[1], plVar1[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar5 = plVar1[2];
    plVar1[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



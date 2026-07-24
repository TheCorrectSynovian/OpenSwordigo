/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aa5b4
 * Function: Caver::ParticleEmitterComponent::Prepare
 * Signature: undefined __thiscall Prepare(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::Prepare() */

void __thiscall Caver::ParticleEmitterComponent::Prepare(ParticleEmitterComponent *this)

{
  ParticleSystem *pPVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ParticleComponent *this_00;
  ParticleEmitterComponent *pPVar6;
  ParticleEmitterComponent *pPVar7;
  
  RegisterLibrary(this);
  lVar3 = SceneObject::ComponentWithInterface
                    (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e6220);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar4 = *(long **)(this + 0x138);
  *(long *)(this + 0x138) = lVar3;
  if ((plVar4 == (long *)0x0) ||
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 != 0)) {
    lVar3 = *(long *)(this + 0x118);
  }
  else {
    (**(code **)(*plVar4 + 8))();
    lVar3 = *(long *)(this + 0x118);
  }
  if ((lVar3 == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this),
     *(long *)(this + 0x118) == 0)) {
    ParticleSystem::InitWithMaxParticles(*(ParticleSystem **)(this + 0x148),*(int *)(this + 0x144));
    lVar3 = *(long *)(this + 0x148);
    *(undefined8 *)(lVar3 + 0x94) = *(undefined8 *)(this + 0x16c);
    *(undefined4 *)(lVar3 + 0x9c) = *(undefined4 *)(this + 0x174);
    *(bool *)(lVar3 + 0x91) =
         DAT_00683488 <
         *(float *)(this + 0x16c) * *(float *)(this + 0x16c) +
         *(float *)(this + 0x170) * *(float *)(this + 0x170) +
         *(float *)(this + 0x174) * *(float *)(this + 0x174);
  }
  if (0 < *(int *)(this + 0x70)) {
    lVar3 = 0;
    pPVar7 = this + 0x78;
    do {
      lVar5 = (**(code **)(*(long *)pPVar7 + 0x18))(pPVar7,this);
      if (lVar5 != 0) {
        this_00 = (ParticleComponent *)(**(code **)(*(long *)pPVar7 + 0x18))(pPVar7,this);
        pPVar6 = *(ParticleEmitterComponent **)(this + 0x118);
        if (pPVar6 == (ParticleEmitterComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
          pPVar6 = *(ParticleEmitterComponent **)(this + 0x118);
          if (pPVar6 != (ParticleEmitterComponent *)0x0) goto LAB_003aa6f0;
LAB_003aa718:
          pPVar1 = *(ParticleSystem **)(this + 0x148);
          plVar4 = *(long **)(this + 0x150);
        }
        else {
          if (pPVar6 == (ParticleEmitterComponent *)0x0) goto LAB_003aa718;
LAB_003aa6f0:
          if (pPVar6 == this) goto LAB_003aa718;
          pPVar1 = *(ParticleSystem **)(pPVar6 + 0x148);
          plVar4 = *(long **)(pPVar6 + 0x150);
        }
        if (plVar4 != (long *)0x0) {
          plVar4[1] = plVar4[1] + 1;
        }
        ParticleComponent::AddTypeToParticleSystem(this_00,pPVar1);
        if ((plVar4 != (long *)0x0) && (lVar5 = plVar4[1], plVar4[1] = lVar5 + -1, lVar5 + -1 == 0))
        {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          lVar5 = plVar4[2];
          plVar4[2] = lVar5 + -1;
          if (lVar5 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
      }
      lVar3 = lVar3 + 1;
      pPVar7 = pPVar7 + 0x18;
    } while (lVar3 < *(int *)(this + 0x70));
  }
  if (*(long *)(this + 0x158) != 0) {
    PrepareEmitter(this,(shared_ptr *)(this + 0x158));
  }
  UpdateLocalTransform(this);
  this[0x104] = (ParticleEmitterComponent)0x1;
  return;
}



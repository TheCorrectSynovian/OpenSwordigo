/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003aa958
 * Function: Caver::ParticleEmitterComponent::PrepareEmitter
 * Signature: undefined __thiscall PrepareEmitter(ParticleEmitterComponent * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::PrepareEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
    */

void __thiscall
Caver::ParticleEmitterComponent::PrepareEmitter(ParticleEmitterComponent *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ParticleEmitterComponent *pPVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pPVar6 = *(ParticleEmitterComponent **)(this + 0x118);
  lVar8 = *(long *)param_1;
  if (pPVar6 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this);
    pPVar6 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar6 == (ParticleEmitterComponent *)0x0) || (pPVar6 == this)) {
    uVar1 = *(undefined8 *)(this + 0x148);
    plVar3 = *(long **)(this + 0x150);
  }
  else {
    uVar1 = *(undefined8 *)(pPVar6 + 0x148);
    plVar3 = *(long **)(pPVar6 + 0x150);
  }
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 2;
  }
  plVar7 = *(long **)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 8) = uVar1;
  *(long **)(lVar8 + 0x10) = plVar3;
  if ((plVar7 != (long *)0x0) && (lVar8 = plVar7[1], plVar7[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar8 = plVar7[2];
    plVar7[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[1], plVar3[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar8 = plVar3[2];
    plVar3[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (0 < *(int *)(this + 0x70)) {
    lVar8 = 0;
    pPVar6 = this + 0x78;
    do {
      lVar5 = (**(code **)(*(long *)pPVar6 + 0x18))(pPVar6,this);
      if (lVar5 != 0) {
        lVar9 = *(long *)param_1;
        lVar5 = (**(code **)(*(long *)pPVar6 + 0x18))(pPVar6,this);
        local_5c = *(undefined4 *)(lVar5 + 0x8c);
        puVar2 = *(undefined4 **)(lVar9 + 0x28);
        if (puVar2 == *(undefined4 **)(lVar9 + 0x30)) {
          std::vector<int,std::allocator<int>>::_M_insert_aux
                    ((vector<int,std::allocator<int>> *)(lVar9 + 0x20),puVar2,&local_5c);
        }
        else {
          *puVar2 = local_5c;
          *(undefined4 **)(lVar9 + 0x28) = puVar2 + 1;
        }
      }
      lVar8 = lVar8 + 1;
      pPVar6 = pPVar6 + 0x18;
    } while (lVar8 < *(int *)(this + 0x70));
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



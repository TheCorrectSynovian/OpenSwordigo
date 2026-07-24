/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00392454
 * Function: Caver::AttackComponent::StartAttack
 * Signature: undefined __thiscall StartAttack(AttackComponent * this, intrusive_ptr * param_1, SceneObject * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,
   Caver::SceneObject*) */

void __thiscall
Caver::AttackComponent::StartAttack
          (AttackComponent *this,intrusive_ptr *param_1,SceneObject *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  SoundEffectComponent *this_00;
  long lVar5;
  long lVar6;
  long lVar7;
  ProgramState *local_58;
  long *local_50;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if (this[0x100] != (AttackComponent)0x0) goto LAB_0039264c;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined2 *)(this + 0x125) = 0;
  this[0x100] = (AttackComponent)0x1;
  lVar6 = *(long *)param_1;
  lVar7 = *(long *)(this + 0xf8);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  plVar3 = *(long **)(lVar7 + 0x10);
  *(long *)(lVar7 + 0x10) = lVar6;
  if ((plVar3 == (long *)0x0) ||
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 != 0)) {
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 == (long *)0x0) goto LAB_003924dc;
LAB_00392510:
    lVar6 = *(long *)(this + 0xf8);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
    }
    plVar4 = *(long **)(lVar6 + 0x18);
    *(long **)(lVar6 + 0x18) = plVar3;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    if ((plVar3 == (long *)0x0) ||
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 != 0)) {
      plVar3 = *(long **)(this + 0x80);
    }
    else {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = *(long **)(this + 0x80);
    }
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar3 = *(long **)(this + 0x80);
    }
    lVar6 = (**(code **)(*plVar3 + 0x108))();
    *(undefined4 *)(lVar6 + 0xc) = 0;
    *(undefined2 *)(*(long *)(this + 0xf8) + 0x2c) = 0x100;
    lVar6 = *(long *)(this + 0xe8);
  }
  else {
    (**(code **)(*plVar3 + 8))();
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 != (long *)0x0) goto LAB_00392510;
LAB_003924dc:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
    if (plVar3 != (long *)0x0) goto LAB_00392510;
    lVar6 = *(long *)(this + 0xe8);
  }
  if (lVar6 != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_58 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(this + 0x28));
      SceneObjectLib::PushSceneObject(local_58,param_2);
      ProgramState::Execute(local_58,2);
    }
    if ((local_50 != (long *)0x0) &&
       (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      lVar6 = local_50[2];
      local_50[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_50 + 0x18))(local_50);
      }
    }
  }
  this_00 = *(SoundEffectComponent **)(this + 200);
  if (this_00 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
    this_00 = *(SoundEffectComponent **)(this + 200);
    if (this_00 == (SoundEffectComponent *)0x0) goto LAB_0039264c;
  }
  SoundEffectComponent::Play(this_00);
LAB_0039264c:
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



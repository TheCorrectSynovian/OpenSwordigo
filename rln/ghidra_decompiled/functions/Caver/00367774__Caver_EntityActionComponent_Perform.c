/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00367774
 * Function: Caver::EntityActionComponent::Perform
 * Signature: undefined __thiscall Perform(EntityActionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::Perform() */

void __thiscall Caver::EntityActionComponent::Perform(EntityActionComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0xa8) = 0;
  if (*(long *)(this + 0x88) != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
    plVar4 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x98) = local_48;
    *(long **)(this + 0xa0) = local_40;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if ((local_40 != (long *)0x0) &&
       (lVar3 = local_40[1], local_40[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar3 = local_40[2];
      local_40[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
    if (*(ProgramState **)(this + 0x98) != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject
                (*(ProgramState **)(this + 0x98),*(SceneObject **)(this + 0x28));
      ProgramState::Execute(*(ProgramState **)(this + 0x98),1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



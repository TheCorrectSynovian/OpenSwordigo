/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00332710
 * Function: Caver::ProgramComponent::Execute
 * Signature: undefined __thiscall Execute(ProgramComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramComponent::Execute() */

void __thiscall Caver::ProgramComponent::Execute(ProgramComponent *this)

{
  int iVar1;
  long lVar2;
  ProgramState *this_00;
  long lVar3;
  long *plVar4;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0xb0) != 0) && (*(char *)(*(long *)(this + 0xb0) + 0x53) != '\0')) {
    plVar4 = *(long **)(this + 0xb8);
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar3 = plVar4[2];
      plVar4[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  if ((((this[0x70] != (ProgramComponent)0x0) && (*(long *)(this + 0xb0) == 0)) &&
      ((this[0x78] == (ProgramComponent)0x0 || (this[0xa8] == (ProgramComponent)0x0)))) &&
     (*(long *)(this + 0x98) != 0)) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_40 != (long *)0x0) {
      local_40[1] = local_40[1] + 1;
    }
    plVar4 = *(long **)(this + 0xb8);
    *(long **)(this + 0xb0) = local_48;
    *(long **)(this + 0xb8) = local_40;
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
    this_00 = *(ProgramState **)(this + 0xb0);
    if (this_00 != (ProgramState *)0x0) {
      if (*(int *)(this + 0x74) == 7) {
        local_48 = (long *)0x0;
        ProgramState::SetParentObject(this_00,(intrusive_ptr *)&local_48);
        if ((local_48 != (long *)0x0) &&
           (iVar1 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*local_48 + 8))();
        }
        this_00 = *(ProgramState **)(this + 0xb0);
      }
      SceneObjectLib::PushSceneObject(this_00,*(SceneObject **)(this + 0x28));
      ProgramState::Execute(*(ProgramState **)(this + 0xb0),1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



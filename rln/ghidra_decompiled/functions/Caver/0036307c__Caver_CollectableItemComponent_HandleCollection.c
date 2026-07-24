/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036307c
 * Function: Caver::CollectableItemComponent::HandleCollection
 * Signature: undefined __thiscall HandleCollection(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollectableItemComponent::HandleCollection() */

void __thiscall Caver::CollectableItemComponent::HandleCollection(CollectableItemComponent *this)

{
  long lVar1;
  GameState *this_00;
  long lVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  ProgramState *local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  psVar5 = (string *)(this + 0x80);
  if (*(long *)(*(long *)psVar5 + -0x18) != 0) {
    this_00 = *(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10);
    if (this_00 != (GameState *)0x0) {
      lVar2 = GameState::CurrentLevelState(this_00,true);
      uVar3 = StateProperties::HasFlag((StateProperties *)(lVar2 + 0x10),psVar5);
      if ((uVar3 & 1) != 0) goto LAB_00363180;
      if (*(long *)(*(long *)psVar5 + -0x18) == 0) goto LAB_00363104;
    }
    lVar2 = GameState::CurrentLevelState
                      (*(GameState **)(*(long *)(*(long *)(this + 0x28) + 0x20) + 0x10),true);
    StateProperties::AddFlag((string *)(lVar2 + 0x10));
  }
LAB_00363104:
  if (*(long *)(this + 0xa8) != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_48 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_48,*(SceneObject **)(this + 0x28));
      ProgramState::Execute(local_48,1);
    }
    if ((local_40 != (long *)0x0) &&
       (lVar2 = local_40[1], local_40[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*local_40 + 0x10))(local_40);
      lVar2 = local_40[2];
      local_40[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*local_40 + 0x18))(local_40);
      }
    }
  }
LAB_00363180:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033fda0
 * Function: Caver::TouchableComponent::Trigger
 * Signature: undefined __thiscall Trigger(TouchableComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TouchableComponent::Trigger() */

void __thiscall Caver::TouchableComponent::Trigger(TouchableComponent *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  SceneObject *this_00;
  long lVar5;
  ProgramState *pPVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  long *local_58;
  ProgramState *local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x98) != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_50 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_50,*(SceneObject **)(this + 0x28));
      ProgramState::Execute(local_50,1);
    }
    if ((local_48 != (long *)0x0) &&
       (lVar5 = local_48[1], local_48[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*local_48 + 0x10))(local_48);
      lVar5 = local_48[2];
      local_48[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_48 + 0x18))(local_48);
      }
    }
  }
  psVar4 = (string *)AudioSystem::sharedSystem();
  FUN_00666bb8(&local_50,"click",auStack_60);
  AudioSystem::PlaySoundEffectWithName(psVar4,1.0);
  if ((local_58 != (long *)0x0) &&
     (iVar7 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if (local_50 + -0x18 != (ProgramState *)PTR_DAT_007e5de8) {
    pPVar6 = local_50 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)pPVar6;
      *(int *)pPVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *(int *)pPVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pPVar6,0x10);
        if (bVar2) {
          *(int *)pPVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_50 + -0x18);
      this_00 = *(SceneObject **)(this + 0x78);
      goto joined_r0x0033ff2c;
    }
  }
  this_00 = *(SceneObject **)(this + 0x78);
joined_r0x0033ff2c:
  if (this_00 == (SceneObject *)0x0) {
    this_00 = *(SceneObject **)(this + 0x28);
  }
  SceneObject::HandleMessage(this_00,0x16,this);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



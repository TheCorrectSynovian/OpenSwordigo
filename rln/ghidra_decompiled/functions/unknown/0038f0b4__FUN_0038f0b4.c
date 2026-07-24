/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038f0b4
 * Function: FUN_0038f0b4
 * Signature: undefined FUN_0038f0b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_0038f0b4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ProgramState *this;
  undefined8 *puVar5;
  SkillComponent *this_00;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  long *local_48;
  long local_40;
  
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar5 == (undefined8 *)0x0) || ((SceneObject *)*puVar5 == (SceneObject *)0x0)) {
    this_00 = (SkillComponent *)0x0;
  }
  else {
    this_00 = (SkillComponent *)
              Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar5,(long)PTR_Interface_007e6ee0);
  }
  Caver::ProgramState::StringAtStackIndex((int)this);
  puVar5 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,3);
  if (this_00 != (SkillComponent *)0x0) {
    if (*(long *)(local_40 + -0x18) != 0) {
      Caver::ObjectLibrary::TemplateForName
                (*(string **)(*(long *)(*(long *)(this_00 + 0x28) + 0x20) + 0xa0),true);
      if (local_48 != (long *)0x0) {
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      }
      plVar6 = *(long **)(this_00 + 0xb8);
      *(long **)(this_00 + 0xb8) = local_48;
      plVar4 = local_48;
      if ((plVar6 != (long *)0x0) &&
         (iVar9 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar6 + 8))();
        plVar4 = *(long **)(this_00 + 0xb8);
      }
      if (plVar4 != (long *)0x0) {
        Caver::SkillComponent::CreateSpellObject(this_00);
      }
      if ((local_48 != (long *)0x0) &&
         (iVar9 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_48 + 8))();
      }
    }
    *(undefined8 *)(this_00 + 0x90) = *puVar5;
    *(undefined4 *)(this_00 + 0x98) = *(undefined4 *)(puVar5 + 1);
    Caver::SkillComponent::BeginCasting(this_00);
    if (*(SceneObject **)(this_00 + 0xc0) != (SceneObject *)0x0) {
      Caver::SceneObjectLib::PushSceneObject(this,*(SceneObject **)(this_00 + 0xc0));
      uVar10 = 1;
      goto LAB_0038f1e8;
    }
  }
  uVar10 = 0;
LAB_0038f1e8:
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



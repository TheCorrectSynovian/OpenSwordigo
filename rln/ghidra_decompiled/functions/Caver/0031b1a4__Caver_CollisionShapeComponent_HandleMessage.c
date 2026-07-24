/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b1a4
 * Function: Caver::CollisionShapeComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(CollisionShapeComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::CollisionShapeComponent::HandleMessage
          (CollisionShapeComponent *this,int param_1,void *param_2)

{
  long lVar1;
  ProgramState *this_00;
  long *plVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ProgramState *local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 8) {
    if (*(long *)(this + 0xd0) == 0) goto LAB_0031b418;
    if (*(char *)((long)param_2 + 0x17b) == '\0') {
      if ((this[0x17b] == (CollisionShapeComponent)0x0) ||
         (*(char *)((long)param_2 + 0x17a) == '\0')) goto LAB_0031b418;
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    Component::NewProgramStateForProgram((Program *)this);
    if (local_58 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(this + 0x28));
      SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)((long)param_2 + 0x28));
      ProgramState::PushBool(local_58,bVar5);
      ProgramState::Execute(local_58,3);
    }
  }
  else {
    if (((param_1 != 7) || (*(CollisionShapeComponent **)param_2 != this)) ||
       (*(char *)((long)param_2 + 0x34) == '\0')) goto LAB_0031b418;
    lVar6 = *(long *)((long)param_2 + 8);
    if (*(long *)(this + 0xa8) != 0) {
      if (*(char *)(lVar6 + 0x17b) == '\0') {
        if ((this[0x17b] == (CollisionShapeComponent)0x0) || (*(char *)(lVar6 + 0x17a) == '\0'))
        goto LAB_0031b3b8;
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      Component::NewProgramStateForProgram((Program *)this);
      if (local_58 != (ProgramState *)0x0) {
        SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(this + 0x28));
        SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(lVar6 + 0x28));
        local_68 = *(undefined8 *)((long)param_2 + 0x28);
        local_60 = 0;
        ProgramState::PushVector3(local_58,(Vector3 *)&local_68);
        ProgramState::PushBool(local_58,bVar5);
        local_68 = *(undefined8 *)((long)param_2 + 0x18);
        local_60 = 0;
        ProgramState::PushVector3(local_58,(Vector3 *)&local_68);
        local_68 = *(undefined8 *)((long)param_2 + 0x20);
        local_60 = 0;
        ProgramState::PushVector3(local_58,(Vector3 *)&local_68);
        ProgramState::Execute(local_58,6);
      }
      plVar2 = local_50;
      if ((local_50 != (long *)0x0) &&
         (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar4 = plVar2[2];
        plVar2[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
LAB_0031b3b8:
    if (((*(long *)(this + 0xf8) == 0) || (*(char *)(lVar6 + 0x17d) == '\0')) ||
       (this[0x17c] == (CollisionShapeComponent)0x0)) goto LAB_0031b418;
    lVar4 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7450);
    lVar3 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(lVar6 + 0x28),(long)PTR_Interface_007e6cd0);
    if (((lVar3 == 0) || (*(char *)(lVar3 + 0xbc) == '\0')) ||
       ((lVar4 != 0 && (*(int *)(lVar4 + 0x88) == *(int *)(lVar3 + 0xb4))))) goto LAB_0031b418;
    Component::NewProgramStateForProgram((Program *)this);
    if (local_58 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(this + 0x28));
      SceneObjectLib::PushSceneObject(local_58,*(SceneObject **)(lVar6 + 0x28));
      this_00 = local_58;
      (**(code **)(*(long *)this + 0x128))(this);
      CollisionShape::NearestPointInShape((Vector2 *)(this + 0x108));
      local_60 = 0;
      local_68 = local_70;
      ProgramState::PushVector3(this_00,(Vector3 *)&local_68);
      ProgramState::Execute(local_58,3);
    }
  }
  if ((local_50 != (long *)0x0) && (lVar6 = local_50[1], local_50[1] = lVar6 + -1, lVar6 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar6 = local_50[2];
    local_50[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*local_50 + 0x18))(local_50);
    }
  }
LAB_0031b418:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



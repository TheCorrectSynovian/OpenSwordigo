/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b60b8
 * Function: Caver::PressureTriggerComponent::Update
 * Signature: undefined __thiscall Update(PressureTriggerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::Update(float) */

void __thiscall
Caver::PressureTriggerComponent::Update(PressureTriggerComponent *this,float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  SceneObject *this_00;
  float fVar4;
  float fVar5;
  ProgramState *local_48;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (0.25 <= *(float *)(this + 0x70)) {
    if (this[0xd8] == (PressureTriggerComponent)0x0) {
      if ((this[0xd9] != (PressureTriggerComponent)0x0) &&
         (this[0xd9] = (PressureTriggerComponent)0x0, *(long *)(this + 200) != 0)) {
        Component::NewProgramStateForProgram((Program *)this);
        if (local_48 != (ProgramState *)0x0) {
          SceneObjectLib::PushSceneObject(local_48,*(SceneObject **)(this + 0x28));
          ProgramState::Execute(local_48,1);
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
      }
      fVar4 = *(float *)(this + 0x74) + param_1 * DAT_00689378;
      *(float *)(this + 0x74) = fVar4;
      if (fVar4 < 0.0) {
        *(undefined4 *)(this + 0x74) = 0;
      }
    }
  }
  else {
    if ((this[0xd9] == (PressureTriggerComponent)0x0) &&
       (this[0xd9] = (PressureTriggerComponent)0x1, *(long *)(this + 0xa0) != 0)) {
      Component::NewProgramStateForProgram((Program *)this);
      if (local_48 != (ProgramState *)0x0) {
        SceneObjectLib::PushSceneObject(local_48,*(SceneObject **)(this + 0x28));
        ProgramState::Execute(local_48,1);
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
    }
    fVar4 = param_1 * DAT_00684320 + *(float *)(this + 0x74);
    *(float *)(this + 0x74) = fVar4;
    if (*(float *)(this + 0x78) < fVar4) {
      *(float *)(this + 0x74) = *(float *)(this + 0x78);
    }
  }
  if (DAT_00683734 < param_1) {
    this_00 = *(SceneObject **)(this + 0x28);
    fVar5 = *(float *)(this + 0x80);
    fVar4 = *(float *)(this + 0x74);
    if ((DAT_00683488 < ABS((*(float *)(this + 0x7c) + 0.0) - *(float *)(this_00 + 0x70))) ||
       (DAT_00683488 < ABS((fVar5 - fVar4) - *(float *)(this_00 + 0x74)))) {
      *(float *)(this_00 + 0x70) = *(float *)(this + 0x7c) + 0.0;
      *(float *)(this_00 + 0x74) = fVar5 - fVar4;
      if (this_00[0xb4] == (SceneObject)0x0) {
        SceneObject::RegisterForWorldBoundsUpdate(this_00);
        this_00[0xb4] = (SceneObject)0x1;
      }
    }
  }
  *(float *)(this + 0x70) = *(float *)(this + 0x70) + param_1;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003901c4
 * Function: Caver::SpellComponent::Cast
 * Signature: undefined __thiscall Cast(SpellComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::Cast() */

void __thiscall Caver::SpellComponent::Cast(SpellComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  ProgramState *local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x70);
  if (lVar3 != 0) {
    fVar4 = *(float *)(lVar3 + 0x78);
    uVar5 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    fVar6 = *(float *)(*(long *)(this + 0x28) + 0x78);
    *(ulong *)(this + 0x78) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) -
                  (float)((ulong)uVar5 >> 0x20),(float)*(undefined8 *)(lVar3 + 0x70) - (float)uVar5)
    ;
    *(float *)(this + 0x80) = fVar4 - fVar6;
  }
  if (*(long *)(this + 0xa8) != 0) {
    Component::NewProgramStateForProgram((Program *)this);
    if (local_38 != (ProgramState *)0x0) {
      SceneObjectLib::PushSceneObject(local_38,*(SceneObject **)(this + 0x28));
      ProgramState::Execute(local_38,1);
    }
    if ((local_30 != (long *)0x0) &&
       (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*local_30 + 0x10))(local_30);
      lVar3 = local_30[2];
      local_30[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*local_30 + 0x18))(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



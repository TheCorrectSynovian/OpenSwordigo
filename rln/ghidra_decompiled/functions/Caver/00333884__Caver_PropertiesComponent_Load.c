/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00333884
 * Function: Caver::PropertiesComponent::Load
 * Signature: undefined __thiscall Load(PropertiesComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PropertiesComponent::Load() */

void __thiscall Caver::PropertiesComponent::Load(PropertiesComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ProgramState *local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((this[0x70] == (PropertiesComponent)0x0) &&
     (this[0x70] = (PropertiesComponent)0x1, *(long *)(this + 0x90) != 0)) {
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



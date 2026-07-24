/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005770dc
 * Function: FUN_005770dc
 * Signature: undefined FUN_005770dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005770dc(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ProgramState *this;
  undefined8 *puVar3;
  SceneObject *pSVar4;
  SceneObject *this_00;
  SceneObject *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    pSVar4 = (SceneObject *)0x0;
  }
  else {
    pSVar4 = (SceneObject *)*puVar3;
  }
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (puVar3 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar3;
  }
  if (pSVar4 != (SceneObject *)0x0) {
    if (*(SceneObject **)(pSVar4 + 0x30) != (SceneObject *)0x0) {
      Caver::SceneObject::RemoveChildObject(*(SceneObject **)(pSVar4 + 0x30),pSVar4,false);
    }
    if (this_00 != (SceneObject *)0x0) {
      *(int *)(pSVar4 + 8) = *(int *)(pSVar4 + 8) + 1;
      local_40 = pSVar4;
      Caver::SceneObject::AddChildObject(this_00,(intrusive_ptr *)&local_40);
      if ((local_40 != (SceneObject *)0x0) &&
         (iVar1 = *(int *)(local_40 + 8), *(int *)(local_40 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*(long *)local_40 + 8))();
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



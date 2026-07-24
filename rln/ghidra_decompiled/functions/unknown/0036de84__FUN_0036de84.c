/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036de84
 * Function: FUN_0036de84
 * Signature: undefined FUN_0036de84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036de84(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  EntityControllerComponent *this_00;
  long *plVar4;
  SceneObject *this_01;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    this_01 = (SceneObject *)*puVar3;
    iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (this_01 != (SceneObject *)0x0) {
      this_00 = (EntityControllerComponent *)
                Caver::SceneObject::ComponentWithInterface(this_01,(long)PTR_Interface_007e7bc0);
      plVar4 = (long *)Caver::SceneObject::ComponentWithIdentifier(this_01,iVar2);
      if ((this_00 != (EntityControllerComponent *)0x0) && (plVar4 != (long *)0x0)) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x108))();
        if (plVar4 != (long *)0x0) {
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        }
        local_40 = plVar4;
        Caver::EntityControllerComponent::SetMoveAnimation(this_00,(intrusive_ptr *)&local_40);
        if ((plVar4 != (long *)0x0) &&
           (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



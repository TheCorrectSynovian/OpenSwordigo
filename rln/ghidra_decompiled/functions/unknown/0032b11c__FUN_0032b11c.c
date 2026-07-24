/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b11c
 * Function: FUN_0032b11c
 * Signature: undefined FUN_0032b11c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0032b11c(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  ProgramState *this;
  undefined8 *puVar3;
  ObjectLinkControllerComponent *this_00;
  long *plVar4;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar3 == (undefined8 *)0x0) || ((SceneObject *)*puVar3 == (SceneObject *)0x0)) {
    this_00 = (ObjectLinkControllerComponent *)0x0;
  }
  else {
    this_00 = (ObjectLinkControllerComponent *)
              Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar3,(long)PTR_Interface_007e6970);
  }
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
  if (((puVar3 != (undefined8 *)0x0) && (this_00 != (ObjectLinkControllerComponent *)0x0)) &&
     (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    local_40 = plVar4;
    Caver::ObjectLinkControllerComponent::LinkToObject(this_00,(intrusive_ptr *)&local_40);
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



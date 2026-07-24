/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f9e0
 * Function: FUN_0037f9e0
 * Signature: undefined FUN_0037f9e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037f9e0(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  Vector3 *pVVar3;
  long lVar4;
  SceneObject *this_00;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::PointerAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar2;
    pVVar3 = (Vector3 *)Caver::ProgramState::PointerAtStackIndex(this,2);
    if ((this_00 != (SceneObject *)0x0) &&
       (lVar4 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4ee0),
       lVar4 != 0)) {
      Caver::Vector2::Vector2((Vector2 *)&local_40,pVVar3);
      *(undefined8 *)(lVar4 + 0xe0) = local_40;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



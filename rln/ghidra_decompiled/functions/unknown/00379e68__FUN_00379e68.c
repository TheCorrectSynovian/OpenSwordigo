/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379e68
 * Function: FUN_00379e68
 * Signature: undefined FUN_00379e68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00379e68(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  uVar3 = 0;
  if (((puVar1 != (undefined8 *)0x0) && (uVar3 = 0, (SceneObject *)*puVar1 != (SceneObject *)0x0))
     && (lVar2 = Caver::SceneObject::ComponentWithInterface
                           ((SceneObject *)*puVar1,(long)PTR_Interface_007e60a0), uVar3 = 0,
        lVar2 != 0)) {
    Caver::ProgramState::PushInt(this,*(int *)(lVar2 + 0x88));
    uVar3 = 1;
  }
  return uVar3;
}



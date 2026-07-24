/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d5e0
 * Function: FUN_0036d5e0
 * Signature: undefined FUN_0036d5e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d5e0(lua_State *param_1)

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
                           ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0), uVar3 = 0,
        lVar2 != 0)) {
    Caver::ProgramState::PushBool(this,*(bool *)(lVar2 + 0x120));
    uVar3 = 1;
  }
  return uVar3;
}



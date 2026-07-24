/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036dbc4
 * Function: FUN_0036dbc4
 * Signature: undefined FUN_0036dbc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036dbc4(lua_State *param_1)

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
    if (*(SceneObject **)(lVar2 + 0xf0) == (SceneObject *)0x0) {
      uVar3 = 0;
    }
    else {
      Caver::SceneObjectLib::PushSceneObject(this,*(SceneObject **)(lVar2 + 0xf0));
      uVar3 = 1;
    }
  }
  return uVar3;
}



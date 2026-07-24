/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003604a8
 * Function: FUN_003604a8
 * Signature: undefined FUN_003604a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_003604a8(lua_State *param_1)

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
                           ((SceneObject *)*puVar1,(long)PTR_Interface_007e7390), uVar3 = 0,
        lVar2 != 0)) {
    if ((*(int *)(lVar2 + 0x2d0) == 2) && (*(SceneObject **)(lVar2 + 0x298) != (SceneObject *)0x0))
    {
      Caver::SceneObjectLib::PushSceneObject(this,*(SceneObject **)(lVar2 + 0x298));
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



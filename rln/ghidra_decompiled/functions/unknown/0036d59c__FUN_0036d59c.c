/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d59c
 * Function: FUN_0036d59c
 * Signature: undefined FUN_0036d59c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d59c(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) &&
     (lVar2 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x120) = 1;
  }
  return 0;
}



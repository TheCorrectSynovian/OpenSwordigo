/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f8f0
 * Function: FUN_0037f8f0
 * Signature: undefined FUN_0037f8f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037f8f0(lua_State *param_1)

{
  bool bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) ||
     (lVar3 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e4ee0), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(lVar3 + 0x70) != '\0';
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}



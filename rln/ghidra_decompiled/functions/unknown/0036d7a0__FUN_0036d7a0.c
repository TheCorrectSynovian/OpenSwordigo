/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d7a0
 * Function: FUN_0036d7a0
 * Signature: undefined FUN_0036d7a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d7a0(lua_State *param_1)

{
  bool bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) ||
     (lVar3 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e7bc0), lVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(lVar3 + 0xc0) != 0;
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}



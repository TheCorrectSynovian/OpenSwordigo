/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036d3ac
 * Function: FUN_0036d3ac
 * Signature: undefined FUN_0036d3ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0036d3ac(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    lVar2 = Caver::SceneObject::ComponentWithInterface
                      ((SceneObject *)*puVar1,(long)PTR_Interface_007e7bc0);
    uVar3 = Caver::ProgramState::FloatAtStackIndex(this,2);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0xe0) = uVar3;
    }
  }
  return 0;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037fb18
 * Function: FUN_0037fb18
 * Signature: undefined FUN_0037fb18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037fb18(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  SceneObject *this_00;
  undefined4 uVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar1 == (undefined8 *)0x0) {
    Caver::ProgramState::FloatAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar1;
    uVar3 = Caver::ProgramState::FloatAtStackIndex(this,2);
    if ((this_00 != (SceneObject *)0x0) &&
       (lVar2 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4ee0),
       lVar2 != 0)) {
      *(undefined4 *)(lVar2 + 0xc0) = uVar3;
    }
  }
  return 0;
}



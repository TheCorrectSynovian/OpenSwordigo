/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037f954
 * Function: FUN_0037f954
 * Signature: undefined FUN_0037f954(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0037f954(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    Caver::ProgramState::BoolAtStackIndex(this,2);
  }
  else {
    this_00 = (SceneObject *)*puVar2;
    bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
    if ((((this_00 != (SceneObject *)0x0) &&
         (lVar3 = Caver::SceneObject::ComponentWithInterface(this_00,(long)PTR_Interface_007e4ee0),
         lVar3 != 0)) && ((bVar1 & 1) != *(byte *)(lVar3 + 0x70))) &&
       (*(byte *)(lVar3 + 0x70) = bVar1 & 1, (bVar1 & 1) != 0)) {
      Caver::SceneObject::Activate(*(SceneObject **)(lVar3 + 0x28));
    }
  }
  return 0;
}



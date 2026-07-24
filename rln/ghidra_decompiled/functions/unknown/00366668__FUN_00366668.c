/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366668
 * Function: FUN_00366668
 * Signature: undefined FUN_00366668(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00366668(lua_State *param_1)

{
  byte bVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar2 != (undefined8 *)0x0) && ((SceneObject *)*puVar2 != (SceneObject *)0x0)) &&
     (lVar3 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar2,(long)PTR_Interface_007e6cd0), lVar3 != 0)) {
    bVar1 = Caver::ProgramState::BoolAtStackIndex(this,2);
    *(byte *)(lVar3 + 0xbc) = bVar1 & 1;
  }
  return 0;
}



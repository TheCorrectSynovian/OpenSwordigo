/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032b0b0
 * Function: FUN_0032b0b0
 * Signature: undefined FUN_0032b0b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0032b0b0(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 != (undefined8 *)0x0) && ((SceneObject *)*puVar1 != (SceneObject *)0x0)) &&
     (lVar2 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar1,(long)PTR_Interface_007e6970), lVar2 != 0)) {
    puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
    *(undefined8 *)(lVar2 + 0x104) = *puVar1;
    *(undefined4 *)(lVar2 + 0x10c) = *(undefined4 *)(puVar1 + 1);
  }
  return 0;
}



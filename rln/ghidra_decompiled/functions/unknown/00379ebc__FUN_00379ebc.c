/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00379ebc
 * Function: FUN_00379ebc
 * Signature: undefined FUN_00379ebc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00379ebc(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  long lVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if ((puVar2 == (undefined8 *)0x0) || ((SceneObject *)*puVar2 == (SceneObject *)0x0)) {
    Caver::ProgramState::IntAtStackIndex(this,2);
  }
  else {
    lVar3 = Caver::SceneObject::ComponentWithInterface
                      ((SceneObject *)*puVar2,(long)PTR_Interface_007e60a0);
    iVar1 = Caver::ProgramState::IntAtStackIndex(this,2);
    if (lVar3 != 0) {
      Caver::ProgramState::PushString
                (this,(string *)(*(long *)(lVar3 + 0x90) + (long)iVar1 * 0x20 + 8));
      return 1;
    }
  }
  return 0;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371b10
 * Function: FUN_00371b10
 * Signature: undefined FUN_00371b10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00371b10(lua_State *param_1)

{
  ProgramState *this;
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar1 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (((puVar1 == (undefined8 *)0x0) || ((SceneObject *)*puVar1 == (SceneObject *)0x0)) ||
     (lVar2 = Caver::SceneObject::ComponentWithInterface
                        ((SceneObject *)*puVar1,(long)PTR_Interface_007e7ab0), lVar2 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x70);
  }
  Caver::ProgramState::PushInt(this,iVar3);
  return 1;
}



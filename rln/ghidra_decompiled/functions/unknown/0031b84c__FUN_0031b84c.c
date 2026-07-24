/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031b84c
 * Function: FUN_0031b84c
 * Signature: undefined FUN_0031b84c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0031b84c(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ProgramState *this;
  undefined8 *puVar3;
  long lVar4;
  SceneObject *this_00;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar3 == (undefined8 *)0x0) {
    this_00 = (SceneObject *)0x0;
  }
  else {
    this_00 = (SceneObject *)*puVar3;
  }
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,2);
  bVar1 = false;
  if ((this_00 != (SceneObject *)0x0) && (iVar2 != 0)) {
    lVar4 = Caver::SceneObject::ComponentWithIdentifier(this_00,iVar2);
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(lVar4 + 0x178) != '\0';
    }
  }
  Caver::ProgramState::PushBool(this,bVar1);
  return 1;
}



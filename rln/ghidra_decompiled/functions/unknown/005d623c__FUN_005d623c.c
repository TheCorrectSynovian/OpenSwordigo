/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d623c
 * Function: FUN_005d623c
 * Signature: undefined FUN_005d623c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d623c(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ProgramState *this;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  iVar2 = Caver::ProgramState::IntAtStackIndex(this,1);
  iVar3 = Caver::ProgramState::IntAtStackIndex(this,2);
  iVar4 = Caver::fastrandom();
  iVar3 = (1 - iVar2) + iVar3;
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar4 / iVar3;
  }
  Caver::ProgramState::PushInt(this,(iVar4 - iVar1 * iVar3) + iVar2);
  return 1;
}



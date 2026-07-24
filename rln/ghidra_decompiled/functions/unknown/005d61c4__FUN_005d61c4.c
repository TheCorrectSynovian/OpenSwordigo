/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d61c4
 * Function: FUN_005d61c4
 * Signature: undefined FUN_005d61c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d61c4(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  float fVar2;
  float fVar3;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  fVar2 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  fVar3 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  iVar1 = Caver::fastrandom();
  Caver::ProgramState::PushFloat
            (this,fVar2 + (fVar3 - fVar2) *
                          ((float)iVar1 / (float)*(int *)PTR_FASTRANDOM_MAX_007e4b68));
  return 1;
}



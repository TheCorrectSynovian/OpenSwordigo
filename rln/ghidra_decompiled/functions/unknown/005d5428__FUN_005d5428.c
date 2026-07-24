/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5428
 * Function: FUN_005d5428
 * Signature: undefined FUN_005d5428(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5428(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  float fVar2;
  float __x;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  __x = *pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2];
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  Caver::ProgramState::PushFloat(this,fVar2);
  return 1;
}



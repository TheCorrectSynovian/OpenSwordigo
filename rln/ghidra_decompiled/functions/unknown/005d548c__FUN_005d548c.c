/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d548c
 * Function: FUN_005d548c
 * Signature: undefined FUN_005d548c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d548c(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  pfVar2 = (float *)Caver::ProgramState::PointerAtStackIndex(this,2);
  fVar3 = (float)*(undefined8 *)(pfVar2 + 1) - (float)*(undefined8 *)(pfVar1 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
  fVar4 = (*pfVar2 - *pfVar1) * (*pfVar2 - *pfVar1) + fVar3 * fVar3 + fVar4 * fVar4;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  Caver::ProgramState::PushFloat(this,fVar3);
  return 1;
}



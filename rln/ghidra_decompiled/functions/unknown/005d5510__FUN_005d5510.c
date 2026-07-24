/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5510
 * Function: FUN_005d5510
 * Signature: undefined FUN_005d5510(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5510(lua_State *param_1)

{
  ProgramState *this;
  float *pfVar1;
  float *pfVar2;
  
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  pfVar1 = (float *)Caver::ProgramState::PointerAtStackIndex(this,1);
  pfVar2 = (float *)Caver::ProgramState::PointerAtStackIndex(this,2);
  Caver::ProgramState::PushFloat
            (this,*pfVar1 * *pfVar2 +
                  (float)*(undefined8 *)(pfVar1 + 1) * (float)*(undefined8 *)(pfVar2 + 1) +
                  (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20) *
                  (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20));
  return 1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5288
 * Function: FUN_005d5288
 * Signature: undefined FUN_005d5288(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5288(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 005d52b8 to 006d52cb has its CatchHandler @ 005d55b0 */
  puVar3 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,2);
                    /* try { // try from 005d52cc to 006d5327 has its CatchHandler @ 005d55f8 */
  local_48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) - (float)((ulong)*puVar3 >> 0x20),
                      (float)*puVar2 - (float)*puVar3);
  local_40 = *(float *)(puVar2 + 1) - *(float *)(puVar3 + 1);
  Caver::ProgramMath::PushVector3(this,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



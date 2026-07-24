/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5320
 * Function: FUN_005d5320
 * Signature: undefined FUN_005d5320(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5320(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005d533c to 006d534f has its CatchHandler @ 005d55ac */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
                    /* try { // try from 005d5350 to 006d53ab has its CatchHandler @ 005d55c0 */
  local_40 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  local_48 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * local_40,(float)*puVar2 * local_40);
  local_40 = local_40 * *(float *)(puVar2 + 1);
  Caver::ProgramMath::PushVector3(this,(Vector3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



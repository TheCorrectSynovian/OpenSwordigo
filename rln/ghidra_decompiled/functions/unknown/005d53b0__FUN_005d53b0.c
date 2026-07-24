/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d53b0
 * Function: FUN_005d53b0
 * Signature: undefined FUN_005d53b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d53b0(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005d53d8 to 006d53df has its CatchHandler @ 005d5714 */
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  local_30 = *puVar2;
                    /* try { // try from 005d53e0 to 006d5737 has its CatchHandler @ 005d4c10 */
  fVar3 = (float)Caver::Vector2::Angle((Vector2 *)&local_30);
  Caver::ProgramState::PushFloat(this,fVar3 * DAT_00684000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d505c
 * Function: FUN_005d505c
 * Signature: undefined FUN_005d505c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d505c(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  Vector2 *this_00;
  float extraout_s0;
  Vector3 local_38 [8];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  this_00 = (Vector2 *)Caver::ProgramState::FloatAtStackIndex(this,1);
  Caver::Vector2::FromAngle(this_00,extraout_s0 * DAT_00684004);
  local_30 = 0;
  Caver::ProgramMath::PushVector3(this,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



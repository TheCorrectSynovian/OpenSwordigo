/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d5b54
 * Function: FUN_005d5b54
 * Signature: undefined FUN_005d5b54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005d5b54(lua_State *param_1)

{
  long lVar1;
  ProgramState *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005d5b70 to 006d5b97 has its CatchHandler @ 005d5e10 */
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  fVar2 = (float)Caver::ProgramState::FloatAtStackIndex(this,1);
  fVar3 = (float)Caver::ProgramState::FloatAtStackIndex(this,2);
  fVar4 = (float)Caver::ProgramState::FloatAtStackIndex(this,3);
  fStack_4c = (float)Caver::ProgramState::FloatAtStackIndex(this,4);
                    /* try { // try from 005d5bb8 to 006d5bdf has its CatchHandler @ 005d5e00 */
  local_50 = fVar3 - fVar2;
  fStack_4c = fStack_4c - fVar4;
  local_58 = fVar2;
  fStack_54 = fVar4;
  Caver::ProgramMath::PushRectangle(this,(Rectangle *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d5c00 to 006d5c27 has its CatchHandler @ 005d5df0 */
  __stack_chk_fail();
}



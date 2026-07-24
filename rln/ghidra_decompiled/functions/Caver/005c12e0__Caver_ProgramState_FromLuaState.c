/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c12e0
 * Function: Caver::ProgramState::FromLuaState
 * Signature: undefined __cdecl FromLuaState(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProgramState::FromLuaState(lua_State*) */

void Caver::ProgramState::FromLuaState(lua_State *param_1)

{
  long lVar1;
  lua_State *local_38;
  undefined4 local_30;
  long local_28;
  
                    /* try { // try from 005c12f0 to 006c12f3 has its CatchHandler @ 005c1654 */
  lVar1 = tpidr_el0;
                    /* try { // try from 005c12f4 to 006c139b has its CatchHandler @ 005c0f08 */
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xffffd8ee;
  local_38 = param_1;
  ProgramTable::PointerForPointerKey((ProgramTable *)&local_38,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



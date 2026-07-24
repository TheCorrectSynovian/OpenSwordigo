/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb244
 * Function: FUN_005fb244
 * Signature: undefined FUN_005fb244(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fb244(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  lua_Debug alStack_b0 [120];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_type(param_1,1);
  if (iVar2 == 6) {
    lua_pushvalue(param_1,1);
  }
  else {
    if (param_2 == 0) {
      uVar3 = luaL_checkinteger(param_1,1);
                    /* try { // try from 005fb34c to 006fb357 has its CatchHandler @ 005fc150 */
    }
    else {
      uVar3 = luaL_optinteger(param_1,1,1);
                    /* try { // try from 005fb2a0 to 006fb2b3 has its CatchHandler @ 005fbfe8 */
    }
    if ((int)uVar3 < 0) {
                    /* try { // try from 005fb2b4 to 006fb2c7 has its CatchHandler @ 005fc000 */
      luaL_argerror(param_1,1,"level must be non-negative");
    }
                    /* try { // try from 005fb2c8 to 006fb2d7 has its CatchHandler @ 005fbfb8 */
    iVar2 = lua_getstack(param_1,uVar3,alStack_b0);
    if (iVar2 == 0) {
      luaL_argerror(param_1,1,"invalid level");
    }
    lua_getinfo(param_1,"f",alStack_b0);
                    /* try { // try from 005fb2f8 to 006fb2fb has its CatchHandler @ 005fc000 */
                    /* try { // try from 005fb2fc to 006fb337 has its CatchHandler @ 005fb1f0 */
    iVar2 = lua_type(param_1,-1);
    if (iVar2 == 0) {
      luaL_error(param_1,"no function environment for tail call at level %d",(ulong)uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005fb338 to 006fb33b has its CatchHandler @ 005fbfb4 */
                    /* try { // try from 005fb33c to 006fb34b has its CatchHandler @ 005fb1f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



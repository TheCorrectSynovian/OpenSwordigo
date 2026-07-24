/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa084
 * Function: luaL_newstate
 * Signature: undefined luaL_newstate(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* luaL_newstate() */

lua_State * luaL_newstate(void)

{
  lua_State *plVar1;
  
  plVar1 = (lua_State *)lua_newstate(FUN_005fa0c8,(void *)0x0);
  if (plVar1 != (lua_State *)0x0) {
    lua_atpanic(plVar1,FUN_005fa0f4);
  }
  return plVar1;
}



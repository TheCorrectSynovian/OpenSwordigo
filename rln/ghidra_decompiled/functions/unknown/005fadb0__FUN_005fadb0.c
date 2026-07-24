/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fadb0
 * Function: FUN_005fadb0
 * Signature: undefined FUN_005fadb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fadb0(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,2);
  luaL_checktype(param_1,1,5);
  if ((iVar1 != 0) && (iVar1 != 5)) {
                    /* catch() { ... } // from try @ 005fa434 with catch @ 005fadf8 */
    luaL_argerror(param_1,2,"nil or table expected");
  }
                    /* catch() { ... } // from try @ 005fa3bc with catch @ 005fadfc */
                    /* catch() { ... } // from try @ 005fa354 with catch @ 005fae08 */
  iVar1 = luaL_getmetafield(param_1,1,"__metatable");
  if (iVar1 != 0) {
    luaL_error(param_1,"cannot change a protected metatable");
  }
                    /* try { // try from 005fae2c to 006fae53 has its CatchHandler @ 005fb16c */
  lua_settop(param_1,2);
  lua_setmetatable(param_1,1);
  return 1;
}



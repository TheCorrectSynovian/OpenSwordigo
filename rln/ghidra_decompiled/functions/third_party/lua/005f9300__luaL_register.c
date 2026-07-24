/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9300
 * Function: luaL_register
 * Signature: undefined __cdecl luaL_register(lua_State * param_1, char * param_2, luaL_Reg * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_register(lua_State*, char const*, luaL_Reg const*) */

void luaL_register(lua_State *param_1,char *param_2,luaL_Reg *param_3)

{
  luaL_openlib(param_1,param_2,param_3,0);
  return;
}



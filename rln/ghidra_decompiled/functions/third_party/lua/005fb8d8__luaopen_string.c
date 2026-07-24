/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb8d8
 * Function: luaopen_string
 * Signature: undefined __cdecl luaopen_string(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaopen_string(lua_State*) */

undefined8 luaopen_string(lua_State *param_1)

{
                    /* try { // try from 005fb8dc to 006fb943 has its CatchHandler @ 005fc160 */
  luaL_register(param_1,"string",(luaL_Reg *)&PTR_DAT_007d8b98);
  lua_getfield(param_1,-1,"gmatch");
  lua_setfield(param_1,-2,"gfind");
  lua_createtable(param_1,0,1);
  lua_pushlstring(param_1,"",0);
                    /* try { // try from 005fb948 to 006fb953 has its CatchHandler @ 005fc148 */
  lua_pushvalue(param_1,-2);
  lua_setmetatable(param_1,-2);
  lua_settop(param_1,-2);
  lua_pushvalue(param_1,-2);
  lua_setfield(param_1,-2,"__index");
  lua_settop(param_1,-2);
                    /* try { // try from 005fb99c to 006fb9cb has its CatchHandler @ 005fbd94 */
  return 1;
}



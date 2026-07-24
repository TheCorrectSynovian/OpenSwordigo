/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa130
 * Function: luaopen_base
 * Signature: undefined __cdecl luaopen_base(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaopen_base(lua_State*) */

undefined8 luaopen_base(lua_State *param_1)

{
                    /* try { // try from 005fa13c to 006fa14f has its CatchHandler @ 005faebc */
  lua_pushvalue(param_1,-0x2712);
                    /* try { // try from 005fa15c to 006fa16f has its CatchHandler @ 005fafb4 */
  lua_setfield(param_1,-0x2712,"_G");
  luaL_register(param_1,"_G",(luaL_Reg *)&PTR_s_assert_007d89a8);
  lua_pushlstring(param_1,"Lua 5.1",7);
  lua_setfield(param_1,-0x2712,"_VERSION");
                    /* try { // try from 005fa1a8 to 006fa1cf has its CatchHandler @ 005fab10 */
  lua_pushcclosure(param_1,FUN_005fa304,0);
  lua_pushcclosure(param_1,FUN_005fa2b4,1);
  lua_setfield(param_1,-2,"ipairs");
  lua_pushcclosure(param_1,FUN_005fa3c8,0);
                    /* try { // try from 005fa1f0 to 006fa217 has its CatchHandler @ 005fafb4 */
  lua_pushcclosure(param_1,FUN_005fa37c,1);
  lua_setfield(param_1,-2,"pairs");
  lua_createtable(param_1,0,1);
  lua_pushvalue(param_1,-1);
  lua_setmetatable(param_1,-2);
  lua_pushlstring(param_1,"kv",2);
                    /* try { // try from 005fa250 to 006fa25b has its CatchHandler @ 005fae6c */
                    /* try { // try from 005fa25c to 006fa2b3 has its CatchHandler @ 005f9c98 */
  lua_setfield(param_1,-2,"__mode");
  lua_pushcclosure(param_1,FUN_005fa420,1);
  lua_setfield(param_1,-0x2712,"newproxy");
  luaL_register(param_1,"coroutine",(luaL_Reg *)&PTR_s_create_007d8938);
  return 2;
}



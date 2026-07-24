/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa37c
 * Function: FUN_005fa37c
 * Signature: undefined FUN_005fa37c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa37c(lua_State *param_1)

{
  luaL_checktype(param_1,1,5);
  lua_pushvalue(param_1,-0x2713);
  lua_pushvalue(param_1,1);
  lua_pushnil(param_1);
                    /* try { // try from 005fa3bc to 006fa3bf has its CatchHandler @ 005fadfc */
                    /* try { // try from 005fa3c0 to 006fa433 has its CatchHandler @ 005f9c98 */
  return 3;
}



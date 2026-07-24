/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa2b4
 * Function: FUN_005fa2b4
 * Signature: undefined FUN_005fa2b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa2b4(lua_State *param_1)

{
                    /* try { // try from 005fa2b4 to 006fa2b7 has its CatchHandler @ 005fae58 */
                    /* try { // try from 005fa2b8 to 006fa353 has its CatchHandler @ 005f9c98 */
  luaL_checktype(param_1,1,5);
  lua_pushvalue(param_1,-0x2713);
  lua_pushvalue(param_1,1);
  lua_pushinteger(param_1,0);
  return 3;
}



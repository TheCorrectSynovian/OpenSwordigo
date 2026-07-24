/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fabdc
 * Function: FUN_005fabdc
 * Signature: undefined FUN_005fabdc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fabdc(lua_State *param_1)

{
  luaL_checktype(param_1,1,5);
                    /* try { // try from 005fabfc to 006fae2b has its CatchHandler @ 005f9c98 */
                    /* catch() { ... } // from try @ 005fa624 with catch @ 005fac00 */
  luaL_checkany(param_1,2);
  luaL_checkany(param_1,3);
  lua_settop(param_1,3);
  lua_rawset(param_1,1);
  return 1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fab8c
 * Function: FUN_005fab8c
 * Signature: undefined FUN_005fab8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fab8c(lua_State *param_1)

{
  luaL_checktype(param_1,1,5);
                    /* catch() { ... } // from try @ 005f9dcc with catch @ 005fabb0 */
  luaL_checkany(param_1,2);
  lua_settop(param_1,2);
  lua_rawget(param_1,1);
  return 1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fab3c
 * Function: FUN_005fab3c
 * Signature: undefined FUN_005fab3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fab3c(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  luaL_checkany(param_1,2);
                    /* catch() { ... } // from try @ 005fa024 with catch @ 005fab60 */
  iVar1 = lua_rawequal(param_1,1,2);
  lua_pushboolean(param_1,iVar1);
  return 1;
}



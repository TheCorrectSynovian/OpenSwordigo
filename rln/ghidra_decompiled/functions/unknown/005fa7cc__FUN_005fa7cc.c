/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa7cc
 * Function: FUN_005fa7cc
 * Signature: undefined FUN_005fa7cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa7cc(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
    lua_pushnil(param_1);
  }
  else {
    luaL_getmetafield(param_1,1,"__metatable");
  }
  return 1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa6c8
 * Function: FUN_005fa6c8
 * Signature: undefined FUN_005fa6c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fa6c8(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = luaL_optinteger(param_1,2,1);
  lua_settop(param_1,1);
  iVar2 = lua_isstring(param_1,1);
  if ((0 < iVar1) && (iVar2 != 0)) {
    luaL_where(param_1,iVar1);
    lua_pushvalue(param_1,1);
    lua_concat(param_1,2);
  }
  lua_error(param_1);
  return;
}



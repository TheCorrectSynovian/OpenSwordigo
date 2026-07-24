/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa3c8
 * Function: FUN_005fa3c8
 * Signature: undefined FUN_005fa3c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa3c8(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  luaL_checktype(param_1,1,5);
  uVar2 = 2;
  lua_settop(param_1,2);
  iVar1 = lua_next(param_1,1);
  if (iVar1 == 0) {
    lua_pushnil(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



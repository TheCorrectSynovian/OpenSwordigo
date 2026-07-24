/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa9bc
 * Function: FUN_005fa9bc
 * Signature: undefined FUN_005fa9bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fa9bc(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_gettop(param_1);
  iVar1 = lua_pcall(param_1,iVar1 + -1,-1,0);
  lua_pushboolean(param_1,(uint)(iVar1 == 0));
  lua_insert(param_1,1);
  lua_gettop(param_1);
  return;
}



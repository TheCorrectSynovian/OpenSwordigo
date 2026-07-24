/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa650
 * Function: FUN_005fa650
 * Signature: undefined FUN_005fa650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fa650(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)luaL_optlstring(param_1,1,(char *)0x0,(ulong *)0x0);
  iVar1 = lua_gettop(param_1);
  iVar2 = luaL_loadfile(param_1,pcVar3);
  if (iVar2 != 0) {
    lua_error(param_1);
  }
  lua_call(param_1,0,-1);
  iVar2 = lua_gettop(param_1);
  return iVar2 - iVar1;
}



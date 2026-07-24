/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa880
 * Function: FUN_005fa880
 * Signature: undefined FUN_005fa880(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa880(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)luaL_optlstring(param_1,2,"=(load)",(ulong *)0x0);
  uVar3 = 1;
  luaL_checktype(param_1,1,6);
  lua_settop(param_1,3);
  iVar1 = lua_load(param_1,FUN_005fb35c,(void *)0x0,pcVar2);
  if (iVar1 != 0) {
    lua_pushnil(param_1);
    lua_insert(param_1,-2);
    uVar3 = 2;
  }
  return uVar3;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa824
 * Function: FUN_005fa824
 * Signature: undefined FUN_005fa824(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa824(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  pcVar2 = (char *)luaL_optlstring(param_1,1,(char *)0x0,(ulong *)0x0);
  iVar1 = luaL_loadfile(param_1,pcVar2);
  if (iVar1 != 0) {
    lua_pushnil(param_1);
    lua_insert(param_1,-2);
    uVar3 = 2;
  }
  return uVar3;
}



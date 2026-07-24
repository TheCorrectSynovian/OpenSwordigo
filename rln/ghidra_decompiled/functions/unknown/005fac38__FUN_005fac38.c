/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fac38
 * Function: FUN_005fac38
 * Signature: undefined FUN_005fac38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fac38(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 005fa610 with catch @ 005fac5c */
  iVar3 = lua_type(param_1,1);
  if ((iVar3 == 4) && (pcVar5 = (char *)lua_tolstring(param_1,1,(ulong *)0x0), *pcVar5 == '#')) {
    lua_pushinteger(param_1,(long)(iVar2 + -1));
                    /* catch() { ... } // from try @ 005fa5fc with catch @ 005fac94 */
    iVar2 = 1;
                    /* catch() { ... } // from try @ 005fa588 with catch @ 005fac98 */
  }
  else {
                    /* catch() { ... } // from try @ 005fa540 with catch @ 005fac9c */
    iVar4 = luaL_checkinteger(param_1,1);
    iVar3 = iVar2;
    if (iVar4 <= iVar2) {
      iVar3 = iVar4;
    }
    iVar1 = iVar2 + iVar4;
    if (-1 < iVar4) {
      iVar1 = iVar3;
    }
    if (iVar1 < 1) {
      luaL_argerror(param_1,1,"index out of range");
    }
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}



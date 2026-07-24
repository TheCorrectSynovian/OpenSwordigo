/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb0e0
 * Function: FUN_005fb0e0
 * Signature: undefined FUN_005fb0e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_005fb0e0(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  luaL_checktype(param_1,1,5);
  iVar1 = luaL_optinteger(param_1,2,1);
  iVar2 = lua_type(param_1,3);
  if (iVar2 < 1) {
    iVar2 = lua_objlen(param_1,1);
  }
  else {
    iVar2 = luaL_checkinteger(param_1,3);
  }
  if (iVar1 <= iVar2) {
    if (-1 < iVar2 - iVar1) {
                    /* catch() { ... } // from try @ 005fab34 with catch @ 005fb16c
                       catch() { ... } // from try @ 005fae2c with catch @ 005fb16c
                       catch() { ... } // from try @ 005fae90 with catch @ 005fb16c
                       catch() { ... } // from try @ 005faee4 with catch @ 005fb16c
                       catch() { ... } // from try @ 005faf24 with catch @ 005fb16c
                       catch() { ... } // from try @ 005fb074 with catch @ 005fb16c */
      uVar5 = (iVar2 - iVar1) + 1;
      iVar3 = lua_checkstack(param_1,uVar5);
      if (iVar3 != 0) {
        lua_rawgeti(param_1,1,iVar1);
        if (iVar1 < iVar2) {
          do {
            iVar1 = iVar1 + 1;
            lua_rawgeti(param_1,1,iVar1);
          } while (iVar2 != iVar1);
        }
        goto LAB_005fb154;
      }
    }
    uVar4 = luaL_error(param_1,"too many results to unpack");
    return uVar4;
  }
  uVar5 = 0;
LAB_005fb154:
  return (ulong)uVar5;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa778
 * Function: FUN_005fa778
 * Signature: undefined FUN_005fa778(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa778(lua_State *param_1)

{
  int iVar1;
  
  FUN_005fb244(param_1,1);
  iVar1 = lua_iscfunction(param_1,-1);
  if (iVar1 == 0) {
    lua_getfenv(param_1,-1);
  }
  else {
    lua_pushvalue(param_1,-0x2712);
  }
  return 1;
}



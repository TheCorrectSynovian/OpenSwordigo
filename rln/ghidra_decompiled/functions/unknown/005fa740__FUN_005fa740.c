/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa740
 * Function: FUN_005fa740
 * Signature: undefined FUN_005fa740(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa740(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gc(param_1,3,0);
  lua_pushinteger(param_1,(long)iVar1);
  return 1;
}



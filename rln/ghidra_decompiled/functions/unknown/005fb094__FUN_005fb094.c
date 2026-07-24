/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb094
 * Function: FUN_005fb094
 * Signature: undefined FUN_005fb094(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fb094(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  
  luaL_checkany(param_1,1);
                    /* try { // try from 005fb0b4 to 006fb16f has its CatchHandler @ 005f9c98 */
  iVar1 = lua_type(param_1,1);
  pcVar2 = (char *)lua_typename(param_1,iVar1);
  lua_pushstring(param_1,pcVar2);
  return 1;
}



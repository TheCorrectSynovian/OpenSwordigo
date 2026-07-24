/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb35c
 * Function: FUN_005fb35c
 * Signature: undefined FUN_005fb35c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fb35c(lua_State *param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  luaL_checkstack(param_1,2,"too many nested functions");
  lua_pushvalue(param_1,1);
  lua_call(param_1,0,1);
                    /* try { // try from 005fb3a0 to 006fb3cf has its CatchHandler @ 005fbe34 */
  iVar1 = lua_type(param_1,-1);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = lua_isstring(param_1,-1);
    if (iVar1 != 0) {
      lua_replace(param_1,3);
      uVar2 = lua_tolstring(param_1,3,param_3);
      return uVar2;
    }
                    /* try { // try from 005fb3f0 to 006fb417 has its CatchHandler @ 005fc150 */
    luaL_error(param_1,"reader function must return a string");
  }
  return 0;
}



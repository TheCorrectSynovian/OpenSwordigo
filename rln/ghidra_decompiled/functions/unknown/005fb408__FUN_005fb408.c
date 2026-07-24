/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb408
 * Function: FUN_005fb408
 * Signature: undefined FUN_005fb408(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fb408(lua_State *param_1)

{
  int iVar1;
  lua_State *plVar2;
  
  plVar2 = (lua_State *)lua_newthread(param_1);
  iVar1 = lua_type(param_1,1);
  if ((iVar1 != 6) || (iVar1 = lua_iscfunction(param_1,1), iVar1 != 0)) {
    luaL_argerror(param_1,1,"Lua function expected");
  }
  lua_pushvalue(param_1,1);
  lua_xmove(param_1,plVar2,1);
                    /* try { // try from 005fb478 to 006fb4a7 has its CatchHandler @ 005fc160 */
  return 1;
}



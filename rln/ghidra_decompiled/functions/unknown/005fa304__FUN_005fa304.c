/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa304
 * Function: FUN_005fa304
 * Signature: undefined FUN_005fa304(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_005fa304(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = luaL_checkinteger(param_1,2);
  luaL_checktype(param_1,1,5);
  lua_pushinteger(param_1,(long)(iVar1 + 1));
                    /* try { // try from 005fa354 to 006fa35f has its CatchHandler @ 005fae08 */
  lua_rawgeti(param_1,1,iVar1 + 1);
                    /* try { // try from 005fa360 to 006fa3bb has its CatchHandler @ 005f9c98 */
  iVar1 = lua_type(param_1,-1);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 2;
  }
  return uVar2;
}



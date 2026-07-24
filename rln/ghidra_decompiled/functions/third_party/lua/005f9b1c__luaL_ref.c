/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9b1c
 * Function: luaL_ref
 * Signature: undefined __cdecl luaL_ref(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_ref(lua_State*, int) */

int luaL_ref(lua_State *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 9999U >> 4 < 0x271) {
    iVar1 = lua_gettop(param_1);
    param_2 = param_2 + iVar1 + 1;
  }
  iVar1 = lua_type(param_1,-1);
  if (iVar1 == 0) {
    lua_settop(param_1,-2);
    iVar1 = -1;
  }
  else {
    lua_rawgeti(param_1,param_2,0);
    iVar1 = lua_tointeger(param_1,-1);
    lua_settop(param_1,-2);
    if (iVar1 == 0) {
      iVar1 = lua_objlen(param_1,param_2);
      iVar1 = iVar1 + 1;
    }
    else {
      lua_rawgeti(param_1,param_2,iVar1);
      lua_rawseti(param_1,param_2,0);
    }
    lua_rawseti(param_1,param_2,iVar1);
  }
  return iVar1;
}



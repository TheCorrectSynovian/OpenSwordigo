/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9bfc
 * Function: luaL_unref
 * Signature: undefined __cdecl luaL_unref(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_unref(lua_State*, int, int) */

void luaL_unref(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    if (param_2 + 9999U >> 4 < 0x271) {
      iVar1 = lua_gettop(param_1);
      param_2 = param_2 + iVar1 + 1;
    }
    lua_rawgeti(param_1,param_2,0);
    lua_rawseti(param_1,param_2,param_3);
    lua_pushinteger(param_1,(long)param_3);
                    /* try { // try from 005f9c74 to 006f9c97 has its CatchHandler @ 005f972c */
    lua_rawseti(param_1,param_2,0);
    return;
  }
                    /* catch() { ... } // from try @ 005f98d4 with catch @ 005f9c94 */
  return;
}



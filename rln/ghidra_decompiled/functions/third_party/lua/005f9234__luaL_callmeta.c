/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9234
 * Function: luaL_callmeta
 * Signature: undefined __cdecl luaL_callmeta(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_callmeta(lua_State*, int, char const*) */

undefined4 luaL_callmeta(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
                    /* try { // try from 005f9260 to 006f9263 has its CatchHandler @ 005f9270 */
  if (param_2 + 9999U >> 4 < 0x271) {
    iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 005f9260 with catch @ 005f9270 */
    param_2 = param_2 + iVar1 + 1;
  }
                    /* catch() { ... } // from try @ 005f9204 with catch @ 005f9274 */
  iVar1 = lua_getmetatable(param_1,param_2);
  if (iVar1 != 0) {
    lua_pushstring(param_1,param_3);
                    /* try { // try from 005f9298 to 006f929f has its CatchHandler @ 005f92a4 */
    lua_rawget(param_1,-2);
                    /* catch() { ... } // from try @ 005f9298 with catch @ 005f92a4 */
    iVar1 = lua_type(param_1,-1);
                    /* catch() { ... } // from try @ 005f8eb0 with catch @ 005f92a8 */
    if (iVar1 != 0) {
      lua_remove(param_1,-2);
                    /* catch() { ... } // from try @ 005f8e54 with catch @ 005f92b8 */
      lua_pushvalue(param_1,param_2);
      lua_call(param_1,1,1);
      return 1;
    }
                    /* try { // try from 005f92dc to 006f92e3 has its CatchHandler @ 005f95f4 */
    lua_settop(param_1,-3);
  }
  return 0;
}



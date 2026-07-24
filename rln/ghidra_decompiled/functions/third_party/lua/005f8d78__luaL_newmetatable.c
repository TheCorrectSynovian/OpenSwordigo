/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8d78
 * Function: luaL_newmetatable
 * Signature: undefined __cdecl luaL_newmetatable(lua_State * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_newmetatable(lua_State*, char const*) */

bool luaL_newmetatable(lua_State *param_1,char *param_2)

{
  int iVar1;
  
                    /* try { // try from 005f8d90 to 006f8d9b has its CatchHandler @ 005f8be4 */
  lua_getfield(param_1,-10000,param_2);
                    /* catch() { ... } // from try @ 005f8d5c with catch @ 005f8d98 */
                    /* catch() { ... } // from try @ 005f90cc with catch @ 005f8d9c
                       catch() { ... } // from try @ 005f95d4 with catch @ 005f8d9c */
  iVar1 = lua_type(param_1,-1);
  if (iVar1 == 0) {
    lua_settop(param_1,-2);
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,-1);
    lua_setfield(param_1,-10000,param_2);
  }
  return iVar1 == 0;
}



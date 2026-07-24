/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f91c0
 * Function: luaL_getmetafield
 * Signature: undefined __cdecl luaL_getmetafield(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_getmetafield(lua_State*, int, char const*) */

undefined8 luaL_getmetafield(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 005f8e10 with catch @ 005f91c0 */
  uVar2 = lua_getmetatable(param_1,param_2);
  if ((int)uVar2 != 0) {
    lua_pushstring(param_1,param_3);
    lua_rawget(param_1,-2);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 == 0) {
      lua_settop(param_1,-3);
      uVar2 = 0;
    }
    else {
                    /* try { // try from 005f9204 to 006f922b has its CatchHandler @ 005f9274 */
      lua_remove(param_1,-2);
      uVar2 = 1;
    }
  }
  return uVar2;
}



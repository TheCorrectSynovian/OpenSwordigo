/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8df8
 * Function: luaL_checkudata
 * Signature: undefined __cdecl luaL_checkudata(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checkudata(lua_State*, int, char const*) */

long luaL_checkudata(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
                    /* try { // try from 005f8e10 to 006f8e13 has its CatchHandler @ 005f91c0 */
  lVar2 = lua_touserdata(param_1,param_2);
  if ((lVar2 != 0) && (iVar1 = lua_getmetatable(param_1,param_2), iVar1 != 0)) {
    lua_getfield(param_1,-10000,param_3);
    iVar1 = lua_rawequal(param_1,-1,-2);
    if (iVar1 != 0) {
                    /* try { // try from 005f8e54 to 006f8e7b has its CatchHandler @ 005f92b8 */
      lua_settop(param_1,-3);
      return lVar2;
    }
  }
  iVar1 = lua_type(param_1,param_2);
  uVar3 = lua_typename(param_1,iVar1);
  pcVar4 = (char *)lua_pushfstring(param_1,"%s expected, got %s",param_3,uVar3);
  luaL_argerror(param_1,param_2,pcVar4);
                    /* try { // try from 005f8eb0 to 006f8eb3 has its CatchHandler @ 005f92a8 */
  return 0;
}



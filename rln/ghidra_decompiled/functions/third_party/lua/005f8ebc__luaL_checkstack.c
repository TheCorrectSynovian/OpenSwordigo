/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8ebc
 * Function: luaL_checkstack
 * Signature: undefined __cdecl luaL_checkstack(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checkstack(lua_State*, int, char const*) */

void luaL_checkstack(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = lua_checkstack(param_1,param_2);
  if (iVar1 != 0) {
                    /* try { // try from 005f8edc to 006f8edf has its CatchHandler @ 005f9158 */
    return;
  }
  luaL_error(param_1,"stack overflow (%s)",param_3);
  return;
}



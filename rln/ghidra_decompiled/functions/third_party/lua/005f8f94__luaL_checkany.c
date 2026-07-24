/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8f94
 * Function: luaL_checkany
 * Signature: undefined __cdecl luaL_checkany(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checkany(lua_State*, int) */

void luaL_checkany(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 != -1) {
    return;
  }
                    /* try { // try from 005f8fcc to 006f8ff3 has its CatchHandler @ 005f9190 */
  luaL_argerror(param_1,param_2,"value expected");
  return;
}



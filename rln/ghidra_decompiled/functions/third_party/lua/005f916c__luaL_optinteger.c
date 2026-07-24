/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f916c
 * Function: luaL_optinteger
 * Signature: undefined __cdecl luaL_optinteger(lua_State * param_1, int param_2, long param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_optinteger(lua_State*, int, long) */

long luaL_optinteger(lua_State *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 005f905c with catch @ 005f9170 */
                    /* catch() { ... } // from try @ 005f9014 with catch @ 005f9180 */
  iVar1 = lua_type(param_1,param_2);
                    /* catch() { ... } // from try @ 005f8fcc with catch @ 005f9190 */
  if (0 < iVar1) {
                    /* catch() { ... } // from try @ 005f8f84 with catch @ 005f91a0 */
    lVar2 = luaL_checkinteger(param_1,param_2);
    return lVar2;
  }
                    /* catch() { ... } // from try @ 005f8f3c with catch @ 005f91b0 */
  return param_3;
}



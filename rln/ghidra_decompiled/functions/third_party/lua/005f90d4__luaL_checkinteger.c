/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f90d4
 * Function: luaL_checkinteger
 * Signature: undefined __cdecl luaL_checkinteger(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checkinteger(lua_State*, int) */

long luaL_checkinteger(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = lua_tointeger(param_1,param_2);
  if ((lVar2 == 0) && (iVar1 = lua_isnumber(param_1,param_2), iVar1 == 0)) {
    uVar3 = lua_typename(param_1,3);
    iVar1 = lua_type(param_1,param_2);
    uVar4 = lua_typename(param_1,iVar1);
    pcVar5 = (char *)lua_pushfstring(param_1,"%s expected, got %s",uVar3,uVar4);
                    /* catch() { ... } // from try @ 005f8f00 with catch @ 005f9150 */
    luaL_argerror(param_1,param_2,pcVar5);
  }
                    /* catch() { ... } // from try @ 005f8edc with catch @ 005f9158 */
                    /* catch() { ... } // from try @ 005f90a4 with catch @ 005f9168 */
  return lVar2;
}



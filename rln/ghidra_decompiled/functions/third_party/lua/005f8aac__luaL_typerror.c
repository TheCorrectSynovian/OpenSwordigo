/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8aac
 * Function: luaL_typerror
 * Signature: undefined __cdecl luaL_typerror(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_typerror(lua_State*, int, char const*) */

void luaL_typerror(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = lua_type(param_1,param_2);
  uVar2 = lua_typename(param_1,iVar1);
  pcVar3 = (char *)lua_pushfstring(param_1,"%s expected, got %s",param_3,uVar2);
  luaL_argerror(param_1,param_2,pcVar3);
  return;
}



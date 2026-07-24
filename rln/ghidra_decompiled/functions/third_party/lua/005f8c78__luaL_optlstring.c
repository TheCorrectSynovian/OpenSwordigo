/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8c78
 * Function: luaL_optlstring
 * Signature: undefined __cdecl luaL_optlstring(lua_State * param_1, int param_2, char * param_3, ulong * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_optlstring(lua_State*, int, char const*, unsigned long*) */

char * luaL_optlstring(lua_State *param_1,int param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  
                    /* try { // try from 005f8c84 to 006f8cf3 has its CatchHandler @ 005f8be4 */
  iVar1 = lua_type(param_1,param_2);
  if (0 < iVar1) {
    pcVar2 = (char *)luaL_checklstring(param_1,param_2,param_4);
    return pcVar2;
  }
  if (param_4 != (ulong *)0x0) {
    if (param_3 == (char *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen(param_3);
    }
    *param_4 = sVar3;
  }
  return param_3;
}



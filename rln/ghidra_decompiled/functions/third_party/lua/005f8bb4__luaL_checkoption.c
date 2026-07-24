/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8bb4
 * Function: luaL_checkoption
 * Signature: undefined __cdecl luaL_checkoption(lua_State * param_1, int param_2, char * param_3, char * * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checkoption(lua_State*, int, char const*, char const* const*) */

ulong luaL_checkoption(lua_State *param_1,int param_2,char *param_3,char **param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  
                    /* try { // try from 005f8be4 to 006f8c73 has its CatchHandler @ 005f8be4
                       catch() { ... } // from try @ 005f8be4 with catch @ 005f8be4
                       catch() { ... } // from try @ 005f8c84 with catch @ 005f8be4
                       catch() { ... } // from try @ 005f8d0c with catch @ 005f8be4
                       catch() { ... } // from try @ 005f8d90 with catch @ 005f8be4 */
  if ((param_3 == (char *)0x0) || (iVar1 = lua_type(param_1,param_2), 0 < iVar1)) {
    param_3 = (char *)luaL_checklstring(param_1,param_2,(ulong *)0x0);
  }
  pcVar2 = *param_4;
  if (pcVar2 != (char *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = strcmp(pcVar2,param_3);
      if (iVar1 == 0) {
                    /* try { // try from 005f8c74 to 006f8c83 has its CatchHandler @ 005f8d68 */
        return uVar3 & 0xffffffff;
      }
      pcVar2 = param_4[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (pcVar2 != (char *)0x0);
  }
  pcVar2 = (char *)lua_pushfstring(param_1,"invalid option \'%s\'",param_3);
  uVar3 = luaL_argerror(param_1,param_2,pcVar2);
  return uVar3;
}



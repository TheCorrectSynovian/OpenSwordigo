/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8cf0
 * Function: luaL_checklstring
 * Signature: undefined __cdecl luaL_checklstring(lua_State * param_1, int param_2, ulong * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checklstring(lua_State*, int, unsigned long*) */

long luaL_checklstring(lua_State *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
                    /* try { // try from 005f8cf4 to 006f8d0b has its CatchHandler @ 005f8d38 */
  lVar2 = lua_tolstring(param_1,param_2,param_3);
                    /* try { // try from 005f8d0c to 006f8d5b has its CatchHandler @ 005f8be4 */
  if (lVar2 == 0) {
    uVar3 = lua_typename(param_1,4);
    iVar1 = lua_type(param_1,param_2);
                    /* catch() { ... } // from try @ 005f8cf4 with catch @ 005f8d38 */
    uVar4 = lua_typename(param_1,iVar1);
    pcVar5 = (char *)lua_pushfstring(param_1,"%s expected, got %s",uVar3,uVar4);
                    /* try { // try from 005f8d5c to 006f8d8f has its CatchHandler @ 005f8d98 */
    luaL_argerror(param_1,param_2,pcVar5);
  }
                    /* catch() { ... } // from try @ 005f8c74 with catch @ 005f8d68 */
  return lVar2;
}



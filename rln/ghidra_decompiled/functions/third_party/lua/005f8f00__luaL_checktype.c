/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8f00
 * Function: luaL_checktype
 * Signature: undefined __cdecl luaL_checktype(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checktype(lua_State*, int, int) */

void luaL_checktype(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
                    /* try { // try from 005f8f00 to 006f8f03 has its CatchHandler @ 005f9150 */
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == param_3) {
    return;
  }
                    /* try { // try from 005f8f3c to 006f8f63 has its CatchHandler @ 005f91b0 */
  uVar2 = lua_typename(param_1,param_3);
  iVar1 = lua_type(param_1,param_2);
  uVar3 = lua_typename(param_1,iVar1);
  pcVar4 = (char *)lua_pushfstring(param_1,"%s expected, got %s",uVar2,uVar3);
                    /* try { // try from 005f8f84 to 006f8fab has its CatchHandler @ 005f91a0 */
  luaL_argerror(param_1,param_2,pcVar4);
  return;
}



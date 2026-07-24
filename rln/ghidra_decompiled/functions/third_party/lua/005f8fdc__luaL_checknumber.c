/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8fdc
 * Function: luaL_checknumber
 * Signature: undefined __cdecl luaL_checknumber(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_checknumber(lua_State*, int) */

undefined1  [16] luaL_checknumber(lua_State *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  
  auVar5 = lua_tonumber(param_1,param_2);
  uVar6 = auVar5._8_8_;
                    /* try { // try from 005f9014 to 006f903b has its CatchHandler @ 005f9180 */
  if ((auVar5._0_8_ == 0.0) && (iVar1 = lua_isnumber(param_1,param_2), iVar1 == 0)) {
    uVar2 = lua_typename(param_1,3);
    iVar1 = lua_type(param_1,param_2);
    uVar3 = lua_typename(param_1,iVar1);
    pcVar4 = (char *)lua_pushfstring(param_1,"%s expected, got %s",uVar2,uVar3);
                    /* try { // try from 005f905c to 006f9083 has its CatchHandler @ 005f9170 */
    luaL_argerror(param_1,param_2,pcVar4);
  }
  auVar5._8_8_ = uVar6;
  return auVar5;
}



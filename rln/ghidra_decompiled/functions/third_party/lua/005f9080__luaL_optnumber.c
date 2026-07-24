/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9080
 * Function: luaL_optnumber
 * Signature: undefined __cdecl luaL_optnumber(lua_State * param_1, int param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_optnumber(lua_State*, int, double) */

undefined1  [16] luaL_optnumber(lua_State *param_1,int param_2,double param_3)

{
  int iVar1;
  undefined8 in_register_00005008;
  undefined1 auVar2 [16];
  
  iVar1 = lua_type(param_1,param_2);
                    /* try { // try from 005f90a4 to 006f90cb has its CatchHandler @ 005f9168 */
  if (0 < iVar1) {
    auVar2 = luaL_checknumber(param_1,param_2);
    return auVar2;
  }
  auVar2._8_8_ = in_register_00005008;
  auVar2._0_8_ = param_3;
                    /* try { // try from 005f90cc to 006f9203 has its CatchHandler @ 005f8d9c */
  return auVar2;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa584
 * Function: FUN_005fa584
 * Signature: undefined FUN_005fa584(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005fa584(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
                    /* try { // try from 005fa588 to 006fa58b has its CatchHandler @ 005fac98 */
                    /* try { // try from 005fa58c to 006fa5fb has its CatchHandler @ 005f9c98 */
  iVar1 = luaL_checkoption(param_1,1,"collect",(char **)&DAT_007d8b38);
  iVar2 = luaL_optinteger(param_1,2,0);
  iVar1 = *(int *)(&DAT_0069aa0c + (long)iVar1 * 4);
  iVar2 = lua_gc(param_1,iVar1,iVar2);
  if (iVar1 == 5) {
                    /* try { // try from 005fa624 to 006fa633 has its CatchHandler @ 005fac00 */
    lua_pushboolean(param_1,iVar2);
  }
  else {
    if (iVar1 == 3) {
                    /* try { // try from 005fa5fc to 006fa60f has its CatchHandler @ 005fac94 */
      iVar1 = lua_gc(param_1,4,0);
                    /* try { // try from 005fa610 to 006fa623 has its CatchHandler @ 005fac5c */
      dVar3 = (double)iVar1 * _LAB_0069a688 + (double)iVar2;
    }
    else {
      dVar3 = (double)iVar2;
    }
                    /* try { // try from 005fa634 to 006fab33 has its CatchHandler @ 005f9c98 */
    lua_pushnumber(param_1,dVar3);
  }
  return 1;
}



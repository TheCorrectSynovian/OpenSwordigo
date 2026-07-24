/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa518
 * Function: FUN_005fa518
 * Signature: undefined FUN_005fa518(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fa518(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* try { // try from 005fa518 to 006fa52b has its CatchHandler @ 005fad30 */
                    /* try { // try from 005fa52c to 006fa53f has its CatchHandler @ 005facf8 */
  luaL_checkany(param_1,1);
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 != 0) {
                    /* try { // try from 005fa540 to 006fa54f has its CatchHandler @ 005fac9c */
    lua_gettop(param_1);
    return;
  }
                    /* try { // try from 005fa550 to 006fa587 has its CatchHandler @ 005f9c98 */
  uVar2 = luaL_optlstring(param_1,2,"assertion failed!",(ulong *)0x0);
  luaL_error(param_1,"%s",uVar2);
  return;
}



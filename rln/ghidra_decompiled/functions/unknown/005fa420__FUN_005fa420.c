/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa420
 * Function: FUN_005fa420
 * Signature: undefined FUN_005fa420(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa420(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 005fa434 to 006fa447 has its CatchHandler @ 005fadf8 */
  lua_settop(param_1,1);
  lua_newuserdata(param_1,0);
                    /* try { // try from 005fa448 to 006fa45b has its CatchHandler @ 005fad94 */
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 == 0) {
    return 1;
  }
                    /* try { // try from 005fa45c to 006fa46b has its CatchHandler @ 005fad38 */
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 1) {
                    /* try { // try from 005fa46c to 006fa4a3 has its CatchHandler @ 005f9c98 */
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,-1);
    lua_pushboolean(param_1,1);
    lua_rawset(param_1,-0x2713);
    goto LAB_005fa4fc;
  }
                    /* try { // try from 005fa4a4 to 006fa4a7 has its CatchHandler @ 005fad34 */
                    /* try { // try from 005fa4a8 to 006fa517 has its CatchHandler @ 005f9c98 */
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
LAB_005fa4dc:
    luaL_argerror(param_1,1,"boolean or proxy expected");
  }
  else {
    lua_rawget(param_1,-0x2713);
    iVar1 = lua_toboolean(param_1,-1);
    lua_settop(param_1,-2);
    if (iVar1 == 0) goto LAB_005fa4dc;
  }
  lua_getmetatable(param_1,1);
LAB_005fa4fc:
  lua_setmetatable(param_1,2);
  return 1;
}



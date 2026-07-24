/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9308
 * Function: luaL_openlib
 * Signature: undefined __cdecl luaL_openlib(lua_State * param_1, char * param_2, luaL_Reg * param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_openlib(lua_State*, char const*, luaL_Reg const*, int) */

void luaL_openlib(lua_State *param_1,char *param_2,luaL_Reg *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  luaL_Reg *plVar3;
  int iVar4;
  
                    /* try { // try from 005f9324 to 006f934b has its CatchHandler @ 005f9608 */
  if (param_2 != (char *)0x0) {
    if (*(long *)param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      plVar3 = param_3;
      do {
        plVar3 = plVar3 + 0x10;
        iVar4 = iVar4 + 1;
      } while (*(long *)plVar3 != 0);
    }
    luaL_findtable(param_1,-10000,"_LOADED",1);
    lua_getfield(param_1,-1,param_2);
                    /* try { // try from 005f9380 to 006f9383 has its CatchHandler @ 005f95fc */
    iVar1 = lua_type(param_1,-1);
    if (iVar1 != 5) {
      lua_settop(param_1,-2);
                    /* try { // try from 005f93ac to 006f95d3 has its CatchHandler @ 005f95f8 */
      lVar2 = luaL_findtable(param_1,-0x2712,param_2,iVar4);
      if (lVar2 != 0) {
        luaL_error(param_1,"name conflict for module \'%s\'",param_2);
      }
      lua_pushvalue(param_1,-1);
      lua_setfield(param_1,-3,param_2);
    }
    lua_remove(param_1,-2);
    lua_insert(param_1,~param_4);
  }
  if (*(long *)param_3 != 0) {
    do {
      iVar4 = param_4;
      if (0 < param_4) {
        do {
          lua_pushvalue(param_1,-param_4);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      lua_pushcclosure(param_1,*(_func_int_lua_State_ptr **)(param_3 + 8),param_4);
      lua_setfield(param_1,-2 - param_4,*(char **)param_3);
      param_3 = param_3 + 0x10;
    } while (*(long *)param_3 != 0);
  }
  lua_settop(param_1,~param_4);
  return;
}



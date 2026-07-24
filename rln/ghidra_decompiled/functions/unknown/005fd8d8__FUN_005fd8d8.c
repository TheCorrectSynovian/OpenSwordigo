/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fd8d8
 * Function: FUN_005fd8d8
 * Signature: undefined FUN_005fd8d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fd8d8(long *param_1,int param_2,char *param_3,long param_4)

{
  lua_State *plVar1;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 005fd7a8 with catch @ 005fd8ec */
  if (param_2 < (int)param_1[3]) {
    uVar2 = param_1[(long)param_2 * 2 + 5];
    if (uVar2 == 0xffffffffffffffff) {
      luaL_error((lua_State *)param_1[2],"unfinished capture");
      plVar1 = (lua_State *)param_1[2];
      param_3 = (char *)param_1[(long)param_2 * 2 + 4];
    }
    else {
      plVar1 = (lua_State *)param_1[2];
      param_3 = (char *)param_1[(long)param_2 * 2 + 4];
      if (uVar2 == 0xfffffffffffffffe) {
        lua_pushinteger(plVar1,(long)(param_3 + (1 - *param_1)));
        return;
      }
    }
  }
  else {
    plVar1 = (lua_State *)param_1[2];
    if (param_2 != 0) {
                    /* catch() { ... } // from try @ 005fd748 with catch @ 005fd948 */
      luaL_error(plVar1,"invalid capture index");
      return;
    }
    uVar2 = param_4 - (long)param_3;
  }
  lua_pushlstring(plVar1,param_3,uVar2);
  return;
}



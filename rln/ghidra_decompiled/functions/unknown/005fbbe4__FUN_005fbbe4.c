/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fbbe4
 * Function: FUN_005fbbe4
 * Signature: undefined FUN_005fbbe4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fbbe4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  luaL_Buffer alStack_450 [1048];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  luaL_checktype(param_1,1,6);
  lua_settop(param_1,1);
  luaL_buffinit(param_1,alStack_450);
  iVar2 = lua_dump(param_1,FUN_005fcadc,alStack_450);
  if (iVar2 != 0) {
    luaL_error(param_1,"unable to dump given function");
  }
  luaL_pushresult(alStack_450);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f888c
 * Function: luaL_argerror
 * Signature: undefined __cdecl luaL_argerror(lua_State * param_1, int param_2, char * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_argerror(lua_State*, int, char const*) */

void luaL_argerror(lua_State *param_1,int param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  lua_Debug alStack_b0 [8];
  undefined *local_a8;
  char *local_a0;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)(uint)param_2;
  iVar2 = lua_getstack(param_1,0,alStack_b0);
  if (iVar2 == 0) {
    luaL_error(param_1,"bad argument #%d (%s)",uVar3,param_3);
  }
  else {
    lua_getinfo(param_1,"n",alStack_b0);
    iVar2 = strcmp(local_a0,"method");
    if ((iVar2 == 0) && (uVar3 = (ulong)(param_2 - 1U), param_2 - 1U == 0)) {
      luaL_error(param_1,"calling \'%s\' on bad self (%s)",local_a8,param_3);
    }
    else {
      if (local_a8 == (undefined *)0x0) {
        local_a8 = &DAT_0069a393;
      }
      luaL_error(param_1,"bad argument #%d to \'%s\' (%s)",uVar3,local_a8,param_3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



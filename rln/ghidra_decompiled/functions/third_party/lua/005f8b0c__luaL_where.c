/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8b0c
 * Function: luaL_where
 * Signature: undefined __cdecl luaL_where(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_where(lua_State*, int) */

void luaL_where(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  lua_Debug alStack_b0 [40];
  int local_88;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_getstack(param_1,param_2,alStack_b0);
  if (iVar2 != 0) {
    lua_getinfo(param_1,"Sl",alStack_b0);
    if (0 < local_88) {
      lua_pushfstring(param_1,"%s:%d: ",auStack_78);
      goto LAB_005f8b8c;
    }
  }
  lua_pushlstring(param_1,"",0);
LAB_005f8b8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



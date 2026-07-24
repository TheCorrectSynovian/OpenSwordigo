/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9a88
 * Function: lua_cpcall
 * Signature: undefined __cdecl lua_cpcall(lua_State * param_1, _func_int_lua_State_ptr * param_2, void * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_cpcall(lua_State*, int (*)(lua_State*), void*) */

void lua_cpcall(lua_State *param_1,_func_int_lua_State_ptr *param_2,void *param_3)

{
  long lVar1;
  _func_int_lua_State_ptr *local_38;
  void *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  pvStack_30 = param_3;
  FUN_005ec9bc(param_1,FUN_005e9aec,&local_38,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x40),
               0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



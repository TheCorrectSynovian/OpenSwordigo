/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9b8c
 * Function: lua_load
 * Signature: undefined __cdecl lua_load(lua_State * param_1, _func_char_ptr_lua_State_ptr_void_ptr_ulong_ptr * param_2, void * param_3, char * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_load(lua_State*, char const* (*)(lua_State*, void*, unsigned long*), void*, char const*) */

void lua_load(lua_State *param_1,_func_char_ptr_lua_State_ptr_void_ptr_ulong_ptr *param_2,
             void *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = "?";
  if (param_4 != (char *)0x0) {
    pcVar1 = param_4;
  }
  FUN_005f8748(param_1,auStack_60,param_2,param_3);
  FUN_005ecb9c(param_1,auStack_60,pcVar1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



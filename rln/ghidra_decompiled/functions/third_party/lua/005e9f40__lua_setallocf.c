/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9f40
 * Function: lua_setallocf
 * Signature: undefined __cdecl lua_setallocf(lua_State * param_1, _func_void_ptr_void_ptr_void_ptr_ulong_ulong * param_2, void * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setallocf(lua_State*, void* (*)(void*, void*, unsigned long, unsigned long), void*) */

void lua_setallocf(lua_State *param_1,_func_void_ptr_void_ptr_void_ptr_ulong_ulong *param_2,
                  void *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(_func_void_ptr_void_ptr_void_ptr_ulong_ulong **)(lVar1 + 0x10) = param_2;
  *(void **)(lVar1 + 0x18) = param_3;
  return;
}



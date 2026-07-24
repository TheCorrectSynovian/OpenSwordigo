/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea334
 * Function: lua_sethook
 * Signature: undefined __cdecl lua_sethook(lua_State * param_1, _func_void_lua_State_ptr_lua_Debug_ptr * param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_sethook(lua_State*, void (*)(lua_State*, lua_Debug*), int, int) */

undefined8
lua_sethook(lua_State *param_1,_func_void_lua_State_ptr_lua_Debug_ptr *param_2,int param_3,
           int param_4)

{
  int iVar1;
  _func_void_lua_State_ptr_lua_Debug_ptr *p_Var2;
  
  p_Var2 = (_func_void_lua_State_ptr_lua_Debug_ptr *)0x0;
  if (param_2 != (_func_void_lua_State_ptr_lua_Debug_ptr *)0x0 && param_3 != 0) {
    p_Var2 = param_2;
  }
  iVar1 = 0;
  if (param_2 != (_func_void_lua_State_ptr_lua_Debug_ptr *)0x0 && param_3 != 0) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x68) = param_4;
  *(int *)(param_1 + 0x6c) = param_4;
  *(_func_void_lua_State_ptr_lua_Debug_ptr **)(param_1 + 0x70) = p_Var2;
  param_1[100] = SUB41(iVar1,0);
  return 1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e688c
 * Function: lua_atpanic
 * Signature: undefined __cdecl lua_atpanic(lua_State * param_1, _func_int_lua_State_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_atpanic(lua_State*, int (*)(lua_State*)) */

undefined8 lua_atpanic(lua_State *param_1,_func_int_lua_State_ptr *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  *(_func_int_lua_State_ptr **)(*(long *)(param_1 + 0x20) + 0x98) = param_2;
  return uVar1;
}



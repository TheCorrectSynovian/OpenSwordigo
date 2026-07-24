/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e855c
 * Function: lua_pushnumber
 * Signature: undefined __cdecl lua_pushnumber(lua_State * param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushnumber(lua_State*, double) */

void lua_pushnumber(lua_State *param_1,double param_2)

{
  double *pdVar1;
  
  pdVar1 = *(double **)(param_1 + 0x10);
  *pdVar1 = param_2;
  *(undefined4 *)(pdVar1 + 1) = 3;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}



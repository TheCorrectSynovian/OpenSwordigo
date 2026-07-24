/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ec964
 * Function: lua_yield
 * Signature: undefined __cdecl lua_yield(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_yield(lua_State*, int) */

undefined8 lua_yield(lua_State *param_1,int param_2)

{
  if (*(ushort *)(param_1 + 0x62) < *(ushort *)(param_1 + 0x60)) {
    FUN_005eb320(param_1,"attempt to yield across metamethod/C-call boundary");
  }
  param_1[10] = (lua_State)0x1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + (long)param_2 * -0x10;
  return 0xffffffff;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e88e0
 * Function: lua_pushboolean
 * Signature: undefined __cdecl lua_pushboolean(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushboolean(lua_State*, int) */

void lua_pushboolean(lua_State *param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
                    /* try { // try from 005e88e4 to 006e88e7 has its CatchHandler @ 005e8a70 */
  *puVar1 = (uint)(param_2 != 0);
  puVar1[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}



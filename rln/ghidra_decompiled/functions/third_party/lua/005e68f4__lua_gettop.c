/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e68f4
 * Function: lua_gettop
 * Signature: undefined __cdecl lua_gettop(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gettop(lua_State*) */

ulong lua_gettop(lua_State *param_1)

{
  return (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18)) >> 4;
}



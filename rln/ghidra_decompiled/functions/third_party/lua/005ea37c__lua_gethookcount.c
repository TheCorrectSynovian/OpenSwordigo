/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea37c
 * Function: lua_gethookcount
 * Signature: undefined __cdecl lua_gethookcount(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gethookcount(lua_State*) */

undefined4 lua_gethookcount(lua_State *param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



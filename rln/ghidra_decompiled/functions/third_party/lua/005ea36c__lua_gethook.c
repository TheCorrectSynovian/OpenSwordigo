/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea36c
 * Function: lua_gethook
 * Signature: undefined __cdecl lua_gethook(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gethook(lua_State*) */

undefined8 lua_gethook(lua_State *param_1)

{
                    /* catch() { ... } // from try @ 005e8e38 with catch @ 005ea370 */
  return *(undefined8 *)(param_1 + 0x70);
}



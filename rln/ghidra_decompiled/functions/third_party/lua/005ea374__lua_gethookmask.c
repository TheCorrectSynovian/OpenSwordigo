/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea374
 * Function: lua_gethookmask
 * Signature: undefined __cdecl lua_gethookmask(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gethookmask(lua_State*) */

lua_State lua_gethookmask(lua_State *param_1)

{
                    /* catch() { ... } // from try @ 005e8df8 with catch @ 005ea374 */
  return param_1[100];
}



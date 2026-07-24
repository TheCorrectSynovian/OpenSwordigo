/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6f54
 * Function: lua_typename
 * Signature: undefined __cdecl lua_typename(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_typename(lua_State*, int) */

char * lua_typename(lua_State *param_1,int param_2)

{
  if (param_2 != -1) {
    return (&PTR_s_nil_0069a2c8_0xf_007d8858)[param_2];
  }
  return "no value";
}



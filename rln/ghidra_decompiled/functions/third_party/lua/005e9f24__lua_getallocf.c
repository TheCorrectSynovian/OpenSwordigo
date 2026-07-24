/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9f24
 * Function: lua_getallocf
 * Signature: undefined __cdecl lua_getallocf(lua_State * param_1, void * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getallocf(lua_State*, void**) */

undefined8 lua_getallocf(lua_State *param_1,void **param_2)

{
  if (param_2 != (void **)0x0) {
    *param_2 = *(void **)(*(long *)(param_1 + 0x20) + 0x18);
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6880
 * Function: lua_setlevel
 * Signature: undefined __cdecl lua_setlevel(lua_State * param_1, lua_State * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setlevel(lua_State*, lua_State*) */

void lua_setlevel(lua_State *param_1,lua_State *param_2)

{
  *(undefined2 *)(param_2 + 0x60) = *(undefined2 *)(param_1 + 0x60);
  return;
}



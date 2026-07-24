/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f976c
 * Function: luaL_buffinit
 * Signature: undefined __cdecl luaL_buffinit(lua_State * param_1, luaL_Buffer * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_buffinit(lua_State*, luaL_Buffer*) */

void luaL_buffinit(lua_State *param_1,luaL_Buffer *param_2)

{
  *(lua_State **)(param_2 + 0x10) = param_1;
  *(luaL_Buffer **)param_2 = param_2 + 0x18;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



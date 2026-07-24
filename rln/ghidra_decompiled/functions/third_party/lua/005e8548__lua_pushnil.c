/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8548
 * Function: lua_pushnil
 * Signature: undefined __cdecl lua_pushnil(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushnil(lua_State*) */

void lua_pushnil(lua_State *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 8) = 0;
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
                    /* try { // try from 005e8558 to 006e85d3 has its CatchHandler @ 005e8354 */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8908
 * Function: lua_pushlightuserdata
 * Signature: undefined __cdecl lua_pushlightuserdata(lua_State * param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushlightuserdata(lua_State*, void*) */

void lua_pushlightuserdata(lua_State *param_1,void *param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 005e8908 to 006e8913 has its CatchHandler @ 005e8a34 */
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = 2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}



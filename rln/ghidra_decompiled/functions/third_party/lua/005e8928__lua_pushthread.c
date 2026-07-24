/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8928
 * Function: lua_pushthread
 * Signature: undefined __cdecl lua_pushthread(lua_State * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushthread(lua_State*) */

bool lua_pushthread(lua_State *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005e8930 to 006e8957 has its CatchHandler @ 005e8ab4 */
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = 8;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return *(lua_State **)(*(long *)(param_1 + 0x20) + 0xb0) == param_1;
}



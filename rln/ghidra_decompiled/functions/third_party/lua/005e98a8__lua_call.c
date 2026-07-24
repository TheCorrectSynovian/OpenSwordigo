/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e98a8
 * Function: lua_call
 * Signature: undefined __cdecl lua_call(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_call(lua_State*, int, int) */

void lua_call(lua_State *param_1,int param_2,int param_3)

{
  FUN_005ec63c(param_1,*(long *)(param_1 + 0x10) + (long)(param_2 + 1) * -0x10);
  if (param_3 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x28) + 0x10) <= *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x28) + 0x10) = *(ulong *)(param_1 + 0x10);
    }
  }
  return;
}



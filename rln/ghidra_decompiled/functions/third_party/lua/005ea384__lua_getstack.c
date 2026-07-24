/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea384
 * Function: lua_getstack
 * Signature: undefined __cdecl lua_getstack(lua_State * param_1, int param_2, lua_Debug * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getstack(lua_State*, int, lua_Debug*) */

undefined8 lua_getstack(lua_State *param_1,int param_2,lua_Debug *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (0 < param_2) {
    do {
      if (uVar3 <= *(ulong *)(param_1 + 0x50)) {
        return 0;
      }
      param_2 = param_2 + -1;
                    /* catch() { ... } // from try @ 005e8dd8 with catch @ 005ea3ac */
      if (*(char *)(**(long **)(uVar3 + 8) + 10) == '\0') {
                    /* catch() { ... } // from try @ 005e8d9c with catch @ 005ea3b0 */
        param_2 = param_2 - *(int *)(uVar3 + 0x24);
      }
      uVar3 = uVar3 - 0x28;
    } while (0 < param_2);
  }
  if (param_2 == 0) {
    uVar1 = uVar3 - *(ulong *)(param_1 + 0x50);
    if (uVar3 < *(ulong *)(param_1 + 0x50) || uVar1 == 0) {
      return 0;
    }
                    /* catch() { ... } // from try @ 005e8d7c with catch @ 005ea3e8 */
                    /* catch() { ... } // from try @ 005e8d40 with catch @ 005ea3ec */
    iVar2 = (int)(uVar1 >> 3) * -0x33333333;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(param_3 + 0x74) = iVar2;
  return 1;
}



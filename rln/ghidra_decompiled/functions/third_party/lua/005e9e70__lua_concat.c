/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9e70
 * Function: lua_concat
 * Signature: undefined __cdecl lua_concat(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_concat(lua_State*, int) */

void lua_concat(lua_State *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 < 2) {
    if (param_2 != 0) {
      return;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = FUN_005f356c(param_1,&DAT_0068fbeb,0);
    *puVar3 = uVar1;
    *(undefined4 *)(puVar3 + 1) = 4;
                    /* catch() { ... } // from try @ 005e97f0 with catch @ 005e9f0c */
    lVar2 = *(long *)(param_1 + 0x10) + 0x10;
  }
  else {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
    FUN_005f67ec(param_1,param_2,
                 (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18)) >> 4) + -1);
                    /* catch() { ... } // from try @ 005e9804 with catch @ 005e9ed4 */
    lVar2 = *(long *)(param_1 + 0x10) + (long)(param_2 + -1) * -0x10;
  }
                    /* catch() { ... } // from try @ 005e91d4 with catch @ 005e9f10
                       catch() { ... } // from try @ 005e9c28 with catch @ 005e9f10 */
  *(long *)(param_1 + 0x10) = lVar2;
                    /* catch() { ... } // from try @ 005e97b0 with catch @ 005e9f18 */
  return;
}



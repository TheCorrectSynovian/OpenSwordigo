/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9f4c
 * Function: lua_newuserdata
 * Signature: undefined __cdecl lua_newuserdata(lua_State * param_1, ulong param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_newuserdata(lua_State*, unsigned long) */

long lua_newuserdata(lua_State *param_1,ulong param_2)

{
  long lVar1;
  lua_State *plVar2;
  long *plVar3;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78))
  {
    FUN_005edcb0(param_1);
  }
                    /* catch() { ... } // from try @ 005e979c with catch @ 005e9f80 */
                    /* catch() { ... } // from try @ 005e9214 with catch @ 005e9f84 */
  if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x50)) {
    plVar2 = param_1 + 0x78;
  }
  else {
    plVar2 = (lua_State *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
  }
  lVar1 = FUN_005f3708(param_1,param_2,*(undefined8 *)plVar2);
  plVar3 = *(long **)(param_1 + 0x10);
  *plVar3 = lVar1;
  *(undefined4 *)(plVar3 + 1) = 7;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return lVar1 + 0x28;
}



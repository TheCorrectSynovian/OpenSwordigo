/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6764
 * Function: lua_checkstack
 * Signature: undefined __cdecl lua_checkstack(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_checkstack(lua_State*, int) */

undefined8 lua_checkstack(lua_State *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 < 0x1f41) {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((long)param_2 + (lVar2 - *(long *)(param_1 + 0x18) >> 4) < 0x1f41) {
      if (0 < param_2) {
        if (*(long *)(param_1 + 0x38) - lVar2 <= (long)(param_2 << 4)) {
          FUN_005ebbb8(param_1);
          lVar2 = *(long *)(param_1 + 0x10);
        }
        uVar1 = lVar2 + (long)param_2 * 0x10;
        if (*(ulong *)(*(long *)(param_1 + 0x28) + 0x10) < uVar1) {
          *(ulong *)(*(long *)(param_1 + 0x28) + 0x10) = uVar1;
        }
      }
      return 1;
    }
  }
  return 0;
}



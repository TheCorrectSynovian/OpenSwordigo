/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9c58
 * Function: lua_gc
 * Signature: undefined __cdecl lua_gc(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gc(lua_State*, int, int) */

ulong lua_gc(lua_State *param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (7 < (uint)param_2) {
    return 0xffffffff;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  switch(param_2) {
  case 0:
    uVar2 = 0xfffffffffffffffd;
    goto LAB_005e9ca0;
  case 1:
    uVar2 = *(undefined8 *)(lVar5 + 0x78);
LAB_005e9ca0:
    uVar1 = 0;
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    break;
  case 2:
    FUN_005ee1f0(param_1);
    uVar1 = 0;
    break;
  case 3:
    uVar1 = *(ulong *)(lVar5 + 0x78) >> 10;
    break;
  case 4:
    uVar1 = (ulong)(*(uint *)(lVar5 + 0x78) & 0x3ff);
    break;
  case 5:
    uVar3 = *(ulong *)(lVar5 + 0x78);
    uVar4 = -(ulong)((uint)param_3 >> 0x1f) & 0xfffffc0000000000 | (ulong)(uint)param_3 << 10;
    uVar1 = 0;
    if (uVar4 <= uVar3) {
      uVar1 = uVar3 - uVar4;
    }
    *(ulong *)(lVar5 + 0x70) = uVar1;
    if (uVar3 < uVar1) {
      uVar1 = 0;
    }
    else {
      do {
        FUN_005edcb0(param_1);
        if (*(char *)(lVar5 + 0x21) == '\0') {
          return 1;
        }
        uVar1 = 0;
      } while (*(ulong *)(lVar5 + 0x70) <= *(ulong *)(lVar5 + 0x78));
    }
    break;
  case 6:
    uVar1 = (ulong)*(uint *)(lVar5 + 0x90);
    *(int *)(lVar5 + 0x90) = param_3;
    break;
  case 7:
    uVar1 = (ulong)*(uint *)(lVar5 + 0x94);
    *(int *)(lVar5 + 0x94) = param_3;
  }
  return uVar1;
}



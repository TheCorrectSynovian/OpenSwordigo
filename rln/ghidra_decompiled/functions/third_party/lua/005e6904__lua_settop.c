/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6904
 * Function: lua_settop
 * Signature: undefined __cdecl lua_settop(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_settop(lua_State*, int) */

void lua_settop(lua_State *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  if (param_2 < 0) {
                    /* catch() { ... } // from try @ 005e6934 with catch @ 005e69a4 */
    uVar4 = *(long *)(param_1 + 0x10) + (long)param_2 * 0x10 + 0x10;
LAB_005e69ac:
    *(ulong *)(param_1 + 0x10) = uVar4;
                    /* catch() { ... } // from try @ 005e68e0 with catch @ 005e69b0 */
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(long *)(param_1 + 0x18) + (long)param_2 * 0x10;
  if (uVar4 <= uVar3) goto LAB_005e69ac;
  uVar2 = uVar4;
  if (uVar4 <= uVar3 + 0x10) {
    uVar2 = uVar3 + 0x10;
  }
                    /* try { // try from 005e6934 to 006e693f has its CatchHandler @ 005e69a4 */
                    /* try { // try from 005e6940 to 006e69db has its CatchHandler @ 005e6618 */
  uVar1 = (*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + ~uVar3 >> 4) + 1;
  uVar5 = uVar3;
  if (1 < uVar1) {
    uVar6 = uVar1 & 0x1ffffffffffffffe;
    puVar7 = (undefined4 *)(uVar3 + 0x18);
    uVar5 = uVar6;
    do {
      puVar7[-4] = 0;
      *puVar7 = 0;
      uVar5 = uVar5 - 2;
      puVar7 = puVar7 + 8;
    } while (uVar5 != 0);
    uVar5 = uVar3 + uVar6 * 0x10;
    if (uVar1 == uVar6) goto LAB_005e6990;
  }
  do {
    uVar1 = uVar5 + 0x10;
    *(undefined4 *)(uVar5 + 8) = 0;
    uVar5 = uVar1;
  } while (uVar1 < uVar4);
LAB_005e6990:
  *(ulong *)(param_1 + 0x10) = uVar3 + ((uVar2 + ~uVar3 >> 4) + 1) * 0x10;
  *(ulong *)(param_1 + 0x10) = uVar4;
  return;
}



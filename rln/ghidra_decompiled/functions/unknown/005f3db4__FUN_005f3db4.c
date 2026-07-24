/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3db4
 * Function: FUN_005f3db4
 * Signature: undefined FUN_005f3db4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005f3db4(undefined8 param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
                    /* try { // try from 005f3dc0 to 006f3dd3 has its CatchHandler @ 005f41a4 */
                    /* try { // try from 005f3dd4 to 006f3ddf has its CatchHandler @ 005f4144 */
  lVar1 = FUN_005eed74(param_1,0,0,0x40);
                    /* try { // try from 005f3de0 to 006f3df3 has its CatchHandler @ 005f40e0 */
  FUN_005ee48c(param_1,lVar1,5);
                    /* try { // try from 005f3df4 to 006f3dff has its CatchHandler @ 005f40a0 */
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined2 *)(lVar1 + 10) = 0xff;
  *(undefined1 **)(lVar1 + 0x20) = &LAB_0069a2a0;
  if ((int)param_2 < -1) {
    lVar2 = FUN_005eede0(param_1);
  }
  else {
    lVar2 = FUN_005eed74(param_1,0,0,
                         -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4);
  }
  lVar7 = (long)*(int *)(lVar1 + 0x38);
  *(long *)(lVar1 + 0x18) = lVar2;
  if (*(int *)(lVar1 + 0x38) < (int)param_2) {
    uVar5 = (int)param_2 - lVar7;
    if (1 < uVar5) {
                    /* try { // try from 005f3e5c to 006f3e6f has its CatchHandler @ 005f4098 */
      uVar6 = uVar5 & 0xfffffffffffffffe;
      lVar3 = lVar7 * 0x10;
      lVar7 = uVar6 + lVar7;
      puVar4 = (undefined4 *)(lVar2 + lVar3 + 0x18);
      uVar8 = uVar6;
      do {
                    /* try { // try from 005f3e70 to 006f3e7b has its CatchHandler @ 005f3ff0 */
        puVar4[-4] = 0;
        *puVar4 = 0;
        uVar8 = uVar8 - 2;
        puVar4 = puVar4 + 8;
                    /* try { // try from 005f3e7c to 006f420f has its CatchHandler @ 005f3cd8 */
      } while (uVar8 != 0);
      if (uVar5 == uVar6) goto LAB_005f3ea0;
    }
    lVar3 = (int)param_2 - lVar7;
    puVar4 = (undefined4 *)(lVar2 + lVar7 * 0x10 + 8);
    do {
      lVar3 = lVar3 + -1;
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
LAB_005f3ea0:
  *(uint *)(lVar1 + 0x38) = param_2;
  FUN_005f3ec8(param_1,lVar1,param_3);
  return lVar1;
}



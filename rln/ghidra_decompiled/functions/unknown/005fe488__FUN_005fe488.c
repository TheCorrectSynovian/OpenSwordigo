/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe488
 * Function: FUN_005fe488
 * Signature: undefined FUN_005fe488(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe488(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* try { // try from 005fe4b0 to 006fe4d7 has its CatchHandler @ 005febfc */
  switch(*param_2) {
  case 6:
    *param_2 = 0xc;
    break;
  case 7:
    uVar1 = *(undefined4 *)(param_1[3] + 8);
    uVar2 = param_2[2] << 0x17 | 4;
    goto LAB_005fe554;
  case 8:
    uVar1 = *(undefined4 *)(param_1[3] + 8);
    uVar2 = param_2[2] << 0xe | 5;
    goto LAB_005fe554;
  case 9:
                    /* try { // try from 005fe4f8 to 006fe51f has its CatchHandler @ 005fee4c */
    if ((((uint)param_2[3] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= (int)param_2[3])) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
    }
    uVar2 = param_2[2];
    if (((uVar2 >> 8 & 1) == 0) && ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= (int)uVar2)) {
      *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
      uVar2 = param_2[2];
    }
    uVar1 = *(undefined4 *)(param_1[3] + 8);
                    /* try { // try from 005fe54c to 006fe55f has its CatchHandler @ 005fee60 */
    uVar2 = uVar2 << 0x17 | param_2[3] << 0xe | 6;
LAB_005fe554:
    uVar1 = FUN_006001e8((int)param_1,uVar2,uVar1);
    param_2[2] = uVar1;
                    /* try { // try from 005fe560 to 006fe5f7 has its CatchHandler @ 005fde3c */
    *param_2 = 0xb;
    break;
  case 0xd:
    *param_2 = 0xc;
    param_2[2] = *(uint *)(*(long *)(*param_1 + 0x18) + (long)(int)param_2[2] * 4) >> 6 & 0xff;
    break;
  case 0xe:
    *(uint *)(*(long *)(*param_1 + 0x18) + (long)(int)param_2[2] * 4) =
         *(uint *)(*(long *)(*param_1 + 0x18) + (long)(int)param_2[2] * 4) & 0x7fffff | 0x1000000;
    *param_2 = 0xb;
  }
  return;
}



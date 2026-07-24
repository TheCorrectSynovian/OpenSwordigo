/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fef18
 * Function: FUN_005fef18
 * Signature: undefined FUN_005fef18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fef18(long *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  FUN_005fe488();
  if (*param_2 == 0xc) {
    if (param_2[4] == param_2[5]) goto LAB_005fef70;
                    /* catch() { ... } // from try @ 005fe768 with catch @ 005fef54 */
    if ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_2[2]) {
      FUN_005fe674(param_1,param_2);
      goto LAB_005fef70;
    }
  }
  FUN_005fe5c0(param_1,param_2);
LAB_005fef70:
  if (((*param_2 == 0xc) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_2[2])) {
    *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
  }
  iVar2 = *(int *)((long)param_1 + 0x3c);
                    /* catch() { ... } // from try @ 005fe6a0 with catch @ 005fefa4 */
  pbVar4 = (byte *)(*param_1 + 0x73);
  iVar1 = iVar2 + 2;
  iVar3 = iVar1;
  if ((int)(uint)*pbVar4 < iVar1) {
    if (0xf7 < iVar2) {
      FUN_00600968(param_1[3],"function or expression too complex");
      pbVar4 = (byte *)(*param_1 + 0x73);
      iVar3 = *(int *)((long)param_1 + 0x3c) + 2;
    }
    *pbVar4 = (byte)iVar1;
  }
  *(int *)((long)param_1 + 0x3c) = iVar3;
  iVar1 = param_2[2];
                    /* try { // try from 005feff0 to 006ff033 has its CatchHandler @ 005fde3c */
                    /* catch() { ... } // from try @ 005fe5f8 with catch @ 005feff4 */
  iVar3 = FUN_005feb5c(param_1,param_3);
                    /* catch() { ... } // from try @ 005fe720 with catch @ 005ff008
                       catch() { ... } // from try @ 005fe7b0 with catch @ 005ff008 */
                    /* catch() { ... } // from try @ 005fe818 with catch @ 005ff00c */
                    /* catch() { ... } // from try @ 005fe648 with catch @ 005ff010
                       catch() { ... } // from try @ 005fe6e8 with catch @ 005ff010 */
  FUN_006001e8(param_1,iVar2 << 6 | iVar1 << 0x17 | iVar3 << 0xe | 0xb,
               *(undefined4 *)(param_1[3] + 8));
                    /* try { // try from 005ff034 to 006ff05b has its CatchHandler @ 005ff064 */
  if (((*param_3 == 0xc) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_3[2])) {
    *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
  }
  param_2[2] = iVar2;
  *param_2 = 0xc;
                    /* try { // try from 005ff05c to 006ff067 has its CatchHandler @ 005fde3c */
                    /* catch() { ... } // from try @ 005feb80 with catch @ 005ff064
                       catch() { ... } // from try @ 005ff034 with catch @ 005ff064 */
                    /* try { // try from 005ff068 to 006ff0a7 has its CatchHandler @ 005ff068
                       catch() { ... } // from try @ 005ff068 with catch @ 005ff068
                       catch() { ... } // from try @ 005ff138 with catch @ 005ff068
                       catch() { ... } // from try @ 005ff204 with catch @ 005ff068 */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe5c0
 * Function: FUN_005fe5c0
 * Signature: undefined FUN_005fe5c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe5c0(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  FUN_005fe488();
                    /* try { // try from 005fe5f8 to 006fe5fb has its CatchHandler @ 005feff4 */
  if (((*param_2 == 0xc) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x4a) <= param_2[2])) {
                    /* try { // try from 005fe5fc to 006fe647 has its CatchHandler @ 005fde3c */
    *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + -1;
  }
  iVar2 = *(int *)((long)param_1 + 0x3c);
  pbVar3 = (byte *)(*param_1 + 0x73);
  iVar1 = iVar2 + 1;
  iVar4 = iVar1;
  if ((int)(uint)*pbVar3 <= iVar2) {
    if (0xf8 < iVar2) {
      FUN_00600968(param_1[3],"function or expression too complex");
      pbVar3 = (byte *)(*param_1 + 0x73);
                    /* try { // try from 005fe648 to 006fe65f has its CatchHandler @ 005ff010 */
      iVar4 = *(int *)((long)param_1 + 0x3c) + 1;
    }
    *pbVar3 = (byte)iVar1;
  }
  *(int *)((long)param_1 + 0x3c) = iVar4;
  FUN_005fe674(param_1,param_2,iVar4 + -1);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe088
 * Function: FUN_005fe088
 * Signature: undefined FUN_005fe088(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe088(long *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(*param_1 + 0x73);
  iVar1 = *(int *)((long)param_1 + 0x3c) + param_2;
  iVar3 = iVar1;
  if ((int)(uint)*pbVar2 < iVar1) {
    if (0xf9 < iVar1) {
                    /* try { // try from 005fe0cc to 006fe0cf has its CatchHandler @ 005fedec */
                    /* try { // try from 005fe0d0 to 006fe0ff has its CatchHandler @ 005fde3c */
      FUN_00600968(param_1[3],"function or expression too complex");
      pbVar2 = (byte *)(*param_1 + 0x73);
      iVar3 = *(int *)((long)param_1 + 0x3c) + param_2;
    }
    *pbVar2 = (byte)iVar1;
  }
  *(int *)((long)param_1 + 0x3c) = iVar3;
  return;
}



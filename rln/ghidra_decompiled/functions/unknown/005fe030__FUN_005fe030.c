/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fe030
 * Function: FUN_005fe030
 * Signature: undefined FUN_005fe030(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fe030(long *param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*param_1 + 0x73);
  param_2 = *(int *)((long)param_1 + 0x3c) + param_2;
  if ((int)(uint)*pbVar1 < param_2) {
    if (0xf9 < param_2) {
                    /* try { // try from 005fe06c to 006fe07f has its CatchHandler @ 005feeb4 */
      FUN_00600968(param_1[3],"function or expression too complex");
      pbVar1 = (byte *)(*param_1 + 0x73);
    }
    *pbVar1 = (byte)param_2;
  }
                    /* try { // try from 005fe080 to 006fe0cb has its CatchHandler @ 005fde3c */
  return;
}



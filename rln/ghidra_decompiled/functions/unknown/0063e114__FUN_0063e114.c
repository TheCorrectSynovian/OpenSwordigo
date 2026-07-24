/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e114
 * Function: FUN_0063e114
 * Signature: undefined FUN_0063e114(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e114(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
                    /* try { // try from 0063e124 to 0073e12f has its CatchHandler @ 0063e1c8 */
                    /* try { // try from 0063e130 to 0073e1eb has its CatchHandler @ 0063e070 */
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x40));
  if (0 < (long)sVar1) {
    *(uint *)(param_1 + 0x48) = (uint)*(byte *)((long)param_2 + (sVar1 - 1));
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620210
 * Function: FUN_00620210
 * Signature: undefined FUN_00620210(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620210(long *param_1,undefined8 param_2,long param_3,byte param_4,long param_5)

{
  undefined *puVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_5 != 0);
  puVar1 = PTR_DAT_007e7140;
                    /* try { // try from 00620238 to 0072023b has its CatchHandler @ 00620298 */
                    /* try { // try from 0062023c to 007202b7 has its CatchHandler @ 006201cc */
  param_1[4] = 0;
  *(byte *)(param_1 + 3) = param_4 & param_3 != 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = 0;
  if (param_3 == 0) {
                    /* catch() { ... } // from try @ 00620238 with catch @ 00620298 */
    param_3 = *(long *)PTR__ctype__007e5d60 + 1;
  }
  param_1[6] = param_3;
  memset((void *)((long)param_1 + 0x39),0,0x100);
  *(undefined1 *)(param_1 + 7) = 0;
  memset((void *)((long)param_1 + 0x139),0,0x100);
  *(undefined1 *)((long)param_1 + 0x239) = 0;
  return;
}



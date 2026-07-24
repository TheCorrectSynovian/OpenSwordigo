/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006202a8
 * Function: FUN_006202a8
 * Signature: undefined FUN_006202a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006202a8(long *param_1,long param_2,byte param_3,long param_4)

{
  undefined *puVar1;
  
                    /* try { // try from 006202b8 to 007202df has its CatchHandler @ 006202e8 */
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  puVar1 = PTR_DAT_007e7140;
  param_1[4] = 0;
                    /* try { // try from 006202e0 to 007202eb has its CatchHandler @ 006201cc */
  *(byte *)(param_1 + 3) = param_3 & param_2 != 0;
                    /* catch() { ... } // from try @ 006202b8 with catch @ 006202e8 */
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 006202ec to 0072033b has its CatchHandler @ 006202ec
                       catch() { ... } // from try @ 006202ec with catch @ 006202ec
                       catch() { ... } // from try @ 00620494 with catch @ 006202ec
                       catch() { ... } // from try @ 00620608 with catch @ 006202ec */
  param_1[5] = 0;
  if (param_2 == 0) {
    param_2 = *(long *)PTR__ctype__007e5d60 + 1;
                    /* try { // try from 0062033c to 00720347 has its CatchHandler @ 0062057c */
  }
  param_1[6] = param_2;
  memset((void *)((long)param_1 + 0x39),0,0x100);
  *(undefined1 *)(param_1 + 7) = 0;
  memset((void *)((long)param_1 + 0x139),0,0x100);
  *(undefined1 *)((long)param_1 + 0x239) = 0;
  return;
}



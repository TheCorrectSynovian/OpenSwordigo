/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006484bc
 * Function: FUN_006484bc
 * Signature: undefined FUN_006484bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006484bc(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1 + 0xc;
  FUN_00621e3c(puVar1);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
                    /* catch() { ... } // from try @ 006485b0 with catch @ 006484f8 */
  *(undefined1 *)((long)param_1 + 0x144) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &DAT_007daa78;
  param_1[1] = 0;
  param_1[0xc] = &DAT_007daaa0;
  FUN_006219c8(puVar1,0);
                    /* try { // try from 00648534 to 00748537 has its CatchHandler @ 00648550 */
  *param_1 = &PTR_FUN_007b73d8;
  param_1[0xc] = &PTR_FUN_007b7400;
  puVar2 = PTR_DAT_007e6338;
                    /* catch() { ... } // from try @ 00648534 with catch @ 00648550 */
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = puVar2 + 0x10;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
                    /* try { // try from 00648588 to 007485af has its CatchHandler @ 006485b8 */
  FUN_0063db28(param_1 + 9);
  param_1[2] = &PTR_FUN_007da9f0;
  *(uint *)(param_1 + 10) = param_2 | 8;
  param_1[0xb] = PTR_DAT_007e6438 + 0x18;
  FUN_006219c8(puVar1);
                    /* try { // try from 006485b0 to 007485bb has its CatchHandler @ 006484f8 */
                    /* catch() { ... } // from try @ 00648588 with catch @ 006485b8 */
                    /* catch() { ... } // from try @ 006487ac with catch @ 006485bc
                       catch() { ... } // from try @ 0064885c with catch @ 006485bc */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e350
 * Function: FUN_0064e350
 * Signature: undefined FUN_0064e350(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e350(undefined8 *param_1,long param_2)

{
  param_1[2] = 0;
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_007b7c40;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* catch() { ... } // from try @ 0064e1a4 with catch @ 0064e384 */
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x65) = 0;
  *(undefined1 *)((long)param_1 + 0x66) = 0;
                    /* try { // try from 0064e3a4 to 0074e47b has its CatchHandler @ 0064e484 */
  *(undefined1 *)((long)param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x69) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}



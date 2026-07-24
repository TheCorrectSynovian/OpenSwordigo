/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066354c
 * Function: FUN_0066354c
 * Signature: undefined FUN_0066354c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066354c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00663554 to 00763557 has its CatchHandler @ 006636e4 */
  puVar1 = param_1 + 0x1f;
  FUN_00621e3c(puVar1);
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
                    /* try { // try from 00663584 to 007635ab has its CatchHandler @ 00663730 */
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &DAT_007db728;
  param_1[0x1f] = &DAT_007db750;
  FUN_006219c8(puVar1,0);
                    /* try { // try from 006635b8 to 007635bb has its CatchHandler @ 00663700 */
  *param_1 = &PTR_FUN_007b7ee8;
                    /* try { // try from 006635c0 to 007635c7 has its CatchHandler @ 00663730 */
  param_1[0x1f] = &PTR_FUN_007b7f10;
  FUN_00662010(param_1 + 1);
                    /* try { // try from 006635d4 to 007635d7 has its CatchHandler @ 00663718 */
  FUN_006219c8(puVar1,param_1 + 1);
                    /* try { // try from 006635dc to 007635e3 has its CatchHandler @ 00663730 */
  return;
}



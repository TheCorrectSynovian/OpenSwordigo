/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066392c
 * Function: FUN_0066392c
 * Signature: undefined FUN_0066392c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066392c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x21;
                    /* try { // try from 00663948 to 0076394b has its CatchHandler @ 00663c00 */
  FUN_00621e3c(puVar1);
  param_1[0x3c] = 0;
                    /* try { // try from 00663954 to 0076395f has its CatchHandler @ 00663c40 */
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
                    /* try { // try from 00663960 to 007639bf has its CatchHandler @ 00663824 */
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = &DAT_007db7c8;
  param_1[1] = 0;
  param_1[0x21] = &DAT_007db7f0;
  FUN_006219c8(puVar1,0);
  param_1[2] = &DAT_007db778;
  param_1[0x21] = &DAT_007db7a0;
  FUN_006219c8(puVar1,0);
                    /* try { // try from 006639c0 to 007639c3 has its CatchHandler @ 00663b98 */
  *param_1 = &PTR_FUN_007b7f88;
                    /* try { // try from 006639d4 to 007639df has its CatchHandler @ 00663ba4 */
  param_1[0x21] = &PTR_FUN_007b7fd8;
  param_1[2] = &PTR_FUN_007b7fb0;
  FUN_00662010(param_1 + 3);
  FUN_006219c8(puVar1,param_1 + 3);
                    /* try { // try from 006639f8 to 007639ff has its CatchHandler @ 00663c18 */
  return;
}



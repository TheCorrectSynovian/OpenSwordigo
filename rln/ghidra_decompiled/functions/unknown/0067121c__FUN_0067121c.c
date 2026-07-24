/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067121c
 * Function: FUN_0067121c
 * Signature: undefined FUN_0067121c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067121c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_0065edec();
  *param_1 = &PTR_FUN_007dbc60;
  FUN_0061f4d0(param_1 + 0xd,param_2,param_3);
  cVar1 = FUN_0061f654(param_1 + 0xd);
                    /* try { // try from 00671268 to 0077127b has its CatchHandler @ 006718d8 */
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xf) = param_3;
  param_1[0x14] = param_4;
                    /* try { // try from 0067128c to 00771297 has its CatchHandler @ 006718a0 */
  FUN_0065ef78(param_1);
  uVar2 = param_1[0x13];
  *(undefined1 *)((long)param_1 + 0xa9) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
                    /* try { // try from 006712c0 to 007712fb has its CatchHandler @ 00671844 */
  return;
}



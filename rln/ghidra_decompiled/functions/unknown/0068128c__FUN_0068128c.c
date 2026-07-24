/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0068128c
 * Function: FUN_0068128c
 * Signature: undefined FUN_0068128c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0068128c(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_x30;
  undefined1 auStack_688 [8];
  undefined1 auStack_680 [1576];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((long)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((long)param_1 + 0x340) = 0x4000000000000000;
  iVar1 = FUN_006806a8(param_1,auStack_680);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 006812e8 to 00781363 has its CatchHandler @ 00681448 */
  if (((PTR_pthread_create_007e4e78 == (undefined *)0x0) ||
      (iVar1 = pthread_once((pthread_once_t *)&DAT_007fe3c4,FUN_0067fdb8), iVar1 != 0)) &&
     (DAT_007fe360 == '\0')) {
    FUN_0067fdb8();
  }
  FUN_0067fecc(param_1,param_2,auStack_688);
  local_58 = 0;
  local_40 = 1;
  local_50 = 0x1f;
  FUN_00681080(param_1,auStack_680);
  *(undefined8 *)((long)param_1 + 0x318) = param_3;
                    /* try { // try from 00681364 to 00781473 has its CatchHandler @ 006811a0 */
  return;
}



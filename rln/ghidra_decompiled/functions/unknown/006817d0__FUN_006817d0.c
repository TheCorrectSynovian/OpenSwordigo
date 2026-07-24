/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006817d0
 * Function: FUN_006817d0
 * Signature: undefined FUN_006817d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16] FUN_006817d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_780 [960];
  undefined1 auStack_3c0 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
                    /* try { // try from 006817ec to 00781a5b has its CatchHandler @ 00681c7c */
  FUN_0068128c(auStack_780,&stack0x00000000);
  memcpy(auStack_3c0,auStack_780,0x3c0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  iVar2 = FUN_00681474(param_1,auStack_3c0);
  if (iVar2 == 7) {
    FUN_0067ff60(auStack_780,auStack_3c0);
    FUN_00681654(local_b0,local_a8);
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



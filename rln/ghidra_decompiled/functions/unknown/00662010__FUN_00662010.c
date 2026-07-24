/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662010
 * Function: FUN_00662010
 * Signature: undefined FUN_00662010(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00662010(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  
  plVar1 = param_1 + 7;
  puVar2 = PTR_DAT_007e6338 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_0063db28(plVar1);
  *param_1 = (long)&PTR_FUN_007db650;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0061f45c(param_1 + 0xd,param_1 + 8);
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0x14] = 0x400;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x81) = 0;
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x85) = 0;
  *(undefined1 *)((long)param_1 + 0x86) = 0;
  *(undefined1 *)((long)param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x8b) = 0;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x8d) = 0;
  *(undefined1 *)((long)param_1 + 0x8e) = 0;
  *(undefined1 *)((long)param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x91) = 0;
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  *(undefined1 *)((long)param_1 + 0x93) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  cVar3 = FUN_006516a0(plVar1);
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = FUN_0064fd60(plVar1);
  param_1[0x19] = lVar4;
  return;
}



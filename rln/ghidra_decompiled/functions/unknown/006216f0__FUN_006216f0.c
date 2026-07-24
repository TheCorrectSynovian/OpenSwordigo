/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006216f0
 * Function: FUN_006216f0
 * Signature: undefined FUN_006216f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006216f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_00621e3c();
  param_1[0x1b] = 0;
  *param_1 = &PTR_FUN_007b6b50;
  puVar1 = param_1 + 0x1a;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_00622c5c(param_1);
  cVar2 = FUN_00651634(puVar1);
  if (cVar2 == '\0') {
    param_1[0x1e] = 0;
    cVar2 = FUN_006517e4(puVar1);
  }
  else {
    uVar3 = FUN_0064f6ac(puVar1);
    param_1[0x1e] = uVar3;
                    /* try { // try from 00621760 to 00721767 has its CatchHandler @ 0062226c */
    cVar2 = FUN_006517e4(puVar1);
  }
  if (cVar2 == '\0') {
    param_1[0x1f] = 0;
    cVar2 = FUN_00651850(puVar1);
  }
  else {
    uVar3 = FUN_006503c0(puVar1);
    param_1[0x1f] = uVar3;
    cVar2 = FUN_00651850(puVar1);
  }
  if (cVar2 == '\0') {
    param_1[0x20] = 0;
                    /* try { // try from 006217f0 to 007217f7 has its CatchHandler @ 00622218 */
  }
  else {
    uVar3 = FUN_00650428(puVar1);
                    /* try { // try from 00621790 to 0072179b has its CatchHandler @ 0062221c */
    param_1[0x20] = uVar3;
  }
  param_1[0x1d] = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 4) = (uint)(param_2 == 0);
                    /* try { // try from 006217bc to 007217e3 has its CatchHandler @ 0062220c */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620d44
 * Function: FUN_00620d44
 * Signature: undefined FUN_00620d44(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620d44(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00620d50 to 00720d57 has its CatchHandler @ 006220ec */
  FUN_00621e3c();
  param_1[0x1b] = 0;
                    /* try { // try from 00620d70 to 00720d77 has its CatchHandler @ 006223d4 */
  *param_1 = &PTR_FUN_007b6b30;
  puVar1 = param_1 + 0x1a;
                    /* try { // try from 00620d78 to 00720d8b has its CatchHandler @ 006223d0 */
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0xe1) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
                    /* try { // try from 00620d8c to 00720def has its CatchHandler @ 006226ec */
  param_1[0x20] = 0;
  FUN_00622c5c(param_1);
  cVar2 = FUN_0062f0c0(puVar1);
  if (cVar2 == '\0') {
    param_1[0x1e] = 0;
                    /* try { // try from 00620e1c to 00720e23 has its CatchHandler @ 006223cc */
    cVar2 = FUN_0062f270(puVar1);
                    /* try { // try from 00620e24 to 00720e37 has its CatchHandler @ 006223c8 */
  }
  else {
    uVar3 = FUN_0062d354(puVar1);
    param_1[0x1e] = uVar3;
    cVar2 = FUN_0062f270(puVar1);
  }
  if (cVar2 == '\0') {
    param_1[0x1f] = 0;
    cVar2 = FUN_0062f2dc(puVar1);
                    /* try { // try from 00620e38 to 00720e9b has its CatchHandler @ 006226b4 */
  }
  else {
    uVar3 = FUN_0062e184(puVar1);
    param_1[0x1f] = uVar3;
    cVar2 = FUN_0062f2dc(puVar1);
  }
  if (cVar2 == '\0') {
    param_1[0x20] = 0;
  }
  else {
    uVar3 = FUN_0062e1ec(puVar1);
    param_1[0x20] = uVar3;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = param_2;
  *(undefined1 *)((long)param_1 + 0xe1) = 0;
                    /* try { // try from 00620dfc to 00720e03 has its CatchHandler @ 006220bc */
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 4) = (uint)(param_2 == 0);
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006210e8
 * Function: FUN_006210e8
 * Signature: undefined FUN_006210e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006210e8(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
                    /* try { // try from 006210e8 to 0072114b has its CatchHandler @ 006225d4 */
  lVar1 = param_1 + 0xd0;
  FUN_00622c5c();
  cVar2 = FUN_0062f0c0(lVar1);
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0xf0) = 0;
                    /* try { // try from 00621194 to 007211f7 has its CatchHandler @ 0062259c */
    cVar2 = FUN_0062f270(lVar1);
  }
  else {
    uVar3 = FUN_0062d354(lVar1);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    cVar2 = FUN_0062f270(lVar1);
  }
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    cVar2 = FUN_0062f2dc(lVar1);
  }
  else {
    uVar3 = FUN_0062e184(lVar1);
    *(undefined8 *)(param_1 + 0xf8) = uVar3;
    cVar2 = FUN_0062f2dc(lVar1);
  }
  if (cVar2 == '\0') {
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    uVar3 = FUN_0062e1ec(lVar1);
                    /* try { // try from 00621158 to 0072115f has its CatchHandler @ 00621fcc */
    *(undefined8 *)(param_1 + 0x100) = uVar3;
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(long *)(param_1 + 0xe8) = param_2;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
                    /* try { // try from 00621178 to 0072117f has its CatchHandler @ 006223a4 */
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
                    /* try { // try from 00621180 to 00721193 has its CatchHandler @ 006223a0 */
  return;
}



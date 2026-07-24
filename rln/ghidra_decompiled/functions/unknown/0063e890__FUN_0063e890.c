/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e890
 * Function: FUN_0063e890
 * Signature: undefined FUN_0063e890(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e890(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0063e960 with catch @ 0063e9a4 */
    plVar5 = operator_new(0x70);
                    /* try { // try from 0063e9a8 to 0073e9eb has its CatchHandler @ 0063e9a8
                       catch() { ... } // from try @ 0063e9a8 with catch @ 0063e9a8
                       catch() { ... } // from try @ 0063ea84 with catch @ 0063e9a8
                       catch() { ... } // from try @ 0063ec40 with catch @ 0063e9a8 */
    *(undefined4 *)(plVar5 + 1) = 0;
    puVar2 = PTR_DAT_007e4c60;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
    *(undefined1 *)(plVar5 + 4) = 0;
    *(undefined1 *)((long)plVar5 + 0x21) = 0;
    *(undefined1 *)((long)plVar5 + 0x22) = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
                    /* try { // try from 0063e9ec to 0073e9f3 has its CatchHandler @ 0063eba4 */
    *(undefined4 *)(plVar5 + 0xb) = 0;
    *(undefined1 *)((long)plVar5 + 0x5c) = 0;
                    /* try { // try from 0063e9f4 to 0073ea07 has its CatchHandler @ 0063eb94 */
    *(undefined1 *)((long)plVar5 + 0x5d) = 0;
    *(undefined1 *)((long)plVar5 + 0x5e) = 0;
    *(undefined1 *)((long)plVar5 + 0x5f) = 0;
    *(undefined1 *)(plVar5 + 0xc) = 0;
    *(undefined1 *)((long)plVar5 + 0x61) = 0;
                    /* try { // try from 0063ea08 to 0073ea1b has its CatchHandler @ 0063eb20 */
    *(undefined1 *)((long)plVar5 + 0x62) = 0;
    *(undefined1 *)((long)plVar5 + 99) = 0;
    *(undefined1 *)((long)plVar5 + 0x6f) = 0;
    *(long **)(param_1 + 0x10) = plVar5;
  }
  *(undefined1 *)((long)plVar5 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar3 = *(long *)(param_1 + 0x10);
  *(char **)(lVar3 + 0x10) = "";
  *(char **)(lVar3 + 0x28) = "";
  *(char **)(lVar3 + 0x38) = "";
                    /* try { // try from 0063e8d4 to 0073e8fb has its CatchHandler @ 0063e930 */
  *(char **)(lVar3 + 0x48) = "";
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined4 *)(lVar3 + 0x58) = 0;
  uVar1 = *(undefined4 *)PTR_DAT_007e6090;
  *(undefined4 *)(lVar3 + 0x5c) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar1;
  puVar4 = *(undefined1 **)PTR_PTR_007e7490;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 100) = *puVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x65) = puVar4[1];
                    /* catch() { ... } // from try @ 0063e8d4 with catch @ 0063e930 */
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x66) = puVar4[2];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x67) = puVar4[3];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x68) = puVar4[4];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x69) = puVar4[5];
                    /* try { // try from 0063e960 to 0073e987 has its CatchHandler @ 0063e9a4 */
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6a) = puVar4[6];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6b) = puVar4[7];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6c) = puVar4[8];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6d) = puVar4[9];
                    /* try { // try from 0063e988 to 0073e9a7 has its CatchHandler @ 0063e884 */
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6e) = puVar4[10];
  return;
}



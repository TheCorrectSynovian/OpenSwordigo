/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e704
 * Function: FUN_0063e704
 * Signature: undefined FUN_0063e704(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063e704(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    plVar5 = operator_new(0x70);
    *(undefined4 *)(plVar5 + 1) = 0;
    puVar2 = PTR_DAT_007e7cb8;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
                    /* try { // try from 0063e83c to 0073e863 has its CatchHandler @ 0063e880 */
    *(undefined1 *)(plVar5 + 4) = 0;
    *(undefined1 *)((long)plVar5 + 0x21) = 0;
    *(undefined1 *)((long)plVar5 + 0x22) = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    *(undefined4 *)(plVar5 + 0xb) = 0;
                    /* try { // try from 0063e864 to 0073e883 has its CatchHandler @ 0063e760 */
    *(undefined1 *)((long)plVar5 + 0x5c) = 0;
    *(undefined1 *)((long)plVar5 + 0x5d) = 0;
    *(undefined1 *)((long)plVar5 + 0x5e) = 0;
    *(undefined1 *)((long)plVar5 + 0x5f) = 0;
    *(undefined1 *)(plVar5 + 0xc) = 0;
    *(undefined1 *)((long)plVar5 + 0x61) = 0;
    *(undefined1 *)((long)plVar5 + 0x62) = 0;
                    /* catch() { ... } // from try @ 0063e83c with catch @ 0063e880 */
    *(undefined1 *)((long)plVar5 + 99) = 0;
                    /* catch() { ... } // from try @ 0063e988 with catch @ 0063e884 */
    *(undefined1 *)((long)plVar5 + 0x6f) = 0;
    *(long **)(param_1 + 0x10) = plVar5;
  }
  *(undefined1 *)((long)plVar5 + 0x21) = 0x2e;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x22) = 0x2c;
  lVar3 = *(long *)(param_1 + 0x10);
  *(char **)(lVar3 + 0x10) = "";
  *(char **)(lVar3 + 0x28) = "";
  *(char **)(lVar3 + 0x38) = "";
  *(char **)(lVar3 + 0x48) = "";
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
                    /* catch() { ... } // from try @ 0063e864 with catch @ 0063e760 */
  *(undefined4 *)(lVar3 + 0x58) = 0;
  uVar1 = *(undefined4 *)PTR_DAT_007e6090;
  *(undefined4 *)(lVar3 + 0x5c) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x60) = uVar1;
  puVar4 = *(undefined1 **)PTR_PTR_007e7490;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 100) = *puVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x65) = puVar4[1];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x66) = puVar4[2];
                    /* try { // try from 0063e7b0 to 0073e7d7 has its CatchHandler @ 0063e80c */
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x67) = puVar4[3];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x68) = puVar4[4];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x69) = puVar4[5];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6a) = puVar4[6];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6b) = puVar4[7];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6c) = puVar4[8];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6d) = puVar4[9];
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x6e) = puVar4[10];
                    /* catch() { ... } // from try @ 0063e7b0 with catch @ 0063e80c */
  return;
}



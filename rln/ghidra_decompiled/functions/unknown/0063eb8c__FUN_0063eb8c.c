/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063eb8c
 * Function: FUN_0063eb8c
 * Signature: undefined FUN_0063eb8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063eb8c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  
                    /* catch() { ... } // from try @ 0063e9f4 with catch @ 0063eb94 */
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    plVar4 = operator_new(0xa0);
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar2 = PTR_DAT_007e57f8;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)(puVar2 + 0x10);
    *(undefined1 *)(plVar4 + 4) = 0;
    *(undefined4 *)((long)plVar4 + 0x24) = 0;
    *(undefined4 *)(plVar4 + 5) = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    *(undefined4 *)(plVar4 + 0xc) = 0;
    *(undefined1 *)((long)plVar4 + 100) = 0;
    *(undefined1 *)((long)plVar4 + 0x65) = 0;
    *(undefined1 *)((long)plVar4 + 0x66) = 0;
    *(undefined1 *)((long)plVar4 + 0x67) = 0;
    *(undefined1 *)(plVar4 + 0xd) = 0;
    *(undefined1 *)((long)plVar4 + 0x69) = 0;
    *(undefined1 *)((long)plVar4 + 0x6a) = 0;
    *(undefined1 *)((long)plVar4 + 0x6b) = 0;
    *(undefined1 *)(plVar4 + 0x13) = 0;
    *(long **)(param_1 + 0x10) = plVar4;
  }
                    /* catch() { ... } // from try @ 0063e9ec with catch @ 0063eba4
                       catch() { ... } // from try @ 0063ea80 with catch @ 0063eba4 */
  *(undefined4 *)((long)plVar4 + 0x24) = 0x2e;
  plVar4[6] = (long)&DAT_0069ea98;
  *(undefined4 *)(plVar4 + 5) = 0x2c;
  plVar4[8] = (long)&DAT_0069ea98;
  plVar4[10] = (long)&DAT_0069ea98;
  plVar4[2] = (long)"";
  plVar4[3] = 0;
  plVar4[7] = 0;
  plVar4[9] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)(plVar4 + 0xc) = 0;
  uVar1 = *(undefined4 *)PTR_DAT_007e6090;
  *(undefined4 *)((long)plVar4 + 100) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  pbVar5 = *(byte **)PTR_PTR_007e7490;
  *(uint *)(lVar3 + 0x6c) = (uint)*pbVar5;
  *(uint *)(lVar3 + 0x70) = (uint)pbVar5[1];
  *(uint *)(lVar3 + 0x74) = (uint)pbVar5[2];
  *(uint *)(lVar3 + 0x78) = (uint)pbVar5[3];
  *(uint *)(lVar3 + 0x7c) = (uint)pbVar5[4];
  *(uint *)(lVar3 + 0x80) = (uint)pbVar5[5];
                    /* try { // try from 0063ec40 to 0073ec4b has its CatchHandler @ 0063e9a8 */
  *(uint *)(lVar3 + 0x84) = (uint)pbVar5[6];
                    /* catch() { ... } // from try @ 0063eb18 with catch @ 0063ec48 */
  *(uint *)(lVar3 + 0x88) = (uint)pbVar5[7];
  *(uint *)(lVar3 + 0x8c) = (uint)pbVar5[8];
  *(uint *)(lVar3 + 0x90) = (uint)pbVar5[9];
  *(uint *)(lVar3 + 0x94) = (uint)pbVar5[10];
  return;
}



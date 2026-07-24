/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063efc4
 * Function: FUN_0063efc4
 * Signature: undefined FUN_0063efc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063efc4(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    plVar4 = operator_new(0x90);
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar3 = PTR_DAT_007e6c88;
                    /* catch() { ... } // from try @ 0063eec8 with catch @ 0063f0a0 */
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
    *(undefined1 *)(plVar4 + 4) = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
                    /* try { // try from 0063f0cc to 0073f15b has its CatchHandler @ 0063ed40 */
    plVar4[8] = 0;
                    /* catch() { ... } // from try @ 0063f04c with catch @ 0063f0d0 */
    *(undefined1 *)(plVar4 + 9) = 0;
                    /* catch() { ... } // from try @ 0063eea0 with catch @ 0063f0d4 */
    *(undefined1 *)((long)plVar4 + 0x49) = 0;
                    /* catch() { ... } // from try @ 0063ee28 with catch @ 0063f0d8 */
    *(undefined1 *)(plVar4 + 0x11) = 0;
    *(long **)(param_1 + 0x10) = plVar4;
  }
  *(undefined1 *)(plVar4 + 9) = 0x2e;
  plVar4[3] = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[2] = (long)"";
  *(undefined1 *)(lVar5 + 0x49) = 0x2c;
  lVar5 = 0;
  lVar6 = *(long *)PTR_PTR_007e5110;
  do {
    puVar1 = (undefined1 *)(lVar6 + lVar5);
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
    lVar5 = lVar5 + 1;
                    /* catch() { ... } // from try @ 0063ef88 with catch @ 0063f028 */
    *(undefined1 *)(lVar2 + 0x4a) = *puVar1;
  } while (lVar5 != 0x24);
  lVar5 = 0;
  lVar6 = *(long *)PTR_PTR_007e4f98;
  do {
    puVar1 = (undefined1 *)(lVar6 + lVar5);
    lVar2 = *(long *)(param_1 + 0x10) + lVar5;
                    /* try { // try from 0063f04c to 0073f0cb has its CatchHandler @ 0063f0d0 */
    lVar5 = lVar5 + 1;
    *(undefined1 *)(lVar2 + 0x6e) = *puVar1;
  } while (lVar5 != 0x1a);
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined **)(lVar5 + 0x28) = &DAT_0069e6b0;
  *(undefined8 *)(lVar5 + 0x30) = 4;
                    /* catch() { ... } // from try @ 0063ef38 with catch @ 0063f078 */
  *(char **)(lVar5 + 0x38) = "false";
  *(undefined8 *)(lVar5 + 0x40) = 5;
  return;
}



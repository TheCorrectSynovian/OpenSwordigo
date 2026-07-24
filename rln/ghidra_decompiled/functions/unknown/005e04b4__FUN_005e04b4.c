/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e04b4
 * Function: FUN_005e04b4
 * Signature: undefined FUN_005e04b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005e04b4(void)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  
                    /* try { // try from 005e04b4 to 006e050b has its CatchHandler @ 005e04b4
                       catch() { ... } // from try @ 005e04b4 with catch @ 005e04b4
                       catch() { ... } // from try @ 005e052c with catch @ 005e04b4
                       catch() { ... } // from try @ 005e0678 with catch @ 005e04b4 */
  pvVar3 = DAT_007ea080;
  if (DAT_007ea080 != (void *)0x0) {
    pvVar4 = *(void **)((long)DAT_007ea080 + 8);
    lVar1 = *(long *)((long)DAT_007ea080 + 0x10);
    if (lVar1 != 0) {
      lVar5 = 0;
      do {
        pvVar2 = *(void **)((long)pvVar4 + lVar5 * 8);
        while (pvVar2 != (void *)0x0) {
          pvVar6 = *(void **)((long)pvVar2 + 0x30);
          operator_delete(pvVar2);
          pvVar2 = pvVar6;
        }
        *(undefined8 *)((long)pvVar4 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar1);
      pvVar4 = *(void **)((long)pvVar3 + 8);
    }
                    /* try { // try from 005e050c to 006e051f has its CatchHandler @ 005e0624 */
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
    operator_delete(pvVar4);
    operator_delete(pvVar3);
  }
  DAT_007ea080 = (void *)0x0;
                    /* try { // try from 005e0524 to 006e052b has its CatchHandler @ 005e05b0 */
                    /* try { // try from 005e052c to 006e0647 has its CatchHandler @ 005e04b4 */
  return;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b510
 * Function: FUN_0064b510
 * Signature: undefined FUN_0064b510(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b510(long *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064b4fc with catch @ 0064b520
                        */
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064b4f4 with catch @ 0064b528
                        */
    param_1[2] = param_1[2] + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064b4e8 with catch @ 0064b530
                        */
    return;
  }
                    /* try { // try from 0064b53c to 0074b54b has its CatchHandler @ 0064b55c */
  (**(code **)(*param_1 + 0x50))();
  return;
}



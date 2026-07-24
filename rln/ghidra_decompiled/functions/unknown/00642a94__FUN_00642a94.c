/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642a94
 * Function: FUN_00642a94
 * Signature: undefined FUN_00642a94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00642a94(long *param_1,uint param_2)

{
                    /* try { // try from 00642a94 to 00742aeb has its CatchHandler @ 00642a94
                       catch() { ... } // from try @ 00642a94 with catch @ 00642a94
                       catch() { ... } // from try @ 00642ca8 with catch @ 00642a94
                       catch() { ... } // from try @ 00642fc4 with catch @ 00642a94 */
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) | param_2;
  return;
}



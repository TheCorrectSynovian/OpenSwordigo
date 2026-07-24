/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006636cc
 * Function: FUN_006636cc
 * Signature: undefined FUN_006636cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006636cc(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 00663554 with catch @ 006636e4 */
  *param_1 = &PTR_FUN_007b7ee8;
  param_1[0x1f] = &PTR_FUN_007b7f10;
                    /* catch() { ... } // from try @ 006635b8 with catch @ 00663700 */
  param_1[1] = &PTR_FUN_007db650;
                    /* try { // try from 00663708 to 0076370f has its CatchHandler @ 00663714 */
  FUN_00662f10(param_1 + 1);
  FUN_0061f468(param_1 + 0xe);
                    /* catch() { ... } // from try @ 00663708 with catch @ 00663714 */
                    /* catch() { ... } // from try @ 006635d4 with catch @ 00663718 */
                    /* try { // try from 00663720 to 00763727 has its CatchHandler @ 0066372c */
  param_1[1] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 8);
                    /* catch() { ... } // from try @ 00663720 with catch @ 0066372c */
                    /* catch() { ... } // from try @ 006633ac with catch @ 00663730
                       catch() { ... } // from try @ 00663428 with catch @ 00663730
                       catch() { ... } // from try @ 00663584 with catch @ 00663730
                       catch() { ... } // from try @ 006635c0 with catch @ 00663730
                       catch() { ... } // from try @ 006635dc with catch @ 00663730
                       catch() { ... } // from try @ 00663684 with catch @ 00663730 */
                    /* catch() { ... } // from try @ 00663618 with catch @ 00663734 */
                    /* catch() { ... } // from try @ 00663664 with catch @ 00663738 */
                    /* catch() { ... } // from try @ 006636c8 with catch @ 0066373c */
  param_1[0x1f] = PTR_DAT_007e7a48 + 0x10;
                    /* catch() { ... } // from try @ 0066375c with catch @ 00663748 */
  FUN_006221dc(param_1 + 0x1f);
  return;
}



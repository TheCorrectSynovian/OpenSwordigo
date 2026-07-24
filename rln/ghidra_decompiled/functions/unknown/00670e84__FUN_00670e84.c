/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670e84
 * Function: FUN_00670e84
 * Signature: undefined FUN_00670e84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670e84(long *param_1)

{
                    /* catch() { ... } // from try @ 00670d94 with catch @ 00670e88 */
                    /* catch() { ... } // from try @ 00670e1c with catch @ 00670e94 */
  *param_1 = (long)(PTR_DAT_007e6a10 + 0x10);
  FUN_0065f390();
  FUN_0061f468(param_1 + 0xd);
                    /* catch() { ... } // from try @ 00670e68 with catch @ 00670eb0 */
                    /* try { // try from 00670ec4 to 00770f37 has its CatchHandler @ 00670ec4
                       catch() { ... } // from try @ 00670ec4 with catch @ 00670ec4
                       catch() { ... } // from try @ 00670fa4 with catch @ 00670ec4
                       catch() { ... } // from try @ 006710c0 with catch @ 00670ec4 */
  *param_1 = (long)(PTR_DAT_007e6a48 + 0x10);
  FUN_0063c0c8(param_1 + 7);
  return;
}



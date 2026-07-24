/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066375c
 * Function: FUN_0066375c
 * Signature: undefined FUN_0066375c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066375c(undefined8 *param_1)

{
                    /* try { // try from 0066375c to 0076377f has its CatchHandler @ 00663748 */
                    /* catch() { ... } // from try @ 00663758 with catch @ 0066376c */
                    /* try { // try from 00663780 to 007637af has its CatchHandler @ 00663780
                       catch(type#1 @ 00000000) { ... } // from try @ 00663780 with catch @ 00663780
                       catch(type#1 @ 00000000) { ... } // from try @ 006637cc with catch @ 00663780
                       catch(type#1 @ 00000000) { ... } // from try @ 00663818 with catch @ 00663780
                        */
  *param_1 = &PTR_FUN_007b7ee8;
  param_1[0x1f] = &PTR_FUN_007b7f10;
  param_1[1] = &PTR_FUN_007db650;
  FUN_00662f10(param_1 + 1);
  FUN_0061f468(param_1 + 0xe);
                    /* try { // try from 006637b0 to 007637cb has its CatchHandler @ 0066380c */
  param_1[1] = PTR_DAT_007e6338 + 0x10;
  FUN_0063c0c8(param_1 + 8);
                    /* try { // try from 006637cc to 0076380f has its CatchHandler @ 00663780 */
  param_1[0x1f] = PTR_DAT_007e7a48 + 0x10;
  FUN_006221dc(param_1 + 0x1f);
  operator_delete(param_1);
  return;
}



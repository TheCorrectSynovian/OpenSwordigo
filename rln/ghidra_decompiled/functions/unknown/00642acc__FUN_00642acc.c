/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00642acc
 * Function: FUN_00642acc
 * Signature: undefined FUN_00642acc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00642acc(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  if (param_2 == 8) {
                    /* try { // try from 00642b28 to 00742b3b has its CatchHandler @ 00642dd4 */
                    /* try { // try from 00642b3c to 00742b9f has its CatchHandler @ 00643010 */
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 0x40;
    return;
  }
  if (param_2 != 10) {
                    /* try { // try from 00642aec to 00742af3 has its CatchHandler @ 00642f70 */
    uVar2 = 8;
    if (param_2 != 0x10) {
      uVar2 = 0;
    }
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         uVar2 | *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5;
    return;
  }
                    /* try { // try from 00642b20 to 00742b27 has its CatchHandler @ 00642dd8 */
  *(uint *)((long)param_1 + lVar1 + 0x18) = *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 2
  ;
  return;
}



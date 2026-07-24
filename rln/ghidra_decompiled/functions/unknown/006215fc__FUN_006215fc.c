/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006215fc
 * Function: FUN_006215fc
 * Signature: undefined FUN_006215fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006215fc(long param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 | *(uint *)(param_1 + 0x20);
                    /* try { // try from 00621614 to 00721617 has its CatchHandler @ 00622470 */
                    /* try { // try from 00621618 to 0072162f has its CatchHandler @ 00622314 */
  uVar1 = param_2 | 1;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
                    /* try { // try from 00621638 to 0072163f has its CatchHandler @ 0062246c */
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



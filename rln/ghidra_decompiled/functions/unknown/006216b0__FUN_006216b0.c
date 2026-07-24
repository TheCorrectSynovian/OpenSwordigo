/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006216b0
 * Function: FUN_006216b0
 * Signature: undefined FUN_006216b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006216b0(long param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 006216bc to 007216c7 has its CatchHandler @ 006228a4 */
  *(uint *)(param_1 + 0x1c) = param_2;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = uVar1 | 1;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
                    /* try { // try from 006216c8 to 007216cf has its CatchHandler @ 00622270 */
  if ((uVar1 & param_2) == 0) {
                    /* try { // try from 006216d0 to 0072174f has its CatchHandler @ 006228a4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



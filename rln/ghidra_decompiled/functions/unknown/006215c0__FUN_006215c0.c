/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006215c0
 * Function: FUN_006215c0
 * Signature: undefined FUN_006215c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006215c0(long param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 006215c8 to 007215cb has its CatchHandler @ 00622474 */
                    /* try { // try from 006215d4 to 007215db has its CatchHandler @ 00622470 */
  uVar1 = param_2 | 1;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar1 = param_2;
  }
                    /* try { // try from 006215dc to 007215f3 has its CatchHandler @ 00622318 */
  *(uint *)(param_1 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



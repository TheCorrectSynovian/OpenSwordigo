/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620c14
 * Function: FUN_00620c14
 * Signature: undefined FUN_00620c14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620c14(long param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 00620c18 to 00720c1f has its CatchHandler @ 006223e4 */
                    /* try { // try from 00620c20 to 00720c33 has its CatchHandler @ 006223e0 */
  uVar1 = param_2 | 1;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
                    /* try { // try from 00620c34 to 00720c97 has its CatchHandler @ 0062275c */
  if ((uVar1 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



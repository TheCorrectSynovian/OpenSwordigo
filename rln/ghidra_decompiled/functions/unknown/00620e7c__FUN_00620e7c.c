/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620e7c
 * Function: FUN_00620e7c
 * Signature: undefined FUN_00620e7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00620e7c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  *(long *)(param_1 + 0xe8) = param_2;
  if (((uint)(param_2 == 0) & *(uint *)(param_1 + 0x1c)) == 0) {
                    /* try { // try from 00620ea8 to 00720eaf has its CatchHandler @ 0062208c */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



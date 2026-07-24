/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621828
 * Function: FUN_00621828
 * Signature: undefined FUN_00621828(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00621828(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0x20) = (uint)(param_2 == 0);
  *(long *)(param_1 + 0xe8) = param_2;
  if (((uint)(param_2 == 0) & *(uint *)(param_1 + 0x1c)) == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



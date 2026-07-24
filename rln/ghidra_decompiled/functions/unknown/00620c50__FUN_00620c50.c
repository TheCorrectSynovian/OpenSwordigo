/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620c50
 * Function: FUN_00620c50
 * Signature: undefined FUN_00620c50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620c50(long param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 | *(uint *)(param_1 + 0x20);
  uVar1 = param_2 | 1;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



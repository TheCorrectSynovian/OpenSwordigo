/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620d04
 * Function: FUN_00620d04
 * Signature: undefined FUN_00620d04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620d04(long param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x1c) = param_2;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar1 = uVar1 | 1;
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  if ((uVar1 & param_2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665ad8("basic_ios::clear");
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645ff4
 * Function: FUN_00645ff4
 * Signature: undefined FUN_00645ff4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645ff4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  if ((uVar1 != 0) && (*(ulong *)(param_1 + 0x18) < uVar1)) {
    if ((*(uint *)(param_1 + 0x40) >> 3 & 1) == 0) {
      *(ulong *)(param_1 + 8) = uVar1;
      *(ulong *)(param_1 + 0x10) = uVar1;
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



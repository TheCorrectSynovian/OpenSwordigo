/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064830c
 * Function: FUN_0064830c
 * Signature: undefined FUN_0064830c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064830c(long param_1)

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



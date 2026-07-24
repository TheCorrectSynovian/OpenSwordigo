/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644378
 * Function: FUN_00644378
 * Signature: undefined FUN_00644378(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00644378(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 0x18);
    if ((uVar2 != 0) && (uVar1 < uVar2)) {
      *(ulong *)(param_1 + 0x18) = uVar2;
      uVar1 = uVar2;
    }
    return uVar1 - *(long *)(param_1 + 0x10);
  }
  return -1;
}



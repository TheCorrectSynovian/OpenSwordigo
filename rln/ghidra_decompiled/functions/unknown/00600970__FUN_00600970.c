/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00600970
 * Function: FUN_00600970
 * Signature: undefined FUN_00600970(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00600970(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = FUN_005f356c(lVar3);
  puVar2 = (undefined4 *)FUN_005f4adc(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),uVar1);
  if (puVar2[2] == 0) {
    *puVar2 = 1;
    puVar2[2] = 1;
    if (*(ulong *)(*(long *)(lVar3 + 0x20) + 0x70) <= *(ulong *)(*(long *)(lVar3 + 0x20) + 0x78)) {
      FUN_005edcb0(lVar3);
    }
  }
  return uVar1;
}



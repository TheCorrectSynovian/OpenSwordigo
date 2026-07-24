/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644754
 * Function: FUN_00644754
 * Signature: undefined FUN_00644754(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00644754(long param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 8) < uVar2) {
    if (param_2 == -1) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 4;
      return 0;
    }
    bVar1 = *(int *)(uVar2 - 4) == param_2;
    if ((bVar1) || ((*(uint *)(param_1 + 0x40) >> 4 & 1) != 0)) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 4;
      if (bVar1) {
        return param_2;
      }
      *(int *)(uVar2 - 4) = param_2;
      return param_2;
    }
  }
  return -1;
}



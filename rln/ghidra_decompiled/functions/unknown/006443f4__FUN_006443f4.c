/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006443f4
 * Function: FUN_006443f4
 * Signature: undefined FUN_006443f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_006443f4(long param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 8) < uVar2) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 1;
      return 0;
    }
    bVar1 = (uint)*(byte *)(uVar2 - 1) == (param_2 & 0xff);
    if ((bVar1) || ((*(uint *)(param_1 + 0x40) >> 4 & 1) != 0)) {
      *(ulong *)(param_1 + 0x10) = uVar2 - 1;
      if (bVar1) {
        return param_2;
      }
      *(char *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}



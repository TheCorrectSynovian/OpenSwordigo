/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c158
 * Function: FUN_0066c158
 * Signature: undefined FUN_0066c158(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066c158(long *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0xffffffffffffffff;
  lVar4 = *(long *)(*param_1 + -0x18);
  if (lVar4 != 0) {
    uVar1 = lVar4 - 1;
    uVar3 = param_3;
    if (uVar1 < param_3) {
      uVar3 = uVar1;
    }
    while (*(int *)(*param_1 + uVar3 * 4) == param_2) {
      bVar2 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if (bVar2) {
        return 0xffffffffffffffff;
      }
    }
  }
  return uVar3;
}



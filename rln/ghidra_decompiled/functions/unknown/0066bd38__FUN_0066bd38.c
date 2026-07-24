/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bd38
 * Function: FUN_0066bd38
 * Signature: undefined FUN_0066bd38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066bd38(long *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x18);
  if (lVar2 != 0) {
    uVar1 = lVar2 - 1;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    do {
      if (param_3 == 0xffffffffffffffff) {
        return;
      }
      lVar2 = param_3 * 4;
      param_3 = param_3 - 1;
    } while (param_2 != *(int *)(*param_1 + lVar2));
  }
  return;
}



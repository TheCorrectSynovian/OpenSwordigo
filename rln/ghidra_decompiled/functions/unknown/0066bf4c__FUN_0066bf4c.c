/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bf4c
 * Function: FUN_0066bf4c
 * Signature: undefined FUN_0066bf4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066bf4c(long *param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_3 < *(ulong *)(lVar2 + -0x18)) {
    lVar1 = param_3 * 4;
    while( true ) {
      if (*(int *)(lVar2 + lVar1) != param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      if (*(ulong *)(lVar2 + -0x18) <= param_3) break;
      param_2 = *(int *)(lVar2 + param_3 * 4);
    }
  }
  return 0xffffffffffffffff;
}



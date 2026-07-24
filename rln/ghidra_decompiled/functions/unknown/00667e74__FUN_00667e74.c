/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667e74
 * Function: FUN_00667e74
 * Signature: undefined FUN_00667e74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00667e74(long *param_1,byte param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = *param_1;
                    /* try { // try from 00667e94 to 00767e9f has its CatchHandler @ 00668030 */
  if (*(ulong *)(lVar2 + -0x18) <= param_3) {
    return -1;
  }
  pvVar1 = memchr((void *)(lVar2 + param_3),(uint)param_2,*(ulong *)(lVar2 + -0x18) - param_3);
  lVar2 = (long)pvVar1 - lVar2;
  if (pvVar1 == (void *)0x0) {
    lVar2 = -1;
  }
  return lVar2;
}



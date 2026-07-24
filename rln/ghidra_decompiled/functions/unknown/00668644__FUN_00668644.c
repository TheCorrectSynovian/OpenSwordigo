/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668644
 * Function: FUN_00668644
 * Signature: undefined FUN_00668644(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668644(long *param_1,void *param_2,ulong param_3,size_t param_4)

{
  ulong uVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 00668648 to 0076864b has its CatchHandler @ 00668708 */
                    /* try { // try from 0066864c to 007687a7 has its CatchHandler @ 00668490 */
  lVar5 = *param_1;
  lVar4 = *(long *)(lVar5 + -0x18);
  if (lVar4 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = lVar4 - 1;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  do {
    pvVar3 = memchr(param_2,(uint)*(byte *)(lVar5 + param_3),param_4);
    if (pvVar3 == (void *)0x0) {
      return param_3;
    }
    bVar2 = param_3 != 0;
    param_3 = param_3 - 1;
  } while (bVar2);
  return 0xffffffffffffffff;
}



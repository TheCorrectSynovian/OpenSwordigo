/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668288
 * Function: FUN_00668288
 * Signature: undefined FUN_00668288(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668288(long *param_1,void *param_2,ulong param_3,size_t param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  
                    /* try { // try from 00668294 to 007682db has its CatchHandler @ 00668324 */
  lVar5 = *param_1;
  lVar2 = *(long *)(lVar5 + -0x18);
  if ((param_4 != 0) && (lVar2 != 0)) {
    uVar3 = lVar2 - 1;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    do {
                    /* try { // try from 006682dc to 0076834f has its CatchHandler @ 006681e0 */
      pvVar4 = memchr(param_2,(uint)*(byte *)(lVar5 + param_3),param_4);
      if (pvVar4 != (void *)0x0) {
        return param_3;
      }
      bVar1 = param_3 != 0;
      param_3 = param_3 - 1;
    } while (bVar1);
  }
  return 0xffffffffffffffff;
}



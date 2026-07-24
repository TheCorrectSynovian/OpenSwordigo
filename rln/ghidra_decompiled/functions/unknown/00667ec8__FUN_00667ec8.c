/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667ec8
 * Function: FUN_00667ec8
 * Signature: undefined FUN_00667ec8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667ec8(long *param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong __n;
  void *__s2;
  long lVar4;
  
  __s2 = (void *)*param_2;
  lVar4 = *param_1;
  __n = *(ulong *)((long)__s2 + -0x18);
  uVar3 = *(ulong *)(lVar4 + -0x18);
                    /* try { // try from 00667ef0 to 00767ef3 has its CatchHandler @ 00667f7c */
  if (uVar3 < __n) {
    return 0xffffffffffffffff;
  }
  uVar3 = uVar3 - __n;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  do {
                    /* try { // try from 00667f20 to 00767f23 has its CatchHandler @ 00667f88 */
                    /* try { // try from 00667f24 to 0076806f has its CatchHandler @ 006667ac */
    iVar2 = memcmp((void *)(lVar4 + param_3),__s2,__n);
    if (iVar2 == 0) {
      return param_3;
    }
                    /* try { // try from 00667f14 to 00767f17 has its CatchHandler @ 00667f74 */
    bVar1 = param_3 != 0;
    param_3 = param_3 - 1;
  } while (bVar1);
  return 0xffffffffffffffff;
}



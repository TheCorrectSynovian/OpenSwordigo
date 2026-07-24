/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed424
 * Function: FUN_005ed424
 * Signature: undefined FUN_005ed424(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ed424(undefined8 param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_005eed74(param_1,0,0,(long)(int)(param_2 * 8 + 0x28));
  FUN_005ee48c(param_1,lVar1,6);
  *(undefined1 *)(lVar1 + 10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(char *)(lVar1 + 0xb) = (char)param_2;
  if (param_2 != 0) {
    memset((void *)(lVar1 + (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3) +
                            0x20 + (ulong)(param_2 - 1) * -8),0,(ulong)param_2 << 3);
  }
  return lVar1;
}



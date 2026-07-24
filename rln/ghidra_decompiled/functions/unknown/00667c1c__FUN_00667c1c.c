/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667c1c
 * Function: FUN_00667c1c
 * Signature: undefined FUN_00667c1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667c1c(long *param_1,char *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
                    /* try { // try from 00667c38 to 00767c7b has its CatchHandler @ 00667ffc */
  uVar3 = *(ulong *)(lVar5 + -0x18);
  if (param_4 == 0) {
    uVar4 = param_3;
    if (uVar3 < param_3) {
      uVar4 = 0xffffffffffffffff;
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
    if ((param_4 <= uVar3) && (param_3 <= uVar3 - param_4)) {
      cVar1 = *param_2;
      uVar4 = param_3;
      do {
                    /* try { // try from 00667c80 to 00767c8f has its CatchHandler @ 00667f9c */
        uVar4 = uVar4 + 1;
                    /* try { // try from 00667cc0 to 00767ccb has its CatchHandler @ 0066802c */
        if ((*(char *)(lVar5 + param_3) == cVar1) &&
           (iVar2 = memcmp((void *)(lVar5 + uVar4),param_2 + 1,param_4 - 1), iVar2 == 0)) {
          return param_3;
        }
        param_3 = param_3 + 1;
      } while (uVar4 <= uVar3 - param_4);
      uVar4 = 0xffffffffffffffff;
                    /* try { // try from 00667cd4 to 00767ce3 has its CatchHandler @ 00668028 */
    }
  }
  return uVar4;
}



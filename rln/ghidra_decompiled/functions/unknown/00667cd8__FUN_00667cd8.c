/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667cd8
 * Function: FUN_00667cd8
 * Signature: undefined FUN_00667cd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667cd8(long *param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  pcVar4 = (char *)*param_2;
  lVar7 = *param_1;
  uVar3 = *(ulong *)(pcVar4 + -0x18);
  uVar5 = *(ulong *)(lVar7 + -0x18);
  if (uVar3 == 0) {
    uVar6 = param_3;
    if (uVar5 < param_3) {
      uVar6 = 0xffffffffffffffff;
    }
  }
  else {
    uVar6 = 0xffffffffffffffff;
                    /* try { // try from 00667d34 to 00767d43 has its CatchHandler @ 00668020 */
    if ((uVar3 <= uVar5) && (param_3 <= uVar5 - uVar3)) {
      cVar1 = *pcVar4;
      uVar6 = param_3;
      do {
        uVar6 = uVar6 + 1;
                    /* try { // try from 00667d88 to 00767d97 has its CatchHandler @ 00668034 */
        if ((*(char *)(lVar7 + param_3) == cVar1) &&
           (iVar2 = memcmp((void *)(lVar7 + uVar6),pcVar4 + 1,uVar3 - 1), iVar2 == 0)) {
          return param_3;
        }
                    /* try { // try from 00667d5c to 00767d63 has its CatchHandler @ 00667f9c */
        param_3 = param_3 + 1;
      } while (uVar6 <= uVar5 - uVar3);
      uVar6 = 0xffffffffffffffff;
    }
  }
                    /* try { // try from 00667d20 to 00767d2b has its CatchHandler @ 00668024 */
  return uVar6;
}



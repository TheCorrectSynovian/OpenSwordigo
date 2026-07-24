/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667d9c
 * Function: FUN_00667d9c
 * Signature: undefined FUN_00667d9c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00667d9c(long *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
                    /* try { // try from 00667db0 to 00767dbb has its CatchHandler @ 00667f84 */
                    /* try { // try from 00667dc4 to 00767dcf has its CatchHandler @ 00667f9c */
  sVar3 = strlen(param_2);
  lVar6 = *param_1;
                    /* try { // try from 00667dd4 to 00767de7 has its CatchHandler @ 00667ffc */
  uVar4 = *(ulong *)(lVar6 + -0x18);
  if (sVar3 == 0) {
    uVar5 = param_3;
    if (uVar4 < param_3) {
      uVar5 = 0xffffffffffffffff;
    }
  }
  else {
    uVar5 = 0xffffffffffffffff;
                    /* try { // try from 00667e14 to 00767e3f has its CatchHandler @ 00667fa4 */
    if ((sVar3 <= uVar4) && (param_3 <= uVar4 - sVar3)) {
      cVar1 = *param_2;
      uVar5 = param_3;
      do {
        uVar5 = uVar5 + 1;
                    /* try { // try from 00667e48 to 00767e5b has its CatchHandler @ 00667f80 */
        if ((*(char *)(lVar6 + param_3) == cVar1) &&
           (iVar2 = memcmp((void *)(lVar6 + uVar5),param_2 + 1,sVar3 - 1), iVar2 == 0)) {
          return param_3;
        }
        param_3 = param_3 + 1;
      } while (uVar5 <= uVar4 - sVar3);
      uVar5 = 0xffffffffffffffff;
    }
  }
  return uVar5;
}



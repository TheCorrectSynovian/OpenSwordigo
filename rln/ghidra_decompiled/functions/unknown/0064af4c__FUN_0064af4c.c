/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064af4c
 * Function: FUN_0064af4c
 * Signature: undefined FUN_0064af4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064af4c(long *param_1,wchar_t *param_2,long param_3)

{
  size_t __n;
  wchar_t wVar1;
  size_t sVar2;
  long lVar3;
  
  lVar3 = 0;
  if (0 < param_3) {
    do {
      sVar2 = param_1[3] - param_1[2] >> 2;
      __n = param_3 - lVar3;
      if ((long)sVar2 < param_3 - lVar3) {
        __n = sVar2;
      }
      if (sVar2 != 0) {
                    /* try { // try from 0064afd8 to 0074afe7 has its CatchHandler @ 0064b138 */
        lVar3 = lVar3 + __n;
        wmemcpy(param_2,(wchar_t *)param_1[2],__n);
        param_1[2] = param_1[2] + __n * 4;
        if (param_3 <= lVar3) {
          return lVar3;
        }
        param_2 = param_2 + __n;
      }
      wVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      if (wVar1 == L'\xffffffff') {
        return lVar3;
      }
      lVar3 = lVar3 + 1;
      *param_2 = wVar1;
      param_2 = param_2 + 1;
    } while (lVar3 < param_3);
  }
  return lVar3;
}



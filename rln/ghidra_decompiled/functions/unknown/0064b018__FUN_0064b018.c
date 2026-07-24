/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b018
 * Function: FUN_0064b018
 * Signature: undefined FUN_0064b018(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064b018(long *param_1,wchar_t *param_2,long param_3)

{
  size_t __n;
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 < 1) {
                    /* try { // try from 0064b0cc to 0074b0d3 has its CatchHandler @ 0064b134 */
                    /* try { // try from 0064b0d4 to 0074b14b has its CatchHandler @ 0064ae48 */
    return 0;
  }
  while( true ) {
    sVar2 = param_1[6] - param_1[5] >> 2;
    __n = param_3 - lVar3;
    if ((long)sVar2 < param_3 - lVar3) {
      __n = sVar2;
    }
    if (sVar2 != 0) {
      lVar3 = lVar3 + __n;
      wmemcpy((wchar_t *)param_1[5],param_2,__n);
      param_1[5] = param_1[5] + __n * 4;
      if (param_3 <= lVar3) {
        return lVar3;
      }
      param_2 = param_2 + __n;
    }
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
    if (iVar1 == -1) break;
    lVar3 = lVar3 + 1;
    param_2 = param_2 + 1;
    if (param_3 <= lVar3) {
      return lVar3;
    }
  }
  return lVar3;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ae74
 * Function: FUN_0064ae74
 * Signature: undefined FUN_0064ae74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064ae74(long *param_1,undefined1 *param_2,long param_3)

{
  size_t __n;
  long lVar1;
  int iVar2;
  size_t sVar3;
  void *__dest;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = 0;
  if (0 < param_3) {
    __dest = (void *)param_1[5];
    lVar1 = 0;
    sVar3 = param_1[6] - (long)__dest;
    puVar5 = param_2;
    if (sVar3 != 0) goto LAB_0064af04;
    while( true ) {
      do {
        param_2 = puVar5 + 1;
        iVar2 = (**(code **)(*param_1 + 0x68))(param_1,*puVar5);
        if (iVar2 == -1) {
          return lVar4;
        }
        lVar4 = lVar4 + 1;
        if (param_3 <= lVar4) {
          return lVar4;
        }
        __dest = (void *)param_1[5];
        lVar1 = -lVar4;
        sVar3 = param_1[6] - (long)__dest;
        puVar5 = param_2;
      } while (sVar3 == 0);
LAB_0064af04:
      __n = param_3 + lVar1;
      if ((long)sVar3 < param_3 + lVar1) {
        __n = sVar3;
      }
      lVar4 = lVar4 + __n;
      memcpy(__dest,param_2,__n);
      param_1[5] = param_1[5] + __n;
      if (param_3 <= lVar4) break;
      puVar5 = param_2 + __n;
    }
  }
  return lVar4;
}



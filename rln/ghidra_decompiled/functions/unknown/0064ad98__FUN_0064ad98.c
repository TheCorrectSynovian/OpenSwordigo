/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ad98
 * Function: FUN_0064ad98
 * Signature: undefined FUN_0064ad98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064ad98(long *param_1,undefined1 *param_2,long param_3)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  int iVar3;
  void *__src;
  long lVar4;
  
                    /* catch() { ... } // from try @ 0064aca8 with catch @ 0064adb4 */
  lVar4 = 0;
  if (param_3 < 1) {
    return 0;
  }
  __src = (void *)param_1[2];
  lVar2 = 0;
  sVar1 = param_1[3] - (long)__src;
  while( true ) {
    if (sVar1 != 0) {
      __n = param_3 + lVar2;
      if ((long)sVar1 < param_3 + lVar2) {
        __n = sVar1;
      }
      lVar4 = lVar4 + __n;
      memcpy(param_2,__src,__n);
                    /* try { // try from 0064ae48 to 0074afd7 has its CatchHandler @ 0064ae48
                       catch() { ... } // from try @ 0064ae48 with catch @ 0064ae48
                       catch() { ... } // from try @ 0064b0d4 with catch @ 0064ae48 */
      param_1[2] = param_1[2] + __n;
      if (param_3 <= lVar4) {
        return lVar4;
      }
      param_2 = param_2 + __n;
    }
    iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar3 == -1) {
      return lVar4;
    }
    lVar4 = lVar4 + 1;
                    /* try { // try from 0064ae00 to 0074ae0b has its CatchHandler @ 0064aa1c */
    *param_2 = (char)iVar3;
                    /* catch() { ... } // from try @ 0064ad88 with catch @ 0064ae08 */
    if (param_3 <= lVar4) break;
    __src = (void *)param_1[2];
    lVar2 = -lVar4;
    sVar1 = param_1[3] - (long)__src;
    param_2 = param_2 + 1;
  }
  return lVar4;
}



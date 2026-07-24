/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006689e0
 * Function: FUN_006689e0
 * Signature: undefined FUN_006689e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_006689e0(undefined8 *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  void *__s1;
  
                    /* catch() { ... } // from try @ 006688e8 with catch @ 006689e4 */
                    /* catch() { ... } // from try @ 00668944 with catch @ 006689e8 */
  __s1 = (void *)*param_1;
  sVar2 = strlen(param_2);
  uVar3 = *(ulong *)((long)__s1 + -0x18);
  __n = sVar2;
  if (uVar3 < sVar2) {
    __n = uVar3;
  }
  iVar1 = memcmp(__s1,param_2,__n);
  if (iVar1 == 0) {
    iVar1 = 0x7fffffff;
    lVar4 = uVar3 - sVar2;
    if (lVar4 < 0x80000000) {
      iVar1 = -0x80000000;
      if (-0x80000001 < lVar4) {
        iVar1 = (int)lVar4;
      }
                    /* try { // try from 00668a54 to 00768a93 has its CatchHandler @ 00668a54
                       catch() { ... } // from try @ 00668a54 with catch @ 00668a54
                       catch() { ... } // from try @ 00668b50 with catch @ 00668a54
                       catch() { ... } // from try @ 00668bcc with catch @ 00668a54 */
      return iVar1;
    }
  }
  return iVar1;
}



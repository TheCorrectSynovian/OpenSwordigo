/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668a5c
 * Function: FUN_00668a5c
 * Signature: undefined FUN_00668a5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00668a5c(long *param_1,ulong param_2,ulong param_3,char *param_4)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  uVar4 = *(ulong *)(lVar5 + -0x18);
  if (uVar4 < param_2) {
                    /* try { // try from 00668b08 to 00768b4f has its CatchHandler @ 00668b98 */
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar4);
  }
  uVar1 = uVar4 - param_2;
  if (param_3 < uVar4 - param_2) {
    uVar1 = param_3;
  }
                    /* try { // try from 00668a94 to 00768acb has its CatchHandler @ 00668b98 */
  sVar3 = strlen(param_4);
  __n = sVar3;
  if (uVar1 < sVar3) {
    __n = uVar1;
  }
  iVar2 = memcmp((void *)(lVar5 + param_2),param_4,__n);
  if (iVar2 == 0) {
    iVar2 = 0x7fffffff;
    lVar5 = uVar1 - sVar3;
    if (lVar5 < 0x80000000) {
      iVar2 = -0x80000000;
      if (-0x80000001 < lVar5) {
        iVar2 = (int)lVar5;
      }
                    /* try { // try from 00668af0 to 00768afb has its CatchHandler @ 00668ba4 */
      return iVar2;
    }
  }
  return iVar2;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066887c
 * Function: FUN_0066887c
 * Signature: undefined FUN_0066887c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066887c(long *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 0066888c to 007688e7 has its CatchHandler @ 0066888c
                       catch() { ... } // from try @ 0066888c with catch @ 0066888c
                       catch() { ... } // from try @ 00668950 with catch @ 0066888c */
  uVar3 = *(ulong *)(*param_1 + -0x18);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar3);
  }
  uVar1 = uVar3 - param_2;
  if (param_3 < uVar3 - param_2) {
    uVar1 = param_3;
  }
  uVar3 = *(ulong *)((long)*param_4 + -0x18);
  __n = uVar1;
  if (uVar3 < uVar1) {
    __n = uVar3;
  }
  iVar2 = memcmp((void *)(*param_1 + param_2),(void *)*param_4,__n);
  if (iVar2 == 0) {
    iVar2 = 0x7fffffff;
    lVar4 = uVar1 - uVar3;
    if (lVar4 < 0x80000000) {
                    /* try { // try from 006688e8 to 0076891f has its CatchHandler @ 006689e4 */
      iVar2 = -0x80000000;
      if (-0x80000001 < lVar4) {
        iVar2 = (int)lVar4;
      }
      return iVar2;
    }
  }
  return iVar2;
}



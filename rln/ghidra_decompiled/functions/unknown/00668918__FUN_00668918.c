/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668918
 * Function: FUN_00668918
 * Signature: undefined FUN_00668918(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00668918(long *param_1,ulong param_2,ulong param_3,long *param_4,ulong param_5,ulong param_6
                )

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(*param_1 + -0x18);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar4);
  }
  uVar3 = *(ulong *)(*param_4 + -0x18);
                    /* try { // try from 00668944 to 0076894f has its CatchHandler @ 006689e8 */
  if (param_5 <= uVar3) {
    uVar3 = uVar3 - param_5;
                    /* try { // try from 00668950 to 00768a53 has its CatchHandler @ 0066888c */
    uVar1 = uVar4 - param_2;
    if (param_3 < uVar4 - param_2) {
      uVar1 = param_3;
    }
    if (param_6 < uVar3) {
      uVar3 = param_6;
    }
    __n = uVar1;
    if (uVar3 < uVar1) {
      __n = uVar3;
    }
    iVar2 = memcmp((void *)(*param_1 + param_2),(void *)(*param_4 + param_5),__n);
    if (iVar2 == 0) {
      iVar2 = 0x7fffffff;
      lVar5 = uVar1 - uVar3;
      if (lVar5 < 0x80000000) {
        iVar2 = -0x80000000;
        if (-0x80000001 < lVar5) {
          iVar2 = (int)lVar5;
        }
        return iVar2;
      }
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
               param_5);
}



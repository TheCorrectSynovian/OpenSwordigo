/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cd30
 * Function: FUN_0066cd30
 * Signature: undefined FUN_0066cd30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066cd30(long *param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  wchar_t *__s2;
  wchar_t *__s1;
  long lVar1;
  ulong uVar2;
  wchar_t *pwVar3;
  size_t __n;
  long lVar4;
  
  pwVar3 = (wchar_t *)*param_1;
  uVar2 = *(ulong *)(pwVar3 + -6);
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2,uVar2);
  }
  if (param_4 <= 0xffffffffffffffe - uVar2) {
    if (((param_3 < pwVar3) || (pwVar3 + uVar2 < param_3)) || (L'\0' < pwVar3[-2])) {
                    /* catch() { ... } // from try @ 0066cc94 with catch @ 0066cd98 */
      FUN_0066c650(param_1,param_2,0,param_4);
      if (param_4 != 0) {
        if (param_4 == 1) {
          *(wchar_t *)(*param_1 + param_2 * 4) = *param_3;
        }
        else {
          wmemcpy((wchar_t *)(*param_1 + param_2 * 4),param_3,param_4);
        }
      }
    }
    else {
      FUN_0066c650(param_1,param_2,0);
      lVar1 = *param_1;
                    /* try { // try from 0066cde0 to 0076cdeb has its CatchHandler @ 0066cc30 */
      __s2 = (wchar_t *)((long)param_3 + (lVar1 - (long)pwVar3));
      __s1 = (wchar_t *)(lVar1 + param_2 * 4);
                    /* catch() { ... } // from try @ 0066cdb8 with catch @ 0066cde8 */
      if (__s2 + param_4 <= __s1) {
        if (param_4 != 1) {
          wmemcpy(__s1,__s2,param_4);
          return param_1;
        }
        *(undefined4 *)(lVar1 + param_2 * 4) =
             *(undefined4 *)((long)param_3 + (lVar1 - (long)pwVar3));
        return param_1;
      }
      if (__s2 < __s1) {
        lVar4 = (long)__s1 - (long)__s2;
        __n = lVar4 >> 2;
        if (__n == 1) {
          *(undefined4 *)(lVar1 + param_2 * 4) =
               *(undefined4 *)((long)param_3 + (lVar1 - (long)pwVar3));
        }
        else {
          wmemcpy(__s1,__s2,__n);
        }
        if (param_4 - __n == 1) {
          *(wchar_t *)((long)__s1 + lVar4) = __s1[param_4];
        }
        else {
          wmemcpy((wchar_t *)((long)__s1 + lVar4),__s1 + param_4,param_4 - __n);
        }
      }
      else if (param_4 == 1) {
        *(wchar_t *)(lVar1 + param_2 * 4) = __s2[1];
      }
      else {
        wmemcpy(__s1,__s2 + param_4,param_4);
      }
    }
                    /* try { // try from 0066cdb8 to 0076cddf has its CatchHandler @ 0066cde8 */
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::insert");
}



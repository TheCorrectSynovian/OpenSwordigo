/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a238
 * Function: FUN_0062a238
 * Signature: undefined FUN_0062a238(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062a238(long *param_1,long param_2,wchar_t param_3)

{
  ulong uVar1;
  bool bVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  wchar_t *pwVar8;
  ulong uVar9;
  size_t __n;
  long *plVar10;
  char local_8 [8];
  
  if (param_3 == L'\xffffffff') {
    plVar10 = (long *)FUN_0066f934();
    return plVar10;
  }
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if ((param_2 < 1) || (local_8[0] == '\0')) {
    return param_1;
  }
  plVar10 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((wchar_t *)plVar10[2] < (wchar_t *)plVar10[3]) {
    wVar3 = *(wchar_t *)plVar10[2];
  }
  else {
    wVar3 = (**(code **)(*plVar10 + 0x48))(plVar10);
  }
  lVar5 = param_1[1];
  bVar2 = false;
LAB_0062a2bc:
  do {
    if (param_3 == wVar3 || wVar3 == L'\xffffffff') {
LAB_0062a358:
      if (bVar2) {
        param_1[1] = 0x7fffffffffffffff;
      }
      if (wVar3 == L'\xffffffff') {
        lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_006215c0(lVar5,*(uint *)(lVar5 + 0x20) | 2);
        return param_1;
      }
      if (param_3 != wVar3) {
        return param_1;
      }
      if (param_1[1] != 0x7fffffffffffffff) {
        param_1[1] = param_1[1] + 1;
      }
      if ((ulong)plVar10[2] < (ulong)plVar10[3]) {
        plVar10[2] = plVar10[2] + 4;
        return param_1;
      }
      (**(code **)(*plVar10 + 0x50))(plVar10);
      return param_1;
    }
    while (lVar5 < param_2) {
      pwVar8 = (wchar_t *)plVar10[3];
      pwVar4 = (wchar_t *)plVar10[2];
      sVar6 = (long)pwVar8 - (long)pwVar4 >> 2;
      __n = param_2 - lVar5;
      if ((long)sVar6 < param_2 - lVar5) {
        __n = sVar6;
      }
      if ((long)__n < 2) {
        param_1[1] = lVar5 + 1;
                    /* catch() { ... } // from try @ 0062a1fc with catch @ 0062a3b4 */
        if (pwVar4 < pwVar8) {
                    /* catch() { ... } // from try @ 0062a138 with catch @ 0062a3b8
                       catch() { ... } // from try @ 0062a188 with catch @ 0062a3b8 */
          wVar3 = *pwVar4;
          plVar10[2] = (long)(pwVar4 + 1);
        }
        else {
          wVar3 = (**(code **)(*plVar10 + 0x50))(plVar10);
        }
        if (wVar3 == L'\xffffffff') {
          lVar5 = param_1[1];
          wVar3 = L'\xffffffff';
        }
        else if ((wchar_t *)plVar10[2] < (wchar_t *)plVar10[3]) {
          wVar3 = *(wchar_t *)plVar10[2];
          lVar5 = param_1[1];
        }
        else {
LAB_0062a3e4:
          wVar3 = (**(code **)(*plVar10 + 0x48))(plVar10);
          lVar5 = param_1[1];
        }
        goto LAB_0062a2bc;
      }
      pwVar4 = wmemchr(pwVar4,param_3,__n);
      lVar7 = plVar10[2];
                    /* catch() { ... } // from try @ 0062a1c4 with catch @ 0062a310 */
      if (pwVar4 != (wchar_t *)0x0) {
                    /* catch() { ... } // from try @ 0062a124 with catch @ 0062a314 */
                    /* catch() { ... } // from try @ 0062a154 with catch @ 0062a318 */
        __n = (long)pwVar4 - lVar7 >> 2;
      }
      lVar5 = param_1[1];
      uVar1 = lVar7 + __n * 4;
      uVar9 = plVar10[3];
      plVar10[2] = uVar1;
      lVar5 = __n + lVar5;
      param_1[1] = lVar5;
      if (uVar9 <= uVar1) goto LAB_0062a3e4;
                    /* try { // try from 0062a33c to 0072a343 has its CatchHandler @ 0062a348 */
      wVar3 = *(wchar_t *)(lVar7 + __n * 4);
                    /* try { // try from 0062a344 to 0072a41b has its CatchHandler @ 0062a060 */
                    /* catch() { ... } // from try @ 0062a33c with catch @ 0062a348 */
                    /* catch() { ... } // from try @ 0062a0f4 with catch @ 0062a34c */
      if (param_3 == wVar3 || wVar3 == L'\xffffffff') goto LAB_0062a358;
    }
    if (param_2 != 0x7fffffffffffffff) goto LAB_0062a358;
    param_1[1] = -0x8000000000000000;
    lVar5 = -0x8000000000000000;
    bVar2 = true;
  } while( true );
}



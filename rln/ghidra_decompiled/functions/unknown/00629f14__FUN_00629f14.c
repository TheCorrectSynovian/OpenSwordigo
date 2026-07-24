/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00629f14
 * Function: FUN_00629f14
 * Signature: undefined FUN_00629f14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00629f14(long *param_1,wchar_t *param_2,long param_3,wchar_t param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  size_t __n;
  wchar_t *pwVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  long *plVar10;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] == '\0') {
LAB_0062a0a0:
    lVar5 = param_1[1];
    uVar4 = 0;
LAB_0062a0a8:
    if (0 < param_3) {
      *param_2 = L'\0';
    }
    if (lVar5 == 0) {
      uVar4 = uVar4 | 4;
    }
    else if (uVar4 == 0) {
                    /* try { // try from 0062a0f4 to 0072a107 has its CatchHandler @ 0062a34c */
      return param_1;
    }
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_006215c0(lVar5,uVar4 | *(uint *)(lVar5 + 0x20));
    return param_1;
  }
                    /* catch() { ... } // from try @ 00629da0 with catch @ 00629f5c */
  plVar10 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((wchar_t *)plVar10[2] < (wchar_t *)plVar10[3]) {
    wVar1 = *(wchar_t *)plVar10[2];
  }
  else {
    wVar1 = (**(code **)(*plVar10 + 0x48))(plVar10);
  }
LAB_00629f78:
  do {
    lVar5 = param_1[1];
LAB_00629f7c:
                    /* try { // try from 00629f80 to 00729f87 has its CatchHandler @ 00629f8c */
    lVar7 = lVar5 + 1;
                    /* try { // try from 00629f88 to 0072a05f has its CatchHandler @ 00629cc0 */
                    /* catch() { ... } // from try @ 00629f80 with catch @ 00629f8c */
                    /* catch() { ... } // from try @ 00629d74 with catch @ 00629f90 */
    if (param_4 == wVar1 || wVar1 == L'\xffffffff') {
LAB_0062a03c:
      if (wVar1 == L'\xffffffff') {
        uVar4 = 2;
        goto LAB_0062a0a8;
      }
      uVar4 = 4;
      if (param_4 != wVar1) goto LAB_0062a0a8;
      uVar3 = plVar10[2];
      uVar8 = plVar10[3];
      param_1[1] = lVar7;
                    /* try { // try from 0062a060 to 0072a0f3 has its CatchHandler @ 0062a060
                       catch() { ... } // from try @ 0062a060 with catch @ 0062a060
                       catch() { ... } // from try @ 0062a224 with catch @ 0062a060
                       catch() { ... } // from try @ 0062a344 with catch @ 0062a060 */
      if (uVar3 < uVar8) {
        plVar10[2] = uVar3 + 4;
        uVar4 = 0;
        lVar5 = lVar7;
        goto LAB_0062a0a8;
      }
                    /* try { // try from 0062a1c4 to 0072a1cf has its CatchHandler @ 0062a310 */
      (**(code **)(*plVar10 + 0x50))(plVar10);
      goto LAB_0062a0a0;
    }
    while( true ) {
                    /* catch() { ... } // from try @ 00629d88 with catch @ 00629f98
                       catch() { ... } // from try @ 00629dd4 with catch @ 00629f98 */
      if (param_3 <= lVar7) goto LAB_0062a03c;
      pwVar6 = (wchar_t *)plVar10[3];
      pwVar2 = (wchar_t *)plVar10[2];
      __n = (param_3 - lVar5) - 1;
      sVar9 = (long)pwVar6 - (long)pwVar2 >> 2;
      if ((long)sVar9 < (long)__n) {
        __n = sVar9;
      }
      if ((long)__n < 2) break;
      pwVar2 = wmemchr(pwVar2,param_4,__n);
      if (pwVar2 != (wchar_t *)0x0) {
        __n = (long)pwVar2 - plVar10[2] >> 2;
      }
      wmemcpy(param_2,(wchar_t *)plVar10[2],__n);
      lVar7 = plVar10[2];
      lVar5 = param_1[1];
      param_2 = param_2 + __n;
      uVar8 = plVar10[3];
      uVar3 = lVar7 + __n * 4;
      plVar10[2] = uVar3;
      lVar5 = __n + lVar5;
      param_1[1] = lVar5;
      if (uVar8 <= uVar3) {
                    /* try { // try from 0062a154 to 0072a167 has its CatchHandler @ 0062a318 */
        wVar1 = (**(code **)(*plVar10 + 0x48))(plVar10);
        goto LAB_00629f78;
      }
      wVar1 = *(wchar_t *)(lVar7 + __n * 4);
      lVar7 = lVar5 + 1;
      if (param_4 == wVar1 || wVar1 == L'\xffffffff') goto LAB_0062a03c;
    }
    *param_2 = wVar1;
    param_1[1] = lVar7;
    param_2 = param_2 + 1;
    if (pwVar2 < pwVar6) {
      wVar1 = *pwVar2;
                    /* try { // try from 0062a124 to 0072a137 has its CatchHandler @ 0062a314 */
      plVar10[2] = (long)(pwVar2 + 1);
    }
    else {
      wVar1 = (**(code **)(*plVar10 + 0x50))(plVar10);
                    /* try { // try from 0062a188 to 0072a18b has its CatchHandler @ 0062a3b8 */
    }
    if (wVar1 == L'\xffffffff') {
      lVar5 = param_1[1];
      wVar1 = L'\xffffffff';
      goto LAB_00629f7c;
    }
                    /* try { // try from 0062a138 to 0072a14b has its CatchHandler @ 0062a3b8 */
    if ((wchar_t *)plVar10[2] < (wchar_t *)plVar10[3]) {
      wVar1 = *(wchar_t *)plVar10[2];
      lVar5 = param_1[1];
      goto LAB_00629f7c;
    }
    wVar1 = (**(code **)(*plVar10 + 0x48))(plVar10);
  } while( true );
}



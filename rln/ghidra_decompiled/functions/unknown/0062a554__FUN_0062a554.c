/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062a554
 * Function: FUN_0062a554
 * Signature: undefined FUN_0062a554(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062a554(long *param_1,long *param_2,wchar_t param_3)

{
  ulong uVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  wchar_t *pwVar7;
  long lVar8;
  size_t __n;
  long *plVar9;
  ulong uVar10;
  char local_8 [8];
  
                    /* try { // try from 0062a560 to 0072a5f7 has its CatchHandler @ 0062a560
                       catch() { ... } // from try @ 0062a560 with catch @ 0062a560
                       catch() { ... } // from try @ 0062a644 with catch @ 0062a560 */
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    FUN_0066c650(param_2,0,*(undefined8 *)(*param_2 + -0x18),0);
                    /* try { // try from 0062a5f8 to 0072a60b has its CatchHandler @ 0062a6c4 */
    plVar9 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((wchar_t *)plVar9[2] < (wchar_t *)plVar9[3]) {
                    /* try { // try from 0062a60c to 0072a643 has its CatchHandler @ 0062a6c8 */
      wVar2 = *(wchar_t *)plVar9[2];
    }
    else {
      wVar2 = (**(code **)(*plVar9 + 0x48))(plVar9);
    }
    uVar10 = 0;
    do {
      while( true ) {
        if ((wVar2 == L'\xffffffff') || (param_3 == wVar2)) {
          if (wVar2 != L'\xffffffff') goto LAB_0062a75c;
                    /* try { // try from 0062a77c to 0072a77f has its CatchHandler @ 0062a88c */
          uVar4 = 6;
          if (uVar10 != 0) {
            uVar4 = 2;
          }
          goto LAB_0062a598;
        }
        pwVar7 = (wchar_t *)plVar9[3];
        pwVar3 = (wchar_t *)plVar9[2];
        sVar5 = (long)pwVar7 - (long)pwVar3 >> 2;
        __n = 0xffffffffffffffe - uVar10;
        if ((long)sVar5 < (long)(0xffffffffffffffe - uVar10)) {
          __n = sVar5;
        }
        if ((long)__n < 2) break;
        pwVar3 = wmemchr(pwVar3,param_3,__n);
        if (pwVar3 != (wchar_t *)0x0) {
          __n = (long)pwVar3 - plVar9[2] >> 2;
        }
                    /* try { // try from 0062a644 to 0072a737 has its CatchHandler @ 0062a560 */
        FUN_0066e774(param_2,plVar9[2],__n);
        lVar6 = plVar9[2];
        uVar10 = uVar10 + __n;
        uVar1 = lVar6 + __n * 4;
        plVar9[2] = uVar1;
        if (uVar1 < (ulong)plVar9[3]) {
          wVar2 = *(wchar_t *)(lVar6 + __n * 4);
        }
        else {
LAB_0062a78c:
          wVar2 = (**(code **)(*plVar9 + 0x48))(plVar9);
                    /* try { // try from 0062a7a0 to 0072a7a3 has its CatchHandler @ 0062a87c */
        }
LAB_0062a668:
        if (0xffffffffffffffd < uVar10) goto LAB_0062a744;
      }
      lVar6 = *param_2;
      lVar8 = *(long *)(lVar6 + -0x18);
      uVar1 = lVar8 + 1;
                    /* catch() { ... } // from try @ 0062a5f8 with catch @ 0062a6c4 */
                    /* catch() { ... } // from try @ 0062a60c with catch @ 0062a6c8 */
      if ((*(ulong *)(lVar6 + -0x10) < uVar1) || (0 < *(int *)(lVar6 + -8))) {
        FUN_0066e318(param_2,uVar1);
        lVar6 = *param_2;
        pwVar3 = (wchar_t *)plVar9[2];
        pwVar7 = (wchar_t *)plVar9[3];
        lVar8 = *(long *)(lVar6 + -0x18);
      }
      *(wchar_t *)(lVar6 + lVar8 * 4) = wVar2;
      if ((ulong *)(lVar6 + -0x18) != (ulong *)PTR_DAT_007e6438) {
        *(undefined4 *)(lVar6 + -8) = 0;
        *(ulong *)(lVar6 + -0x18) = uVar1;
                    /* try { // try from 0062a7c4 to 0072a7c7 has its CatchHandler @ 0062a86c */
        *(undefined4 *)(lVar6 + uVar1 * 4) = 0;
      }
      uVar10 = uVar10 + 1;
      if (pwVar3 < pwVar7) {
        wVar2 = *pwVar3;
        plVar9[2] = (long)(pwVar3 + 1);
      }
      else {
        wVar2 = (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      if (wVar2 == L'\xffffffff') goto LAB_0062a668;
      if ((wchar_t *)plVar9[3] <= (wchar_t *)plVar9[2]) goto LAB_0062a78c;
      wVar2 = *(wchar_t *)plVar9[2];
                    /* catch() { ... } // from try @ 0062a858 with catch @ 0062a738
                       catch() { ... } // from try @ 0062a984 with catch @ 0062a738 */
    } while (uVar10 < 0xffffffffffffffe);
LAB_0062a744:
    if (wVar2 == L'\xffffffff') {
      uVar4 = 2;
      goto LAB_0062a598;
    }
LAB_0062a75c:
    if (param_3 != wVar2) {
      uVar4 = 4;
      goto LAB_0062a598;
    }
    if ((ulong)plVar9[2] < (ulong)plVar9[3]) {
      plVar9[2] = plVar9[2] + 4;
                    /* try { // try from 0062a7e8 to 0072a80f has its CatchHandler @ 0062a930 */
    }
    else {
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    if (uVar10 != 0xffffffffffffffff) {
      return param_1;
    }
  }
  uVar4 = 4;
LAB_0062a598:
  lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar6,uVar4 | *(uint *)(lVar6 + 0x20));
  return param_1;
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064dc04
 * Function: FUN_0064dc04
 * Signature: undefined FUN_0064dc04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0064dc04(long *param_1,undefined8 param_2,wchar_t *param_3,wchar_t *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  wchar_t wVar4;
  size_t *psVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  size_t sVar9;
  wchar_t *__s;
  long lVar10;
  ulong uVar11;
  wchar_t *pwVar12;
  wchar_t *__s1;
  undefined1 auStack_8 [8];
  
  puVar3 = PTR_DAT_007e6438;
  __s1 = (wchar_t *)(PTR_DAT_007e6438 + 0x18);
  *param_1 = (long)__s1;
  if (param_3 == param_4) {
    uVar11 = 0;
    pwVar12 = __s1 + *(long *)puVar3;
  }
  else {
    if ((param_3 == (wchar_t *)0x0) && (param_4 != (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    lVar10 = (long)param_4 - (long)param_3;
    sVar9 = lVar10 >> 2;
    psVar5 = (size_t *)FUN_0066c5b8(sVar9,0,auStack_8);
    __s1 = (wchar_t *)(psVar5 + 3);
    if (sVar9 == 1) {
      *(wchar_t *)(psVar5 + 3) = *param_3;
    }
    else {
      wmemcpy(__s1,param_3,sVar9);
    }
    if (psVar5 == (size_t *)PTR_DAT_007e6438) {
      sVar9 = *psVar5;
    }
    else {
      *(undefined4 *)(psVar5 + 2) = 0;
      *psVar5 = sVar9;
                    /* catch() { ... } // from try @ 0064de10 with catch @ 0064de48 */
      *(undefined4 *)((long)psVar5 + lVar10 + 0x18) = 0;
    }
    uVar11 = lVar10 >> 1;
    pwVar12 = __s1 + sVar9;
    uVar6 = 0xffffffffffffffff;
    if (0x1fc0000000000000 < uVar11) goto LAB_0064dcb8;
  }
  uVar6 = uVar11 << 2;
LAB_0064dcb8:
  pvVar7 = operator_new__(uVar6);
  __s = __s1;
  while( true ) {
    uVar6 = FUN_00670e74(param_2,pvVar7,__s,uVar11);
    if (uVar11 <= uVar6) {
      uVar11 = uVar6 + 1;
      operator_delete__(pvVar7);
      uVar6 = uVar11 * 4;
      if (0x1fc0000000000000 < uVar11) {
        uVar6 = 0xffffffffffffffff;
      }
      pvVar7 = operator_new__(uVar6);
      uVar6 = FUN_00670e74(param_2,pvVar7,__s,uVar11);
    }
    FUN_0066e774(param_1,pvVar7,uVar6);
    sVar9 = wcslen(__s);
    if (__s + sVar9 == pwVar12) break;
    lVar8 = *param_1;
    __s = __s + sVar9 + 1;
    lVar10 = *(long *)(lVar8 + -0x18);
    uVar6 = lVar10 + 1;
    if ((*(ulong *)(lVar8 + -0x10) < uVar6) || (0 < *(int *)(lVar8 + -8))) {
      FUN_0066e318(param_1,uVar6);
      lVar8 = *param_1;
      lVar10 = *(long *)(lVar8 + -0x18);
    }
    *(undefined4 *)(lVar8 + lVar10 * 4) = 0;
    if ((ulong *)(lVar8 + -0x18) != (ulong *)PTR_DAT_007e6438) {
      *(undefined4 *)(lVar8 + -8) = 0;
      *(ulong *)(lVar8 + -0x18) = uVar6;
      *(undefined4 *)(lVar8 + uVar6 * 4) = 0;
    }
  }
  operator_delete__(pvVar7);
  if (__s1 + -6 != (wchar_t *)PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      wVar4 = __s1[-2];
      __s1[-2] = wVar4 + L'\xffffffff';
    }
    else {
      pwVar12 = __s1 + -2;
      do {
                    /* try { // try from 0064de10 to 0074de17 has its CatchHandler @ 0064de48 */
        wVar4 = *pwVar12;
                    /* try { // try from 0064de18 to 0074de53 has its CatchHandler @ 0064ddf0 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pwVar12,0x10);
        if (bVar2) {
          *pwVar12 = wVar4 + L'\xffffffff';
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (wVar4 < L'\x01') {
      operator_delete(__s1 + -6);
    }
  }
                    /* try { // try from 0064ddf0 to 0074de0f has its CatchHandler @ 0064ddf0
                       catch() { ... } // from try @ 0064ddf0 with catch @ 0064ddf0
                       catch() { ... } // from try @ 0064de18 with catch @ 0064ddf0
                       catch() { ... } // from try @ 0064de60 with catch @ 0064ddf0 */
  return param_1;
}



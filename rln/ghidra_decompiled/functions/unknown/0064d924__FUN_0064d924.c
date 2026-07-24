/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d924
 * Function: FUN_0064d924
 * Signature: undefined FUN_0064d924(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_0064d924(undefined8 param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,
                 wchar_t *param_5)

{
  char cVar1;
  bool bVar2;
  wchar_t *__s;
  uint uVar3;
  size_t *psVar4;
  size_t sVar5;
  wchar_t wVar6;
  wchar_t *__s1;
  size_t sVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  long lVar10;
  undefined1 auStack_8 [8];
  
  if (param_2 == param_3) {
    __s1 = (wchar_t *)(PTR_DAT_007e6438 + 0x18);
  }
  else {
    if ((param_2 == (wchar_t *)0x0) && (param_3 != (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    sVar7 = (long)param_3 - (long)param_2 >> 2;
    psVar4 = (size_t *)FUN_0066c5b8(sVar7,0,auStack_8);
    __s1 = (wchar_t *)(psVar4 + 3);
    if (sVar7 == 1) {
      *(wchar_t *)(psVar4 + 3) = *param_2;
    }
    else {
      wmemcpy(__s1,param_2,sVar7);
    }
    if (psVar4 != (size_t *)PTR_DAT_007e6438) {
      *(undefined4 *)(psVar4 + 2) = 0;
      *psVar4 = sVar7;
      *(undefined4 *)((long)psVar4 + ((long)param_3 - (long)param_2) + 0x18) = 0;
    }
  }
  if (param_4 == param_5) {
    pwVar9 = (wchar_t *)(PTR_DAT_007e6438 + 0x18);
    sVar7 = *(size_t *)PTR_DAT_007e6438;
  }
  else {
    if ((param_4 == (wchar_t *)0x0) && (param_5 != (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    sVar7 = (long)param_5 - (long)param_4 >> 2;
    psVar4 = (size_t *)FUN_0066c5b8(sVar7,0,auStack_8);
    pwVar9 = (wchar_t *)(psVar4 + 3);
    if (sVar7 == 1) {
      *(wchar_t *)(psVar4 + 3) = *param_4;
    }
    else {
      wmemcpy(pwVar9,param_4,sVar7);
    }
    if (psVar4 == (size_t *)PTR_DAT_007e6438) {
      sVar7 = *psVar4;
    }
    else {
      *(undefined4 *)(psVar4 + 2) = 0;
      *psVar4 = sVar7;
      *(undefined4 *)((long)psVar4 + ((long)param_5 - (long)param_4) + 0x18) = 0;
    }
  }
  lVar10 = *(long *)(__s1 + -6);
  uVar3 = FUN_00670e4c(param_1,__s1,pwVar9);
  pwVar8 = __s1;
  __s = pwVar9;
  do {
    if (uVar3 != 0) {
      if (pwVar9 + -6 != (wchar_t *)PTR_DAT_007e6438) {
LAB_0064daf0:
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          wVar6 = pwVar9[-2];
          pwVar9[-2] = wVar6 + L'\xffffffff';
        }
        else {
          pwVar8 = pwVar9 + -2;
          do {
            wVar6 = *pwVar8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pwVar8,0x10);
            if (bVar2) {
              *pwVar8 = wVar6 + L'\xffffffff';
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (wVar6 < L'\x01') {
          operator_delete(pwVar9 + -6);
        }
      }
LAB_0064da90:
      if (__s1 + -6 != (wchar_t *)PTR_DAT_007e6438) {
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          wVar6 = __s1[-2];
          __s1[-2] = wVar6 + L'\xffffffff';
        }
        else {
          pwVar9 = __s1 + -2;
          do {
            wVar6 = *pwVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pwVar9,0x10);
            if (bVar2) {
              *pwVar9 = wVar6 + L'\xffffffff';
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (wVar6 < L'\x01') {
          operator_delete(__s1 + -6);
        }
      }
      return uVar3;
    }
    sVar5 = wcslen(pwVar8);
    pwVar8 = pwVar8 + sVar5;
    sVar5 = wcslen(__s);
    if (__s + sVar5 == pwVar9 + sVar7) {
      uVar3 = (uint)(pwVar8 != __s1 + lVar10);
LAB_0064da80:
      if (pwVar9 + -6 != (wchar_t *)PTR_DAT_007e6438) goto LAB_0064daf0;
      goto LAB_0064da90;
    }
    if (pwVar8 == __s1 + lVar10) {
      uVar3 = 0xffffffff;
      goto LAB_0064da80;
    }
    pwVar8 = pwVar8 + 1;
    __s = __s + sVar5 + 1;
    uVar3 = FUN_00670e4c(param_1,pwVar8,__s);
  } while( true );
}



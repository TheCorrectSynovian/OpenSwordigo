/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066da58
 * Function: FUN_0066da58
 * Signature: undefined FUN_0066da58(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong * FUN_0066da58(ulong *param_1,ulong param_2,ulong param_3,wchar_t *param_4,ulong param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  wchar_t wVar4;
  size_t *psVar5;
  wchar_t *pwVar6;
  ulong uVar7;
  long lVar8;
  wchar_t *pwVar9;
  size_t __n;
  undefined1 auStack_8 [8];
  
  pwVar6 = (wchar_t *)*param_1;
  uVar7 = *(ulong *)(pwVar6 + -6);
  if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2);
  }
  uVar1 = uVar7 - param_2;
  if (param_3 < uVar7 - param_2) {
    uVar1 = param_3;
  }
  if ((0xffffffffffffffe - uVar7) + uVar1 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::replace");
  }
  if (((param_4 < pwVar6) || (pwVar6 + uVar7 < param_4)) || (L'\0' < pwVar6[-2])) {
    FUN_0066c650(param_1,param_2,uVar1,param_5);
    if (param_5 != 0) {
      if (param_5 == 1) {
        *(wchar_t *)(*param_1 + param_2 * 4) = *param_4;
      }
      else {
        wmemcpy((wchar_t *)(*param_1 + param_2 * 4),param_4,param_5);
      }
    }
    return param_1;
  }
  pwVar9 = param_4 + param_5;
  if (pwVar6 + param_2 < pwVar9) {
    if (param_4 < pwVar6 + uVar1 + param_2) {
      if (param_4 == pwVar9) {
        pwVar6 = (wchar_t *)&DAT_007fd318;
      }
      else {
        if ((pwVar9 != (wchar_t *)0x0) && (param_4 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00665330("basic_string::_S_construct null not valid");
        }
        __n = (long)(param_5 * 4) >> 2;
        psVar5 = (size_t *)FUN_0066c5b8(__n,0,auStack_8);
        pwVar6 = (wchar_t *)(psVar5 + 3);
        if (__n == 1) {
          *(wchar_t *)(psVar5 + 3) = *param_4;
        }
        else {
          wmemcpy(pwVar6,param_4,__n);
        }
        if (psVar5 != &DAT_007fd300) {
          *(undefined4 *)(psVar5 + 2) = 0;
          *psVar5 = __n;
          *(undefined4 *)((long)psVar5 + param_5 * 4 + 0x18) = 0;
        }
      }
      FUN_0066c650(param_1,param_2,uVar1,param_5);
      if (param_5 != 0) {
        if (param_5 == 1) {
          *(wchar_t *)(*param_1 + param_2 * 4) = *pwVar6;
        }
        else {
          wmemcpy((wchar_t *)(*param_1 + param_2 * 4),pwVar6,param_5);
        }
      }
      if (pwVar6 + -6 == (wchar_t *)&DAT_007fd300) {
        return param_1;
      }
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        wVar4 = pwVar6[-2];
        pwVar6[-2] = wVar4 + L'\xffffffff';
      }
      else {
        pwVar9 = pwVar6 + -2;
        do {
          wVar4 = *pwVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pwVar9,0x10);
          if (bVar3) {
            *pwVar9 = wVar4 + L'\xffffffff';
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (L'\0' < wVar4) {
        return param_1;
      }
      operator_delete(pwVar6 + -6);
      return param_1;
    }
    lVar8 = (param_5 + ((long)param_4 - (long)pwVar6 >> 2)) - uVar1;
  }
  else {
    lVar8 = (long)param_4 - (long)pwVar6 >> 2;
  }
  FUN_0066c650(param_1,param_2,uVar1,param_5);
  uVar7 = *param_1;
  if (param_5 != 1) {
    wmemcpy((wchar_t *)(uVar7 + param_2 * 4),(wchar_t *)(uVar7 + lVar8 * 4),param_5);
    return param_1;
  }
  *(undefined4 *)(uVar7 + param_2 * 4) = *(undefined4 *)(uVar7 + lVar8 * 4);
  return param_1;
}



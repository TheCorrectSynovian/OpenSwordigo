/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065e85c
 * Function: FUN_0065e85c
 * Signature: undefined FUN_0065e85c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065e85c(long *param_1,wchar_t *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  long lVar5;
  wchar_t *pwVar6;
  size_t __n;
  long lVar7;
  
  if ((char)param_1[0x18] == '\0') {
    lVar7 = 0;
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
                    /* try { // try from 0065e9a4 to 0075ebf7 has its CatchHandler @ 0065e850 */
      iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      if (iVar3 == -1) {
        return 0;
      }
      lVar5 = param_1[0x13];
      param_1[1] = lVar5;
      param_1[2] = lVar5;
      param_1[3] = lVar5;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined1 *)((long)param_1 + 0xaa) = 0;
    }
  }
  else {
    pwVar4 = (wchar_t *)param_1[2];
    if (param_3 < 1) {
      lVar7 = 0;
      pwVar6 = (wchar_t *)param_1[1];
    }
    else {
      pwVar6 = (wchar_t *)param_1[1];
      if (pwVar4 == pwVar6) {
        param_3 = param_3 + -1;
        lVar7 = 1;
        *param_2 = *pwVar4;
        pwVar4 = pwVar4 + 1;
        param_2 = param_2 + 1;
      }
      else {
        lVar7 = 0;
      }
    }
    lVar5 = param_1[0x16] + (ulong)(pwVar6 != pwVar4) * 4;
    param_1[1] = param_1[0x13];
    param_1[0x16] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = param_1[0x17];
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  if ((ulong)param_1[0x14] < 2) {
    lVar5 = 1;
  }
  else {
    lVar5 = param_1[0x14] - 1;
  }
  if (param_3 <= lVar5) {
LAB_0065e9d4:
    lVar5 = FUN_0064af4c(param_1,param_2,param_3);
    return lVar7 + lVar5;
  }
  if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_006652c8();
  }
  cVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
  if ((cVar2 == '\0') || ((uVar1 >> 3 & 1) == 0)) goto LAB_0065e9d4;
                    /* try { // try from 0065e910 to 0075e937 has its CatchHandler @ 0065ebd8 */
  lVar5 = param_1[3] - param_1[2];
  __n = lVar5 >> 2;
  pwVar4 = param_2;
  if (__n != 0) {
    lVar7 = lVar7 + __n;
    param_3 = param_3 - __n;
    pwVar4 = (wchar_t *)((long)param_2 + lVar5);
    wmemcpy(param_2,(wchar_t *)param_1[2],__n);
    param_1[2] = param_1[2] + lVar5;
  }
  while( true ) {
    lVar5 = FUN_0061f714(param_1 + 0xd,pwVar4,param_3);
    if (lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00665ad8("basic_filebuf::xsgetn error reading the file");
    }
    if (lVar5 == 0) break;
    param_3 = param_3 - lVar5;
    lVar7 = lVar7 + lVar5;
    if (param_3 == 0) goto LAB_0065ea50;
    pwVar4 = pwVar4 + lVar5;
  }
  if (param_3 != 0) {
    lVar5 = param_1[0x13];
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = lVar5;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
                    /* try { // try from 0065e97c to 0075e9a3 has its CatchHandler @ 0065ebcc */
    return lVar7;
  }
LAB_0065ea50:
  if ((*(uint *)(param_1 + 0xf) & 0x11) == 0) {
    lVar5 = param_1[0x13];
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = lVar5;
  }
  else {
    lVar5 = param_1[0x13];
    param_1[1] = lVar5;
    param_1[2] = lVar5;
    param_1[3] = lVar5;
    if (1 < (ulong)param_1[0x14]) {
      param_1[5] = lVar5;
      param_1[4] = lVar5;
      param_1[6] = lVar5 + param_1[0x14] * 4 + -4;
      goto LAB_0065ea7c;
    }
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
LAB_0065ea7c:
  *(undefined1 *)((long)param_1 + 0xa9) = 1;
  return lVar7;
}



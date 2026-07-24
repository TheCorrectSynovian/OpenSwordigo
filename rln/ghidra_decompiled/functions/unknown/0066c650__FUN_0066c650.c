/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c650
 * Function: FUN_0066c650
 * Signature: undefined FUN_0066c650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066c650(long *param_1,size_t param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  wchar_t wVar6;
  wchar_t *__s2;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  size_t __n;
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0066c654 to 0076c673 has its CatchHandler @ 0066c550 */
  puVar8 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 0066c62c with catch @ 0066c670 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c78c with catch @ 0066c674
                       catch(type#1 @ 00000000) { ... } // from try @ 0066c874 with catch @ 0066c674
                        */
  uVar2 = (param_4 - param_3) + puVar8[-3];
  __n = (puVar8[-3] - param_2) - param_3;
  if (((ulong)puVar8[-2] < uVar2) || (0 < *(int *)(puVar8 + -1))) {
    puVar5 = (undefined8 *)FUN_0066c5b8(uVar2,puVar8[-2],auStack_8);
    if (param_2 == 0) {
      __s2 = (wchar_t *)*param_1;
    }
    else {
      __s2 = (wchar_t *)*param_1;
      if (param_2 == 1) {
        *(wchar_t *)(puVar5 + 3) = *__s2;
      }
      else {
        wmemcpy((wchar_t *)(puVar5 + 3),__s2,param_2);
        __s2 = (wchar_t *)*param_1;
      }
    }
    if (__n != 0) {
                    /* try { // try from 0066c6e0 to 0076c75f has its CatchHandler @ 0066c820 */
      lVar1 = (param_4 + param_2) * 4 + 0x18;
      if (__n == 1) {
        *(wchar_t *)((long)puVar5 + lVar1) = __s2[param_3 + param_2];
      }
      else {
        wmemcpy((wchar_t *)((long)puVar5 + lVar1),__s2 + param_3 + param_2,__n);
        __s2 = (wchar_t *)*param_1;
      }
    }
    puVar8 = puVar5 + 3;
    if (__s2 + -6 != (wchar_t *)&DAT_007fd300) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        wVar6 = __s2[-2];
        __s2[-2] = wVar6 + L'\xffffffff';
      }
      else {
        pwVar7 = __s2 + -2;
        do {
          wVar6 = *pwVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c6e0 with catch @ 0066c820
                        */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pwVar7,0x10);
          if (bVar4) {
            *pwVar7 = wVar6 + L'\xffffffff';
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c780 with catch @ 0066c82c
                        */
      if (wVar6 < L'\x01') {
        operator_delete(__s2 + -6);
      }
    }
    *param_1 = (long)puVar8;
    if (puVar5 == &DAT_007fd300) {
      return;
    }
  }
  else {
    if ((param_3 != param_4) && (__n != 0)) {
      if (__n == 1) {
        *(undefined4 *)((long)puVar8 + (param_4 + param_2) * 4) =
             *(undefined4 *)((long)puVar8 + (param_3 + param_2) * 4);
      }
      else {
                    /* try { // try from 0066c780 to 0076c78b has its CatchHandler @ 0066c82c */
        wmemmove((wchar_t *)((long)puVar8 + (param_4 + param_2) * 4),
                 (wchar_t *)((long)puVar8 + (param_3 + param_2) * 4),__n);
        puVar8 = (undefined8 *)*param_1;
                    /* try { // try from 0066c78c to 0076c84b has its CatchHandler @ 0066c674 */
      }
    }
    if (puVar8 == (undefined8 *)&DAT_007fd318) {
      return;
    }
  }
  puVar8[-3] = uVar2;
  *(undefined4 *)(puVar8 + -1) = 0;
  *(undefined4 *)((long)puVar8 + uVar2 * 4) = 0;
  return;
}



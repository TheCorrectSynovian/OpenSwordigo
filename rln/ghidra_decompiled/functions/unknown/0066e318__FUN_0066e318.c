/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e318
 * Function: FUN_0066e318
 * Signature: undefined FUN_0066e318(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066e318(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  size_t *psVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  int *piVar6;
  wchar_t *__s2;
  undefined1 auStack_8 [8];
  
  __s2 = (wchar_t *)*param_1;
  if ((param_2 != *(ulong *)(__s2 + -4)) || (L'\0' < __s2[-2])) {
    if (param_2 < *(ulong *)(__s2 + -6)) {
      param_2 = *(ulong *)(__s2 + -6);
    }
    psVar3 = (size_t *)FUN_0066c5b8(param_2,*(ulong *)(__s2 + -4),auStack_8);
    __n = *(size_t *)(__s2 + -6);
                    /* try { // try from 0066e364 to 0076e553 has its CatchHandler @ 0066e364
                       catch() { ... } // from try @ 0066e364 with catch @ 0066e364
                       catch() { ... } // from try @ 0066e560 with catch @ 0066e364
                       catch() { ... } // from try @ 0066e5dc with catch @ 0066e364
                       catch() { ... } // from try @ 0066e660 with catch @ 0066e364
                       catch() { ... } // from try @ 0066e780 with catch @ 0066e364 */
    if (__n != 0) {
      if (__n == 1) {
        *(wchar_t *)(psVar3 + 3) = *__s2;
      }
      else {
        wmemcpy((wchar_t *)(psVar3 + 3),__s2,__n);
        __n = *(size_t *)(__s2 + -6);
      }
    }
    if (psVar3 != &DAT_007fd300) {
      *(undefined4 *)(psVar3 + 2) = 0;
      *psVar3 = __n;
      *(undefined4 *)((long)psVar3 + __n * 4 + 0x18) = 0;
    }
    lVar5 = *param_1;
    if ((undefined8 *)(lVar5 + -0x18) != &DAT_007fd300) {
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar4 = *(int *)(lVar5 + -8);
        *(int *)(lVar5 + -8) = iVar4 + -1;
      }
      else {
        piVar6 = (int *)(lVar5 + -8);
        do {
          iVar4 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar4 < 1) {
        operator_delete((undefined8 *)(lVar5 + -0x18));
      }
    }
    *param_1 = (long)(psVar3 + 3);
  }
  return;
}



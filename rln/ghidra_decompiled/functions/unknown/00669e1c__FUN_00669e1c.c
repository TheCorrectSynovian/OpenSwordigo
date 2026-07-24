/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669e1c
 * Function: FUN_00669e1c
 * Signature: undefined FUN_00669e1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669e1c(long *param_1,ulong param_2,ulong param_3,undefined1 *param_4,ulong param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *__dest;
  undefined1 auStack_8 [8];
  
  puVar8 = (undefined1 *)*param_1;
  uVar10 = *(ulong *)(puVar8 + -0x18);
  if (uVar10 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2);
  }
  uVar2 = uVar10 - param_2;
  if (param_3 < uVar10 - param_2) {
    uVar2 = param_3;
  }
  if ((0x3ffffffffffffff9 - uVar10) + uVar2 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::replace");
  }
  if (((param_4 < puVar8) || (puVar8 + uVar10 < param_4)) || (0 < *(int *)(puVar8 + -8))) {
    FUN_00668cb8(param_1,param_2,uVar2,param_5);
    if (param_5 != 0) {
      if (param_5 == 1) {
        *(undefined1 *)(*param_1 + param_2) = *param_4;
      }
      else {
        memcpy((void *)(*param_1 + param_2),param_4,param_5);
      }
    }
                    /* catch() { ... } // from try @ 00669dc8 with catch @ 00669ea8 */
    return param_1;
  }
  puVar1 = param_4 + param_5;
  if (puVar8 + param_2 < puVar1) {
    if (param_4 < puVar8 + uVar2 + param_2) {
      if (param_4 == puVar1) {
        __dest = (ulong *)&DAT_007fd2f8;
      }
      else {
        if ((puVar1 != (undefined1 *)0x0) && (param_4 == (undefined1 *)0x0)) {
                    /* try { // try from 00669f58 to 00769f63 has its CatchHandler @ 00669fec */
                    /* WARNING: Subroutine does not return */
          FUN_00665330("basic_string::_S_construct null not valid");
        }
        puVar7 = (ulong *)FUN_00668c20(param_5,0,auStack_8);
        __dest = puVar7 + 3;
        if (param_5 == 1) {
          *(undefined1 *)(puVar7 + 3) = *param_4;
        }
        else {
          memcpy(__dest,param_4,param_5);
        }
        if (puVar7 != &DAT_007fd2e0) {
          *(undefined4 *)(puVar7 + 2) = 0;
          *puVar7 = param_5;
          *(undefined1 *)((long)puVar7 + param_5 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00669f40 with catch @ 0066a05c */
        }
      }
      FUN_00668cb8(param_1,param_2,uVar2,param_5);
      if (param_5 != 0) {
        if (param_5 == 1) {
          *(char *)(*param_1 + param_2) = (char)*__dest;
        }
        else {
          memcpy((void *)(*param_1 + param_2),__dest,param_5);
        }
      }
      if (__dest + -3 == &DAT_007fd2e0) {
        return param_1;
      }
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = (int)__dest[-1];
        *(int *)(__dest + -1) = iVar6 + -1;
      }
      else {
                    /* catch() { ... } // from try @ 00669f58 with catch @ 00669fec */
        puVar7 = __dest + -1;
        do {
          iVar6 = (int)*puVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *(int *)puVar7 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar6) {
        return param_1;
      }
      operator_delete(__dest + -3);
      return param_1;
    }
    lVar5 = (param_5 - (long)puVar8) - uVar2;
  }
  else {
    lVar5 = -(long)puVar8;
                    /* try { // try from 00669f64 to 0076a05f has its CatchHandler @ 00669f1c */
  }
  FUN_00668cb8(param_1,param_2,uVar2,param_5);
  lVar9 = *param_1;
                    /* catch() { ... } // from try @ 00669db0 with catch @ 00669f18 */
                    /* try { // try from 00669f1c to 00769f3f has its CatchHandler @ 00669f1c
                       catch() { ... } // from try @ 00669f1c with catch @ 00669f1c
                       catch() { ... } // from try @ 00669f64 with catch @ 00669f1c */
  if (param_5 != 1) {
    memcpy((void *)(lVar9 + param_2),param_4 + lVar9 + lVar5,param_5);
    return param_1;
  }
  *(undefined1 *)(lVar9 + param_2) = param_4[lVar9 + lVar5];
                    /* try { // try from 00669f40 to 00769f53 has its CatchHandler @ 0066a05c */
  return param_1;
}



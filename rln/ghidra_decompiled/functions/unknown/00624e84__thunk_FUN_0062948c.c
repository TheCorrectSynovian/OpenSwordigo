/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624e84
 * Function: thunk_FUN_0062948c
 * Signature: undefined thunk_FUN_0062948c(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_0062948c(long *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  void *__src;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  long *plVar11;
  undefined1 *__dest;
  long lVar12;
  long lVar13;
  char acStack_10 [8];
  undefined1 auStack_8 [8];
  
  FUN_006230e4(acStack_10,param_1,0);
  if (acStack_10[0] == '\0') {
    lVar13 = *param_1;
    uVar3 = 4;
  }
  else {
    lVar13 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
    if (lVar13 < 1) {
      lVar13 = 0x7fffffffffffffff;
    }
    FUN_0063b7dc(auStack_8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
    lVar5 = FUN_0062d354(auStack_8);
    FUN_0063c0c8(auStack_8);
    plVar11 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((byte *)plVar11[2] < (byte *)plVar11[3]) {
      uVar6 = (ulong)*(byte *)plVar11[2];
    }
    else {
      uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    lVar12 = 0;
LAB_00629530:
    uVar3 = (uint)uVar6;
    __dest = param_2;
    if (lVar12 < lVar13 + -1) {
      while( true ) {
        uVar3 = (uint)uVar6;
        param_2 = __dest;
        if (uVar3 == 0xffffffff) goto LAB_0062965c;
        lVar10 = *(long *)(lVar5 + 0x30);
        if ((*(byte *)(lVar10 + (uVar6 & 0xff)) >> 3 & 1) != 0) goto LAB_00629554;
        __src = (void *)plVar11[2];
        lVar9 = (lVar13 - lVar12) + -1;
        if (plVar11[3] - (long)__src < lVar9) {
          lVar9 = plVar11[3] - (long)__src;
        }
        if (lVar9 < 2) {
          *__dest = (char)uVar6;
          param_2 = __dest + 1;
          lVar12 = lVar12 + 1;
          pbVar8 = (byte *)plVar11[3];
          if ((byte *)plVar11[2] < pbVar8) {
            pbVar7 = (byte *)plVar11[2] + 1;
            plVar11[2] = (long)pbVar7;
          }
          else {
            iVar4 = (**(code **)(*plVar11 + 0x50))(plVar11);
            uVar6 = 0xffffffff;
            if (iVar4 == -1) goto LAB_00629530;
            pbVar7 = (byte *)plVar11[2];
            pbVar8 = (byte *)plVar11[3];
          }
          if (pbVar7 < pbVar8) {
            uVar6 = (ulong)*pbVar7;
          }
          else {
            uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
          }
          goto LAB_00629530;
        }
        pbVar8 = (byte *)((long)__src + 1);
        pbVar7 = (byte *)((long)__src + lVar9);
        if (pbVar8 < pbVar7) {
          bVar2 = *(byte *)(lVar10 + (ulong)*(byte *)((long)__src + 1));
          while (((bVar2 >> 3 & 1) == 0 && (pbVar1 = pbVar8 + 1, pbVar8 = pbVar7, pbVar1 != pbVar7))
                ) {
            bVar2 = *(byte *)(lVar10 + (ulong)*pbVar1);
            pbVar8 = pbVar1;
          }
        }
        __n = (long)pbVar8 - (long)__src;
        param_2 = __dest + __n;
        lVar12 = lVar12 + __n;
        memcpy(__dest,__src,__n);
        lVar10 = plVar11[2];
        uVar6 = lVar10 + __n;
        plVar11[2] = uVar6;
        if ((ulong)plVar11[3] <= uVar6) break;
        bVar2 = *(byte *)(lVar10 + __n);
        uVar6 = (ulong)bVar2;
        uVar3 = (uint)bVar2;
        __dest = param_2;
        if (lVar13 + -1 <= lVar12) goto LAB_0062965c;
      }
      uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11);
      goto LAB_00629530;
    }
LAB_0062965c:
    if (uVar3 == 0xffffffff) {
      *param_2 = 0;
      lVar13 = *param_1;
      uVar3 = 6;
      if (lVar12 != 0) {
        uVar3 = 2;
      }
      *(undefined8 *)((long)param_1 + *(long *)(lVar13 + -0x18) + 0x10) = 0;
    }
    else {
LAB_00629554:
      *param_2 = 0;
      lVar13 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar13 + -0x18) + 0x10) = 0;
      if (lVar12 != 0) {
        return param_1;
      }
      uVar3 = 4;
    }
  }
  lVar13 = (long)param_1 + *(long *)(lVar13 + -0x18);
  FUN_00620c14(lVar13,uVar3 | *(uint *)(lVar13 + 0x20));
  return param_1;
}



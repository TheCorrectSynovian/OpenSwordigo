/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00629bc0
 * Function: FUN_00629bc0
 * Signature: undefined FUN_00629bc0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00629bc0(long *param_1,long *param_2,byte param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t __n;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  void *__s;
  char local_8 [8];
  
                    /* catch() { ... } // from try @ 006298ac with catch @ 00629bc0 */
                    /* try { // try from 00629bec to 00729cbf has its CatchHandler @ 00629844 */
                    /* catch() { ... } // from try @ 00629b88 with catch @ 00629bf0
                       catch() { ... } // from try @ 00629bb4 with catch @ 00629bf0 */
                    /* catch() { ... } // from try @ 0062987c with catch @ 00629bf4 */
  FUN_006230e4(local_8,param_1,1);
                    /* catch() { ... } // from try @ 006299a8 with catch @ 00629bf8
                       catch() { ... } // from try @ 006299f8 with catch @ 00629bf8 */
  if (local_8[0] != '\0') {
                    /* catch() { ... } // from try @ 00629890 with catch @ 00629c54
                       catch() { ... } // from try @ 006298e0 with catch @ 00629c54 */
    FUN_00668cb8(param_2,0,*(undefined8 *)(*param_2 + -0x18),0);
    plVar11 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((byte *)plVar11[2] < (byte *)plVar11[3]) {
      uVar3 = (uint)*(byte *)plVar11[2];
    }
    else {
      uVar3 = (**(code **)(*plVar11 + 0x48))(plVar11);
    }
    uVar12 = 0;
    do {
      while( true ) {
        uVar4 = uVar3;
        if ((uVar4 == 0xffffffff) || (param_3 == uVar4)) {
          if (uVar4 != 0xffffffff) goto LAB_00629db4;
                    /* try { // try from 00629dd4 to 00729dd7 has its CatchHandler @ 00629f98 */
                    /* try { // try from 00629dd8 to 00729f7f has its CatchHandler @ 00629cc0 */
          uVar3 = 6;
          if (uVar12 != 0) {
            uVar3 = 2;
          }
          goto LAB_00629c04;
        }
        __s = (void *)plVar11[2];
        __n = 0x3ffffffffffffff9 - uVar12;
        if (plVar11[3] - (long)__s < (long)(0x3ffffffffffffff9 - uVar12)) {
          __n = plVar11[3] - (long)__s;
        }
        if ((long)__n < 2) break;
        pvVar6 = memchr(__s,(uint)param_3,__n);
        sVar2 = (long)pvVar6 - (long)__s;
        if (pvVar6 == (void *)0x0) {
          sVar2 = __n;
        }
        FUN_006677d4(param_2,__s,sVar2);
        lVar7 = plVar11[2];
        uVar12 = uVar12 + sVar2;
                    /* try { // try from 00629cc0 to 00729d73 has its CatchHandler @ 00629cc0
                       catch() { ... } // from try @ 00629cc0 with catch @ 00629cc0
                       catch() { ... } // from try @ 00629dd8 with catch @ 00629cc0
                       catch() { ... } // from try @ 00629f88 with catch @ 00629cc0 */
        uVar1 = lVar7 + sVar2;
        plVar11[2] = uVar1;
        if (uVar1 < (ulong)plVar11[3]) {
          uVar4 = (uint)*(byte *)(lVar7 + sVar2);
        }
        else {
LAB_00629de4:
          uVar4 = (**(code **)(*plVar11 + 0x48))(plVar11);
        }
LAB_00629cd8:
        uVar3 = uVar4;
        if (0x3ffffffffffffff8 < uVar12) goto LAB_00629d9c;
      }
      lVar9 = *param_2;
      lVar7 = *(long *)(lVar9 + -0x18);
      uVar1 = lVar7 + 1;
      if ((*(ulong *)(lVar9 + -0x10) < uVar1) || (0 < *(int *)(lVar9 + -8))) {
        FUN_00667088(param_2,uVar1);
        lVar9 = *param_2;
        lVar7 = *(long *)(lVar9 + -0x18);
      }
      *(char *)(lVar9 + lVar7) = (char)uVar4;
      lVar7 = *param_2;
      if ((undefined *)(lVar7 + -0x18) != PTR_DAT_007e5de8) {
        *(undefined4 *)(lVar7 + -8) = 0;
        *(ulong *)(lVar7 + -0x18) = uVar1;
        *(undefined1 *)(lVar7 + uVar1) = 0;
      }
      uVar12 = uVar12 + 1;
                    /* try { // try from 00629d74 to 00729d87 has its CatchHandler @ 00629f90 */
      pbVar10 = (byte *)plVar11[3];
      if ((byte *)plVar11[2] < pbVar10) {
        pbVar8 = (byte *)plVar11[2] + 1;
        plVar11[2] = (long)pbVar8;
      }
      else {
        iVar5 = (**(code **)(*plVar11 + 0x50))(plVar11);
        uVar4 = 0xffffffff;
        if (iVar5 == -1) goto LAB_00629cd8;
        pbVar8 = (byte *)plVar11[2];
        pbVar10 = (byte *)plVar11[3];
      }
                    /* try { // try from 00629d88 to 00729d9b has its CatchHandler @ 00629f98 */
      if (pbVar10 <= pbVar8) goto LAB_00629de4;
      uVar4 = (uint)*pbVar8;
      uVar3 = (uint)*pbVar8;
    } while (uVar12 < 0x3ffffffffffffff9);
LAB_00629d9c:
                    /* try { // try from 00629da0 to 00729db3 has its CatchHandler @ 00629f5c */
    if (uVar4 == 0xffffffff) {
      uVar3 = 2;
      goto LAB_00629c04;
    }
LAB_00629db4:
    if (param_3 != uVar4) {
      uVar3 = 4;
      goto LAB_00629c04;
    }
    if ((ulong)plVar11[2] < (ulong)plVar11[3]) {
      plVar11[2] = plVar11[2] + 1;
    }
    else {
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    if (uVar12 != 0xffffffffffffffff) {
      return param_1;
    }
  }
  uVar3 = 4;
LAB_00629c04:
  lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar7,uVar3 | *(uint *)(lVar7 + 0x20));
  return param_1;
}



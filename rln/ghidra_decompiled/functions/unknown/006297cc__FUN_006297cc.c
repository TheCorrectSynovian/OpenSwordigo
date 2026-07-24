/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006297cc
 * Function: FUN_006297cc
 * Signature: undefined FUN_006297cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006297cc(long *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  char local_10 [8];
  undefined1 auStack_8 [8];
  
  FUN_006230e4(local_10,param_1,0);
  if (local_10[0] == '\0') {
    lVar10 = *param_1;
    uVar4 = 4;
  }
  else {
    FUN_00668cb8(param_2,0,*(undefined8 *)(*param_2 + -0x18),0);
    uVar15 = *(ulong *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10);
    if ((long)uVar15 < 1) {
      uVar15 = 0x3ffffffffffffff9;
    }
                    /* try { // try from 0062987c to 0072988f has its CatchHandler @ 00629bf4 */
    FUN_0063b7dc(auStack_8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
    lVar10 = FUN_0062d354(auStack_8);
                    /* try { // try from 00629890 to 007298a3 has its CatchHandler @ 00629c54 */
    FUN_0063c0c8(auStack_8);
    plVar14 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
                    /* try { // try from 006298ac to 007298bf has its CatchHandler @ 00629bc0 */
    if ((byte *)plVar14[2] < (byte *)plVar14[3]) {
      uVar6 = (ulong)*(byte *)plVar14[2];
    }
    else {
      uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14);
      uVar13 = 0;
      if ((int)uVar6 == -1) {
LAB_00629a88:
        lVar10 = *param_1;
        uVar4 = 6;
        if (uVar13 != 0) {
          uVar4 = 2;
        }
        *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = 0;
        goto LAB_00629810;
      }
    }
    lVar11 = *(long *)(lVar10 + 0x30);
    uVar13 = 0;
    bVar3 = *(byte *)(lVar11 + (uVar6 & 0xff));
    while ((bVar3 >> 3 & 1) == 0) {
      lVar8 = plVar14[2];
                    /* try { // try from 006298e0 to 007298e3 has its CatchHandler @ 00629c54 */
                    /* try { // try from 006298e4 to 00729943 has its CatchHandler @ 00629844 */
      lVar12 = uVar15 - uVar13;
      if (plVar14[3] - lVar8 < (long)(uVar15 - uVar13)) {
        lVar12 = plVar14[3] - lVar8;
      }
      if (lVar12 < 2) {
        lVar12 = *param_2;
        lVar11 = *(long *)(lVar12 + -0x18);
                    /* try { // try from 006299f8 to 007299fb has its CatchHandler @ 00629bf8 */
        uVar2 = lVar11 + 1;
                    /* try { // try from 006299fc to 00729b87 has its CatchHandler @ 00629844 */
        if ((*(ulong *)(lVar12 + -0x10) < uVar2) || (0 < *(int *)(lVar12 + -8))) {
          FUN_00667088(param_2,uVar2);
          lVar12 = *param_2;
          lVar11 = *(long *)(lVar12 + -0x18);
        }
        *(char *)(lVar12 + lVar11) = (char)uVar6;
        lVar11 = *param_2;
        if ((undefined *)(lVar11 + -0x18) != PTR_DAT_007e5de8) {
          *(undefined4 *)(lVar11 + -8) = 0;
          *(ulong *)(lVar11 + -0x18) = uVar2;
          *(undefined1 *)(lVar11 + uVar2) = 0;
        }
        uVar13 = uVar13 + 1;
        pbVar9 = (byte *)plVar14[3];
        if ((byte *)plVar14[2] < pbVar9) {
          pbVar7 = (byte *)plVar14[2] + 1;
          plVar14[2] = (long)pbVar7;
        }
        else {
          iVar5 = (**(code **)(*plVar14 + 0x50))(plVar14);
          if (iVar5 == -1) goto LAB_00629a88;
          pbVar7 = (byte *)plVar14[2];
          pbVar9 = (byte *)plVar14[3];
        }
        if (pbVar7 < pbVar9) {
          bVar3 = *pbVar7;
          goto LAB_00629948;
        }
LAB_00629a68:
        uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14);
        uVar4 = (uint)uVar6;
        if (uVar15 <= uVar13) {
LAB_00629998:
          if (uVar4 != 0xffffffff) {
                    /* try { // try from 006299c4 to 007299d7 has its CatchHandler @ 00629b64 */
            *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) = 0;
            return param_1;
          }
          lVar10 = *param_1;
          uVar4 = 2;
                    /* try { // try from 006299a8 to 007299bb has its CatchHandler @ 00629bf8 */
          *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = 0;
          goto LAB_00629810;
        }
        if (uVar4 == 0xffffffff) goto LAB_00629a88;
      }
      else {
        pbVar9 = (byte *)(lVar8 + 1);
        pbVar7 = (byte *)(lVar8 + lVar12);
        if (pbVar9 < pbVar7) {
          bVar3 = *(byte *)(lVar11 + (ulong)*(byte *)(lVar8 + 1));
          while (((bVar3 >> 3 & 1) == 0 && (pbVar1 = pbVar9 + 1, pbVar9 = pbVar7, pbVar1 != pbVar7))
                ) {
            bVar3 = *(byte *)(lVar11 + (ulong)*pbVar1);
            pbVar9 = pbVar1;
          }
        }
        lVar12 = (long)pbVar9 - lVar8;
        FUN_006677d4(param_2,lVar8,lVar12);
        lVar11 = plVar14[2];
        uVar13 = uVar13 + lVar12;
        uVar6 = lVar11 + lVar12;
        plVar14[2] = uVar6;
        if ((ulong)plVar14[3] <= uVar6) goto LAB_00629a68;
                    /* try { // try from 00629944 to 00729953 has its CatchHandler @ 00629b98 */
        bVar3 = *(byte *)(lVar11 + lVar12);
LAB_00629948:
        uVar6 = (ulong)bVar3;
        uVar4 = (uint)bVar3;
        if (uVar15 <= uVar13) goto LAB_00629998;
      }
                    /* try { // try from 00629954 to 00729993 has its CatchHandler @ 00629844 */
      lVar11 = *(long *)(lVar10 + 0x30);
      bVar3 = *(byte *)(lVar11 + (uVar6 & 0xff));
    }
    lVar10 = *param_1;
    *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = 0;
    if (uVar13 != 0) {
      return param_1;
    }
    uVar4 = 4;
  }
LAB_00629810:
  lVar10 = (long)param_1 + *(long *)(lVar10 + -0x18);
  FUN_00620c14(lVar10,uVar4 | *(uint *)(lVar10 + 0x20));
                    /* try { // try from 00629838 to 00729843 has its CatchHandler @ 006296c0 */
                    /* catch() { ... } // from try @ 00629764 with catch @ 00629840 */
                    /* try { // try from 00629844 to 0072987b has its CatchHandler @ 00629844
                       catch() { ... } // from try @ 00629844 with catch @ 00629844
                       catch() { ... } // from try @ 006298e4 with catch @ 00629844
                       catch() { ... } // from try @ 00629954 with catch @ 00629844
                       catch() { ... } // from try @ 006299fc with catch @ 00629844
                       catch() { ... } // from try @ 00629b90 with catch @ 00629844
                       catch() { ... } // from try @ 00629bec with catch @ 00629844 */
  return param_1;
}



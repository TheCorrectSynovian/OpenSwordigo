/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ebcf4
 * Function: FUN_005ebcf4
 * Signature: undefined FUN_005ebcf4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005ebcf4(long param_1,long *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  double *pdVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  
                    /* catch() { ... } // from try @ 005ebc98 with catch @ 005ebcf8 */
                    /* try { // try from 005ebd18 to 006ebd3f has its CatchHandler @ 005ebd48 */
  if ((int)param_2[1] != 6) {
                    /* try { // try from 005ebd40 to 006ebd4b has its CatchHandler @ 005ebc2c */
    plVar5 = (long *)FUN_005f4ed4(param_1,param_2,0x10);
                    /* catch() { ... } // from try @ 005ebd18 with catch @ 005ebd48 */
    lVar8 = *(long *)(param_1 + 0x40);
    if ((int)plVar5[1] != 6) {
      FUN_005eb03c(param_1,param_2,"call");
    }
    plVar9 = *(long **)(param_1 + 0x10);
    if (param_2 < plVar9) {
      do {
        plVar10 = plVar9 + -2;
        *plVar9 = *plVar10;
        *(int *)(plVar9 + 1) = (int)plVar9[-1];
        plVar9 = plVar10;
      } while (param_2 < plVar10);
      plVar9 = *(long **)(param_1 + 0x10);
    }
    if (*(long *)(param_1 + 0x38) - (long)plVar9 < 0x11) {
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 < 1) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = iVar4 << 1;
      }
      FUN_005eba24(param_1,iVar4);
    }
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    param_2 = (long *)((long)param_2 + (*(long *)(param_1 + 0x40) - lVar8));
    *param_2 = *plVar5;
    *(int *)(param_2 + 1) = (int)plVar5[1];
  }
  lVar8 = *param_2;
  plVar5 = (long *)(param_1 + 0x40);
  lVar13 = *plVar5;
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = *(undefined8 *)(param_1 + 0x30);
  if (*(char *)(lVar8 + 10) != '\0') {
    if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x10) < 0x141) {
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 < 0x14) {
        iVar4 = iVar4 + 0x14;
      }
      else {
        iVar4 = iVar4 << 1;
      }
      FUN_005eba24(param_1,iVar4);
    }
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != *(long *)(param_1 + 0x48)) {
LAB_005ec040:
      lVar20 = lVar8 + 0x28;
      *(long *)(param_1 + 0x28) = lVar20;
      lVar18 = (long)param_2 + (*plVar5 - lVar13);
      lVar13 = lVar18 + 0x10;
      *(long *)(lVar8 + 0x28) = lVar13;
      *(long *)(lVar8 + 0x30) = lVar18;
      lVar18 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x18) = lVar13;
      *(undefined4 *)(lVar8 + 0x48) = param_3;
      *(long *)(lVar8 + 0x38) = lVar18 + 0x140;
      if ((*(byte *)(param_1 + 100) & 1) != 0) {
        FUN_005ebbd4(param_1,0,0xffffffff);
        lVar20 = *(long *)(param_1 + 0x28);
      }
                    /* try { // try from 005ec094 to 006ec0e3 has its CatchHandler @ 005ec094
                       catch() { ... } // from try @ 005ec094 with catch @ 005ec094
                       catch() { ... } // from try @ 005ecad4 with catch @ 005ec094
                       catch() { ... } // from try @ 005ed4d8 with catch @ 005ec094 */
      iVar4 = (**(code **)(**(long **)(lVar20 + 8) + 0x20))(param_1);
      if (iVar4 < 0) {
        return 2;
      }
      FUN_005ec3a4(param_1,*(long *)(param_1 + 0x10) + (long)iVar4 * -0x10);
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    lVar8 = (long)iVar4;
    if (iVar4 < 0x4e21) {
      lVar18 = *(long *)(param_1 + 0x50);
      lVar20 = lVar8 * 2;
      iVar12 = (int)lVar20;
      if (iVar4 < 0) {
        lVar8 = FUN_005eede0(param_1);
        lVar20 = (long)iVar12;
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ebefc with catch @ 005ebeb4
                       catch(type#1 @ 00000000) { ... } // from try @ 005ebfd0 with catch @ 005ebeb4
                        */
        lVar8 = FUN_005eed74(param_1,lVar18,lVar8 * 0x28,lVar8 * 0x50);
      }
      *(long *)(param_1 + 0x48) = lVar8 + lVar20 * 0x28 + -0x28;
      *(long *)(param_1 + 0x50) = lVar8;
      lVar8 = lVar8 + (*(long *)(param_1 + 0x28) - lVar18);
      *(int *)(param_1 + 0x5c) = iVar12;
      *(long *)(param_1 + 0x28) = lVar8;
      if (10000 < iVar4) {
        FUN_005eb320(param_1,"stack overflow");
        lVar8 = *(long *)(param_1 + 0x28);
      }
      goto LAB_005ec040;
    }
    goto LAB_005ec398;
  }
  lVar8 = *(long *)(lVar8 + 0x20);
  bVar1 = *(byte *)(lVar8 + 0x73);
  if (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x10) <= (long)((ulong)bVar1 * 0x10)) {
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < (int)(uint)bVar1) {
      iVar4 = iVar4 + (uint)bVar1;
    }
    else {
      iVar4 = iVar4 << 1;
    }
    FUN_005eba24(param_1,iVar4);
  }
  bVar1 = *(byte *)(lVar8 + 0x72);
  lVar20 = (long)param_2 + (*plVar5 - lVar13);
  if (bVar1 == 0) {
    puVar21 = (undefined8 *)(lVar20 + 0x10);
    if (puVar21 + (ulong)*(byte *)(lVar8 + 0x71) * 2 < *(undefined8 **)(param_1 + 0x10)) {
      *(undefined8 **)(param_1 + 0x10) = puVar21 + (ulong)*(byte *)(lVar8 + 0x71) * 2;
    }
  }
  else {
    puVar21 = *(undefined8 **)(param_1 + 0x10);
    bVar2 = *(byte *)(lVar8 + 0x71);
                    /* try { // try from 005ebef0 to 006ebefb has its CatchHandler @ 005ebf44 */
    iVar4 = (int)((ulong)((long)puVar21 - lVar20) >> 4);
    uVar3 = (uint)bVar2 - iVar4;
    uVar16 = iVar4 - 1;
                    /* try { // try from 005ebefc to 006ebfc3 has its CatchHandler @ 005ebeb4 */
    uVar23 = (uint)bVar2;
    uVar24 = (uint)bVar2;
    if (iVar4 <= (int)(uint)bVar2) {
      uVar22 = (ulong)uVar3 + 1;
      puVar15 = puVar21;
      if (uVar22 < 2) {
LAB_005ebf4c:
        iVar12 = uVar24 - uVar16;
        puVar15 = puVar15 + 1;
        do {
          iVar12 = iVar12 + -1;
          *(undefined4 *)puVar15 = 0;
          puVar15 = puVar15 + 2;
        } while (iVar12 != 0);
      }
      else {
        uVar3 = ~uVar3 & 1;
        lVar20 = uVar22 - uVar3;
        puVar15 = puVar21 + lVar20 * 2;
        uVar16 = uVar16 + (int)lVar20;
        puVar11 = puVar21 + 3;
        do {
          *(undefined4 *)(puVar11 + -2) = 0;
          *(undefined4 *)puVar11 = 0;
          lVar20 = lVar20 + -2;
          puVar11 = puVar11 + 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ebef0 with catch @ 005ebf44
                        */
        } while (lVar20 != 0);
        if (uVar3 != 0) goto LAB_005ebf4c;
      }
      puVar21 = puVar21 + (ulong)(uVar24 - iVar4) * 2 + 2;
      *(undefined8 **)(param_1 + 0x10) = puVar21;
      uVar16 = uVar23;
    }
    if ((bVar1 >> 2 & 1) == 0) {
      lVar20 = 0;
    }
    else {
      uVar3 = uVar16 - uVar23;
      if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <=
          *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)) {
        FUN_005edcb0(param_1);
        puVar21 = *(undefined8 **)(param_1 + 0x10);
      }
                    /* try { // try from 005ebfc4 to 006ebfc7 has its CatchHandler @ 005ebfc8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ebfc4 with catch @ 005ebfc8
                        */
      bVar1 = *(byte *)(lVar8 + 0x73);
                    /* try { // try from 005ebfcc to 006ebfcf has its CatchHandler @ 005ebfd8 */
                    /* try { // try from 005ebfd0 to 006ebfdb has its CatchHandler @ 005ebeb4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ebfcc with catch @ 005ebfd8
                        */
      if (*(long *)(param_1 + 0x38) - (long)puVar21 <= (long)((ulong)bVar1 * 0x10)) {
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar4 < (int)(uint)bVar1) {
          iVar4 = iVar4 + (uint)bVar1;
        }
        else {
          iVar4 = iVar4 << 1;
        }
        FUN_005eba24(param_1,iVar4);
      }
      lVar20 = FUN_005f3db4(param_1,uVar3,1);
                    /* try { // try from 005ec0e4 to 006ec0ef has its CatchHandler @ 005ed2c4 */
      if (0 < (int)uVar3) {
                    /* try { // try from 005ec0f0 to 006ec0f7 has its CatchHandler @ 005ed128 */
        uVar22 = 0;
                    /* try { // try from 005ec0f8 to 006ec15f has its CatchHandler @ 005ed2c4 */
        lVar18 = (ulong)bVar2 * 0x10 + (long)(int)uVar16 * -0x10;
        do {
          lVar19 = *(long *)(param_1 + 0x10);
          uVar22 = uVar22 + 1;
          puVar15 = (undefined8 *)FUN_005f49e8(param_1,lVar20,uVar22 & 0xffffffff);
          puVar21 = (undefined8 *)(lVar19 + lVar18);
          lVar18 = lVar18 + 0x10;
          *puVar15 = *puVar21;
          *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar21 + 1);
        } while (uVar3 != uVar22);
      }
      uVar6 = FUN_005f356c(param_1,"n",1);
      pdVar7 = (double *)FUN_005f4adc(param_1,lVar20,uVar6);
                    /* try { // try from 005ec164 to 006ec16b has its CatchHandler @ 005ed124 */
                    /* try { // try from 005ec16c to 006ec17f has its CatchHandler @ 005ed120 */
      *pdVar7 = (double)(int)uVar3;
      *(undefined4 *)(pdVar7 + 1) = 3;
      puVar21 = *(undefined8 **)(param_1 + 0x10);
    }
    if (uVar23 != 0) {
                    /* try { // try from 005ec180 to 006ec193 has its CatchHandler @ 005ed154 */
      *(undefined8 **)(param_1 + 0x10) = puVar21 + 2;
      lVar18 = (long)(int)uVar16;
                    /* try { // try from 005ec194 to 006ec1a3 has its CatchHandler @ 005ed0f0 */
      *puVar21 = puVar21[(long)(int)uVar16 * -2];
      *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(puVar21 + lVar18 * -2 + 1);
      *(undefined4 *)(puVar21 + lVar18 * -2 + 1) = 0;
      if (uVar24 != 1) {
                    /* try { // try from 005ec1c4 to 006ec1c7 has its CatchHandler @ 005ed154 */
        lVar19 = (ulong)bVar2 - 1;
        puVar15 = puVar21 + (1 - lVar18) * 2 + 1;
        do {
          puVar11 = *(undefined8 **)(param_1 + 0x10);
          lVar19 = lVar19 + -1;
          *(undefined8 **)(param_1 + 0x10) = puVar11 + 2;
          *puVar11 = puVar15[-1];
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)puVar15;
          *(undefined4 *)puVar15 = 0;
          puVar15 = puVar15 + 2;
        } while (lVar19 != 0);
      }
    }
    if (lVar20 != 0) {
      plVar9 = *(long **)(param_1 + 0x10);
      *(long **)(param_1 + 0x10) = plVar9 + 2;
      *plVar9 = lVar20;
                    /* try { // try from 005ec208 to 006ec213 has its CatchHandler @ 005ed0a0 */
      *(undefined4 *)(plVar9 + 1) = 5;
    }
    lVar20 = (long)param_2 + (*plVar5 - lVar13);
  }
  lVar13 = *(long *)(param_1 + 0x28);
  if (lVar13 == *(long *)(param_1 + 0x48)) {
    iVar4 = *(int *)(param_1 + 0x5c);
    lVar13 = (long)iVar4;
    if (20000 < iVar4) {
LAB_005ec398:
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(param_1,5);
    }
                    /* try { // try from 005ec234 to 006ec25b has its CatchHandler @ 005ecdac */
    lVar19 = *(long *)(param_1 + 0x50);
    lVar18 = lVar13 * 2;
    iVar12 = (int)lVar18;
    if (iVar4 < 0) {
                    /* try { // try from 005ec264 to 006ec277 has its CatchHandler @ 005ed09c */
      lVar13 = FUN_005eede0(param_1);
      lVar18 = (long)iVar12;
    }
    else {
      lVar13 = FUN_005eed74(param_1,lVar19,lVar13 * 0x28,lVar13 * 0x50);
                    /* try { // try from 005ec25c to 006ec263 has its CatchHandler @ 005ed150 */
    }
                    /* try { // try from 005ec278 to 006ec28b has its CatchHandler @ 005ed03c */
    *(long *)(param_1 + 0x48) = lVar13 + lVar18 * 0x28 + -0x28;
    *(long *)(param_1 + 0x50) = lVar13;
    lVar13 = lVar13 + (*(long *)(param_1 + 0x28) - lVar19);
    *(int *)(param_1 + 0x5c) = iVar12;
    *(long *)(param_1 + 0x28) = lVar13;
                    /* try { // try from 005ec29c to 006ec2a3 has its CatchHandler @ 005ed140 */
    if (10000 < iVar4) {
                    /* try { // try from 005ec2a4 to 006ec2b7 has its CatchHandler @ 005ed038 */
      FUN_005eb320(param_1,"stack overflow");
      lVar13 = *(long *)(param_1 + 0x28);
    }
  }
                    /* try { // try from 005ec2b8 to 006ec2cb has its CatchHandler @ 005ecfcc */
  *(long *)(param_1 + 0x28) = lVar13 + 0x28;
  *(undefined8 **)(lVar13 + 0x28) = puVar21;
  *(long *)(lVar13 + 0x30) = lVar20;
  *(undefined8 **)(param_1 + 0x18) = puVar21;
  puVar21 = puVar21 + (ulong)*(byte *)(lVar8 + 0x73) * 2;
  *(undefined8 **)(lVar13 + 0x38) = puVar21;
  lVar8 = *(long *)(lVar8 + 0x18);
  *(long *)(param_1 + 0x30) = lVar8;
  *(undefined4 *)(lVar13 + 0x48) = param_3;
  *(undefined4 *)(lVar13 + 0x4c) = 0;
  puVar15 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005ec2e0 to 006ec2ef has its CatchHandler @ 005ed264 */
  if (puVar15 < puVar21) {
    uVar22 = ((long)puVar21 + ~(ulong)puVar15 >> 4) + 1;
    puVar11 = puVar15;
    if (1 < uVar22) {
      uVar14 = uVar22 & 0x1ffffffffffffffe;
      puVar11 = puVar15 + uVar14 * 2;
      puVar15 = puVar15 + 3;
      uVar17 = uVar14;
      do {
        *(undefined4 *)(puVar15 + -2) = 0;
        *(undefined4 *)puVar15 = 0;
        uVar17 = uVar17 - 2;
        puVar15 = puVar15 + 4;
      } while (uVar17 != 0);
                    /* try { // try from 005ec328 to 006ec34f has its CatchHandler @ 005ecd5c */
      if (uVar22 == uVar14) goto LAB_005ec33c;
    }
    do {
      *(undefined4 *)(puVar11 + 1) = 0;
      puVar11 = puVar11 + 2;
    } while (puVar11 < puVar21);
  }
LAB_005ec33c:
  *(undefined8 **)(param_1 + 0x10) = puVar21;
  if ((*(byte *)(param_1 + 100) & 1) != 0) {
    *(long *)(param_1 + 0x30) = lVar8 + 4;
    FUN_005ebbd4(param_1,0,0xffffffff);
                    /* try { // try from 005ec370 to 006ec397 has its CatchHandler @ 005ed264 */
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -4;
  }
  return 0;
}



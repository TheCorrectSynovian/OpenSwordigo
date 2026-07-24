/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d5d4
 * Function: FUN_0062d5d4
 * Signature: undefined FUN_0062d5d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_0062d5d4(undefined8 param_1,long *param_2,ulong param_3,long *param_4,uint param_5,int *param_6,
            int param_7,int param_8,ulong param_9,long param_10,uint *param_11)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
                    /* try { // try from 0062d61c to 0072d62f has its CatchHandler @ 0062e5bc */
  plVar4 = (long *)FUN_0062d354(param_10 + 0xd0);
  uVar9 = param_3 & 0xffffffff;
                    /* try { // try from 0062d630 to 0072d63b has its CatchHandler @ 0062e57c */
  if (param_9 == 2) {
    iVar10 = 10;
  }
  else {
    iVar10 = 1000;
    if (param_9 != 4) {
      iVar10 = 1;
    }
  }
  iVar8 = 0;
  uVar7 = 0;
  do {
    if (param_2 == (long *)0x0) {
LAB_0062d6f8:
      param_2 = (long *)0x0;
      if (param_4 == (long *)0x0) {
LAB_0062d67c:
                    /* try { // try from 0062d67c to 0072d687 has its CatchHandler @ 0062e52c */
        if (param_9 == uVar7) {
          *param_6 = iVar8;
        }
        else if ((uVar7 == 2) && (param_9 == 4)) {
          *param_6 = iVar8 + -100;
        }
        else {
          *param_11 = *param_11 | 4;
                    /* try { // try from 0062d870 to 0072d897 has its CatchHandler @ 0062e2e4 */
        }
                    /* try { // try from 0062d6a8 to 0072d6cf has its CatchHandler @ 0062e338 */
        auVar12._8_8_ = param_3 & 0xffffffff00000000 | uVar9;
        auVar12._0_8_ = param_2;
        return auVar12;
      }
      iVar11 = 1;
joined_r0x0062d70c:
      iVar2 = 0;
      if (param_5 == 0xffffffff) {
        if ((byte *)param_4[2] < (byte *)param_4[3]) {
          param_5 = (uint)*(byte *)param_4[2];
        }
        else {
          param_5 = (**(code **)(*param_4 + 0x48))(param_4);
          if (param_5 == 0xffffffff) {
            iVar2 = 1;
            param_4 = (long *)0x0;
            goto LAB_0062d66c;
          }
        }
        iVar2 = 0;
      }
LAB_0062d66c:
      if ((iVar11 == iVar2) || (param_9 <= uVar7)) goto LAB_0062d67c;
      uVar6 = 0xff;
      uVar3 = 0xff;
      if (param_2 != (long *)0x0) {
        if ((int)uVar9 == -1) {
                    /* try { // try from 0062d7e4 to 0072d7f7 has its CatchHandler @ 0062e6a0 */
          if ((byte *)param_2[2] < (byte *)param_2[3]) {
            uVar9 = (ulong)*(byte *)param_2[2];
          }
          else {
                    /* try { // try from 0062d8b8 to 0072d8df has its CatchHandler @ 0062e804 */
            uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
            uVar9 = (ulong)uVar3;
            if (uVar3 == 0xffffffff) {
              uVar6 = 0xff;
              param_2 = (long *)0x0;
              uVar3 = 0xff;
              goto LAB_0062d748;
            }
          }
        }
        goto LAB_0062d740;
      }
    }
    else {
      if ((int)uVar9 == -1) {
                    /* try { // try from 0062d7c8 to 0072d7cf has its CatchHandler @ 0062e4d4 */
                    /* try { // try from 0062d7d0 to 0072d7e3 has its CatchHandler @ 0062e4d0 */
        if ((byte *)param_2[2] < (byte *)param_2[3]) {
          uVar9 = (ulong)*(byte *)param_2[2];
        }
        else {
                    /* try { // try from 0062d6d0 to 0072d6db has its CatchHandler @ 0062e970 */
                    /* try { // try from 0062d6dc to 0072d6e3 has its CatchHandler @ 0062e528 */
                    /* try { // try from 0062d6e4 to 0072d74b has its CatchHandler @ 0062e970 */
          uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
          if (uVar3 == 0xffffffff) goto LAB_0062d6f8;
                    /* try { // try from 0062d900 to 0072d903 has its CatchHandler @ 0062e698 */
          uVar9 = (ulong)uVar3;
        }
      }
      iVar11 = 0;
      if (param_4 != (long *)0x0) goto joined_r0x0062d70c;
      if (param_9 <= uVar7) goto LAB_0062d67c;
LAB_0062d740:
      uVar3 = (uint)uVar9 & 0xff;
      uVar6 = uVar9 & 0xff;
    }
LAB_0062d748:
    bVar1 = *(byte *)((long)plVar4 + (long)(int)uVar3 + 0x139);
    uVar5 = (uint)bVar1;
    if (bVar1 == 0) {
                    /* try { // try from 0062d7f8 to 0072d7ff has its CatchHandler @ 0062e4c0 */
                    /* try { // try from 0062d800 to 0072d813 has its CatchHandler @ 0062e4bc */
      bVar1 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar6,0x2a);
      uVar5 = (uint)bVar1;
                    /* try { // try from 0062d814 to 0072d827 has its CatchHandler @ 0062e698 */
      if (uVar5 == 0x2a) goto LAB_0062d67c;
      *(byte *)((long)plVar4 + (long)(int)uVar3 + 0x139) = bVar1;
                    /* try { // try from 0062d828 to 0072d837 has its CatchHandler @ 0062e804 */
    }
    if (9 < (uVar5 - 0x30 & 0xff)) goto LAB_0062d67c;
    iVar8 = iVar8 * 10 + (uVar5 - 0x30);
                    /* try { // try from 0062d774 to 0072d77f has its CatchHandler @ 0062e4d8 */
    if ((param_8 < iVar8 * iVar10) || (iVar8 * iVar10 + iVar10 <= param_7)) goto LAB_0062d67c;
    iVar10 = iVar10 / 10;
                    /* try { // try from 0062d7a0 to 0072d7c7 has its CatchHandler @ 0062e334 */
    if (param_2 != (long *)0x0) {
      if ((ulong)param_2[2] < (ulong)param_2[3]) {
        uVar9 = 0xffffffff;
        param_2[2] = param_2[2] + 1;
      }
      else {
        uVar9 = 0xffffffff;
        (**(code **)(*param_2 + 0x50))(param_2);
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



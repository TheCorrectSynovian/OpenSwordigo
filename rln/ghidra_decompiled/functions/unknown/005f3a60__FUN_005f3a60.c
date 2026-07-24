/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3a60
 * Function: FUN_005f3a60
 * Signature: undefined FUN_005f3a60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3a60(undefined8 param_1,long param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  double dVar20;
  double local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar4 = *(int *)(param_2 + 0x38);
  bVar3 = *(byte *)(param_2 + 0xb);
  puVar11 = *(undefined1 **)(param_2 + 0x20);
  if ((int)param_3 <= iVar4) goto LAB_005f3b48;
  if ((int)param_3 < -1) {
    lVar8 = FUN_005eede0(param_1);
  }
  else {
                    /* catch() { ... } // from try @ 005f3540 with catch @ 005f3ac0 */
                    /* catch() { ... } // from try @ 005f34f4 with catch @ 005f3acc */
    lVar8 = FUN_005eed74(param_1,*(undefined8 *)(param_2 + 0x18),(long)iVar4 << 4,
                         -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4);
  }
  lVar16 = (long)*(int *)(param_2 + 0x38);
  *(long *)(param_2 + 0x18) = lVar8;
  if (*(int *)(param_2 + 0x38) < (int)param_3) {
    uVar14 = (int)param_3 - lVar16;
    if (1 < uVar14) {
      uVar15 = uVar14 & 0xfffffffffffffffe;
      lVar12 = lVar16 * 0x10;
      lVar16 = uVar15 + lVar16;
                    /* catch() { ... } // from try @ 005f34e0 with catch @ 005f3b0c */
      puVar13 = (undefined4 *)(lVar8 + lVar12 + 0x18);
      uVar17 = uVar15;
      do {
        puVar13[-4] = 0;
        *puVar13 = 0;
        uVar17 = uVar17 - 2;
        puVar13 = puVar13 + 8;
      } while (uVar17 != 0);
      if (uVar14 == uVar15) goto LAB_005f3b44;
    }
    lVar12 = (int)param_3 - lVar16;
    puVar13 = (undefined4 *)(lVar8 + lVar16 * 0x10 + 8);
    do {
      lVar12 = lVar12 + -1;
      *puVar13 = 0;
      puVar13 = puVar13 + 4;
    } while (lVar12 != 0);
  }
LAB_005f3b44:
  *(uint *)(param_2 + 0x38) = param_3;
LAB_005f3b48:
  FUN_005f3ec8(param_1,param_2,param_4);
  if ((int)param_3 < iVar4) {
    plVar1 = (long *)(param_2 + 0x18);
                    /* catch() { ... } // from try @ 005f34d4 with catch @ 005f3b70 */
    *(uint *)(param_2 + 0x38) = param_3;
    lVar8 = (long)(int)param_3;
    do {
      lVar16 = *plVar1;
      piVar19 = (int *)(lVar16 + lVar8 * 0x10 + 8);
      iVar18 = (int)(lVar8 + 1);
      if (*piVar19 != 0) {
        if ((uint)lVar8 < *(uint *)(param_2 + 0x38)) {
          puVar9 = (undefined8 *)(lVar16 + lVar8 * 0x10);
LAB_005f3c10:
          if (puVar9 == &DAT_00699bc8) goto LAB_005f3c1c;
        }
        else {
          dVar20 = (double)iVar18;
          if (iVar18 == 0) {
            puVar9 = *(undefined8 **)(param_2 + 0x20);
          }
          else {
            uVar2 = (int)((ulong)dVar20 >> 0x20) + SUB84(dVar20,0);
                    /* catch() { ... } // from try @ 005f34c0 with catch @ 005f3bd0 */
            uVar5 = (1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) - 1U | 1;
            uVar6 = 0;
            if (uVar5 != 0) {
              uVar6 = uVar2 / uVar5;
            }
            puVar9 = (undefined8 *)
                     (*(long *)(param_2 + 0x20) + (ulong)(uVar2 - uVar6 * uVar5) * 0x28);
          }
          do {
            if ((*(int *)(puVar9 + 3) == 3) && ((double)puVar9[2] == dVar20)) goto LAB_005f3c10;
            puVar9 = (undefined8 *)puVar9[4];
          } while (puVar9 != (undefined8 *)0x0);
LAB_005f3c1c:
          local_78 = (double)iVar18;
          local_70 = 3;
          puVar9 = (undefined8 *)FUN_005f43c0(param_1,param_2,&local_78);
        }
        *puVar9 = *(undefined8 *)(lVar16 + lVar8 * 0x10);
        *(int *)(puVar9 + 1) = *piVar19;
      }
      lVar8 = lVar8 + 1;
    } while (iVar4 != iVar18);
    if ((int)param_3 < -1) {
      lVar8 = FUN_005eede0(param_1);
    }
    else {
      lVar8 = FUN_005eed74(param_1,*plVar1,(long)iVar4 << 4,(long)(int)param_3 << 4);
    }
    *plVar1 = lVar8;
  }
  iVar4 = 1 << (ulong)(bVar3 & 0x1f);
  if (bVar3 != 0x1f) {
    lVar8 = (long)iVar4 + 1;
    piVar19 = (int *)(puVar11 + (long)iVar4 * 0x28 + -0x10);
    do {
      if (piVar19[-4] != 0) {
                    /* try { // try from 005f3cd8 to 006f3d4f has its CatchHandler @ 005f3cd8
                       catch() { ... } // from try @ 005f3cd8 with catch @ 005f3cd8
                       catch() { ... } // from try @ 005f3d70 with catch @ 005f3cd8
                       catch() { ... } // from try @ 005f3e7c with catch @ 005f3cd8 */
        puVar9 = (undefined8 *)FUN_005f4118(param_2,piVar19 + -2);
        *(undefined1 *)(param_2 + 10) = 0;
        if (puVar9 == &DAT_00699bc8) {
          if (*piVar19 == 3) {
            pcVar10 = "table index is NaN";
            if (NAN(*(double *)(piVar19 + -2))) goto LAB_005f3d24;
          }
          else {
            pcVar10 = "table index is nil";
            if (*piVar19 == 0) {
LAB_005f3d24:
              FUN_005eb320(param_1,pcVar10);
            }
          }
          puVar9 = (undefined8 *)FUN_005f43c0(param_1,param_2,piVar19 + -2);
        }
        *puVar9 = *(undefined8 *)(piVar19 + -6);
        *(int *)(puVar9 + 1) = piVar19[-4];
      }
      lVar8 = lVar8 + -1;
                    /* try { // try from 005f3d50 to 006f3d63 has its CatchHandler @ 005f409c */
      piVar19 = piVar19 + -10;
    } while (1 < lVar8);
  }
                    /* try { // try from 005f3d64 to 006f3d6f has its CatchHandler @ 005f4030 */
  if (puVar11 != &LAB_0069a2a0) {
                    /* try { // try from 005f3d70 to 006f3dbf has its CatchHandler @ 005f3cd8 */
    FUN_005eed74(param_1,puVar11,(long)iVar4 * 0x28,0);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



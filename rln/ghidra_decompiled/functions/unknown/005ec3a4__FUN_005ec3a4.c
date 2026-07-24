/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ec3a4
 * Function: FUN_005ec3a4
 * Signature: undefined FUN_005ec3a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005ec3a4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  undefined4 *puVar17;
  code *pcVar18;
  undefined4 local_e0 [10];
  undefined4 local_b8;
  undefined4 local_6c;
  long local_68;
  
                    /* try { // try from 005ec3b8 to 006ec3bb has its CatchHandler @ 005ecc9c */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)(param_1 + 100) >> 1 & 1) == 0) {
                    /* try { // try from 005ec3dc to 006ec3df has its CatchHandler @ 005ecc98 */
    lVar11 = *(long *)(param_1 + 0x28);
  }
  else {
                    /* try { // try from 005ec3e4 to 006ec3f7 has its CatchHandler @ 005ecfc8 */
    lVar7 = *(long *)(param_1 + 0x40);
                    /* try { // try from 005ec3f8 to 006ec403 has its CatchHandler @ 005ecf68 */
    FUN_005ebbd4(param_1,1,0xffffffff);
    lVar11 = *(long *)(param_1 + 0x28);
    if ((*(char *)(**(long **)(lVar11 + 8) + 10) == '\0') &&
       (uVar6 = (uint)*(byte *)(param_1 + 100), (*(byte *)(param_1 + 100) >> 1 & 1) != 0)) {
      do {
        iVar15 = *(int *)(lVar11 + 0x24);
        *(int *)(lVar11 + 0x24) = iVar15 + -1;
        if (iVar15 == 0) break;
        pcVar18 = *(code **)(param_1 + 0x70);
        if ((pcVar18 != (code *)0x0) && (*(char *)(param_1 + 0x65) != '\0')) {
          lVar8 = *(long *)(param_1 + 0x10);
          lVar10 = *(long *)(param_1 + 0x40);
          lVar12 = *(long *)(lVar11 + 0x10);
                    /* try { // try from 005ec450 to 006ec457 has its CatchHandler @ 005ecf64 */
          local_e0[0] = 4;
          local_b8 = 0xffffffff;
          local_6c = 0;
          if (*(long *)(param_1 + 0x38) - lVar8 < 0x141) {
            iVar15 = *(int *)(param_1 + 0x58);
            if (iVar15 < 0x14) {
              iVar15 = iVar15 + 0x14;
                    /* try { // try from 005ec480 to 006ec48b has its CatchHandler @ 005ecf14 */
            }
            else {
              iVar15 = iVar15 << 1;
            }
            FUN_005eba24(param_1,iVar15);
          }
          *(long *)(*(long *)(param_1 + 0x28) + 0x10) = *(long *)(param_1 + 0x10) + 0x140;
          *(undefined1 *)(param_1 + 0x65) = 0;
                    /* try { // try from 005ec4ac to 006ec4d3 has its CatchHandler @ 005ecd58 */
          (*pcVar18)(param_1,local_e0);
          lVar9 = *(long *)(param_1 + 0x40);
          lVar11 = *(long *)(param_1 + 0x28);
          *(undefined1 *)(param_1 + 0x65) = 1;
          *(long *)(lVar11 + 0x10) = lVar9 + (lVar12 - lVar10);
          uVar6 = (uint)*(byte *)(param_1 + 100);
          *(long *)(param_1 + 0x10) = lVar9 + (lVar8 - lVar10);
        }
      } while ((uVar6 >> 1 & 1) != 0);
    }
                    /* try { // try from 005ec4d4 to 006ec4df has its CatchHandler @ 005ed2d4 */
    param_2 = *(long *)(param_1 + 0x40) + (param_2 - lVar7);
  }
                    /* try { // try from 005ec4e0 to 006ec4e7 has its CatchHandler @ 005ecefc */
  *(long *)(param_1 + 0x28) = lVar11 + -0x28;
                    /* try { // try from 005ec4e8 to 006ec54f has its CatchHandler @ 005ed2d4 */
  lVar10 = *(long *)(lVar11 + 8);
  uVar6 = *(uint *)(lVar11 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar11 + -0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar11 + -0x10);
  lVar7 = lVar10;
  if (uVar6 != 0) {
    lVar11 = 0;
    uVar14 = ~uVar6;
    iVar15 = uVar6 + 1;
    iVar13 = -uVar6;
    do {
      puVar2 = (undefined8 *)(param_2 + lVar11);
      if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
        iVar13 = -iVar13;
        lVar7 = lVar10 + lVar11;
        if (0 < iVar13) {
          uVar4 = uVar14;
          if ((int)uVar14 < -1) {
            uVar4 = 0xfffffffe;
          }
          uVar1 = (ulong)(uVar4 + iVar15) + 1;
                    /* try { // try from 005ec578 to 006ec583 has its CatchHandler @ 005eceac */
          if (1 < uVar1) {
            if ((int)uVar14 < -1) {
              uVar14 = 0xfffffffe;
            }
            uVar14 = uVar14 + iVar15;
            uVar4 = ~(uVar4 + iVar15) & 1;
                    /* try { // try from 005ec5a4 to 006ec5cb has its CatchHandler @ 005ecd54 */
            uVar16 = (ulong)(uVar14 + 1) & 1;
            iVar13 = iVar13 - ((int)uVar1 - uVar4);
            puVar17 = (undefined4 *)(lVar7 + 0x18);
            lVar7 = lVar10 + (uVar14 - uVar16) * 0x10 + lVar11 + 0x10;
            lVar11 = ((ulong)uVar14 + 1) - uVar16;
            do {
                    /* try { // try from 005ec5cc to 006ec5d7 has its CatchHandler @ 005ed2d4 */
              puVar17[-4] = 0;
              *puVar17 = 0;
              lVar11 = lVar11 + -2;
              puVar17 = puVar17 + 8;
                    /* try { // try from 005ec5d8 to 006ec5df has its CatchHandler @ 005ecea8 */
            } while (lVar11 != 0);
            if (uVar4 == 0) goto LAB_005ec600;
          }
                    /* try { // try from 005ec5e0 to 006ec65b has its CatchHandler @ 005ed2d4 */
          iVar13 = iVar13 + 1;
          lVar11 = lVar7;
          do {
            lVar7 = lVar11 + 0x10;
            iVar13 = iVar13 + -1;
            *(undefined4 *)(lVar11 + 8) = 0;
            lVar11 = lVar7;
          } while (1 < iVar13);
        }
        goto LAB_005ec600;
      }
      puVar3 = (undefined8 *)(lVar10 + lVar11);
      uVar14 = uVar14 + 1;
      iVar15 = iVar15 + -1;
      *puVar3 = *puVar2;
      iVar13 = iVar13 + 1;
      lVar11 = lVar11 + 0x10;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
    } while (iVar13 != 0);
    lVar7 = lVar10 + lVar11;
  }
LAB_005ec600:
  *(long *)(param_1 + 0x10) = lVar7;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 + 1;
}



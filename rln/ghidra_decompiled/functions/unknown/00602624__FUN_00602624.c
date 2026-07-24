/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602624
 * Function: FUN_00602624
 * Signature: undefined FUN_00602624(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00602624(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  ulong *puVar15;
  uint __c;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_b8 [80];
  long local_68;
  
                    /* try { // try from 00602630 to 00702657 has its CatchHandler @ 00603600 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00602658 to 0070265f has its CatchHandler @ 006038f8 */
                    /* try { // try from 00602660 to 00702673 has its CatchHandler @ 006038f4 */
  __c = *param_1;
  do {
                    /* try { // try from 00602674 to 00702687 has its CatchHandler @ 00603c08 */
    plVar14 = *(long **)(param_1 + 0x12);
    lVar9 = plVar14[1];
    uVar11 = plVar14[2];
    uVar17 = lVar9 + 1;
    if (uVar11 < uVar17) {
                    /* try { // try from 00602688 to 0070268f has its CatchHandler @ 006038e4 */
      if (0x7ffffffffffffffd < uVar11) {
                    /* try { // try from 00602690 to 007026a3 has its CatchHandler @ 006038e0 */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 006026a4 to 007026b7 has its CatchHandler @ 00603c10 */
                    /* try { // try from 006026b8 to 007026c7 has its CatchHandler @ 00603cfc */
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar11 * 2;
      if (lVar16 == -2) {
        lVar6 = FUN_005eede0();
      }
      else {
        lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar11,lVar16);
      }
      lVar9 = plVar14[1];
      *plVar14 = lVar6;
                    /* try { // try from 00602700 to 00702727 has its CatchHandler @ 006035b0 */
      plVar14[2] = lVar16;
      uVar17 = lVar9 + 1;
    }
    else {
      lVar6 = *plVar14;
    }
    plVar14[1] = uVar17;
    *(char *)(lVar6 + lVar9) = (char)__c;
    plVar14 = *(long **)(param_1 + 0x10);
    lVar9 = *plVar14;
    *plVar14 = lVar9 + -1;
    if (lVar9 == 0) {
      __c = FUN_005f8650();
    }
    else {
      pbVar10 = (byte *)plVar14[1];
      plVar14[1] = (long)(pbVar10 + 1);
      __c = (uint)*pbVar10;
    }
                    /* try { // try from 00602748 to 0070276f has its CatchHandler @ 00603cfc */
    *param_1 = __c;
  } while ((__c - 0x30 < 10) || (__c == 0x2e));
  pvVar7 = memchr(&DAT_0069b3d7,__c,3);
  if (pvVar7 != (void *)0x0) {
    plVar14 = *(long **)(param_1 + 0x12);
    lVar9 = plVar14[1];
    uVar11 = plVar14[2];
    uVar17 = lVar9 + 1;
    if (uVar11 < uVar17) {
      if (0x7ffffffffffffffd < uVar11) {
                    /* try { // try from 00602790 to 00702793 has its CatchHandler @ 00603c10 */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* try { // try from 006027c4 to 007027c7 has its CatchHandler @ 00603c08 */
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      lVar16 = uVar11 * 2;
      if (lVar16 == -2) {
        lVar6 = FUN_005eede0();
      }
      else {
                    /* try { // try from 006027f0 to 007027f7 has its CatchHandler @ 006038dc */
        lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar11,lVar16);
      }
      lVar9 = plVar14[1];
      *plVar14 = lVar6;
      plVar14[2] = lVar16;
      uVar17 = lVar9 + 1;
    }
    else {
      lVar6 = *plVar14;
    }
    plVar14[1] = uVar17;
    *(char *)(lVar6 + lVar9) = (char)__c;
    plVar14 = *(long **)(param_1 + 0x10);
    lVar9 = *plVar14;
    *plVar14 = lVar9 + -1;
    if (lVar9 == 0) {
      __c = FUN_005f8650();
                    /* try { // try from 00602840 to 00702853 has its CatchHandler @ 006038a8 */
    }
    else {
      pbVar10 = (byte *)plVar14[1];
      plVar14[1] = (long)(pbVar10 + 1);
      __c = (uint)*pbVar10;
    }
    *param_1 = __c;
    if ((__c < 0x40) && ((1L << ((ulong)__c & 0x3f) & 0x280000000001U) != 0)) {
      plVar14 = *(long **)(param_1 + 0x12);
      lVar9 = plVar14[1];
      uVar11 = plVar14[2];
                    /* try { // try from 00602874 to 0070287f has its CatchHandler @ 006034e8 */
      uVar17 = lVar9 + 1;
      if (uVar11 < uVar17) {
        if (0x7ffffffffffffffd < uVar11) {
          FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 006028ac to 007028b7 has its CatchHandler @ 00603858 */
          FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                       "lexical element too long");
                    /* WARNING: Subroutine does not return */
          FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
        }
        lVar16 = uVar11 * 2;
                    /* try { // try from 006028d8 to 007028ff has its CatchHandler @ 006035ac */
        if (lVar16 == -2) {
          lVar6 = FUN_005eede0();
        }
        else {
          lVar6 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar11,lVar16);
        }
        lVar9 = plVar14[1];
        *plVar14 = lVar6;
                    /* try { // try from 00602900 to 00702913 has its CatchHandler @ 00603854 */
        plVar14[2] = lVar16;
        uVar17 = lVar9 + 1;
      }
      else {
        lVar6 = *plVar14;
      }
      plVar14[1] = uVar17;
      *(char *)(lVar6 + lVar9) = (char)__c;
      plVar14 = *(long **)(param_1 + 0x10);
                    /* try { // try from 00602914 to 00702923 has its CatchHandler @ 00603ca8 */
      lVar9 = *plVar14;
      *plVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        __c = FUN_005f8650();
      }
      else {
        pbVar10 = (byte *)plVar14[1];
        plVar14[1] = (long)(pbVar10 + 1);
        __c = (uint)*pbVar10;
      }
      *param_1 = __c;
    }
  }
  iVar5 = isalnum(__c);
  plVar14 = *(long **)(param_1 + 0x12);
  puVar18 = (ulong *)(plVar14 + 1);
  uVar11 = *puVar18;
  puVar15 = (ulong *)(plVar14 + 2);
                    /* try { // try from 0060295c to 00702983 has its CatchHandler @ 0060355c */
  uVar8 = *puVar15;
  uVar17 = uVar11 + 1;
  bVar1 = uVar8 < uVar17;
  while ((__c == 0x5f || (iVar5 != 0))) {
    if (bVar1) {
      if (0x7ffffffffffffffd < uVar8) {
                    /* try { // try from 006029a4 to 007029cb has its CatchHandler @ 00603ca8 */
        FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
        FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                     "lexical element too long");
                    /* WARNING: Subroutine does not return */
        FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
      }
      uVar17 = uVar8 * 2;
      if (uVar17 == 0xfffffffffffffffe) {
                    /* try { // try from 006029e0 to 007029e7 has its CatchHandler @ 00603850 */
        lVar9 = FUN_005eede0();
      }
      else {
        lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar8,uVar17);
      }
                    /* try { // try from 006029fc to 00702a0f has its CatchHandler @ 00603bb8 */
      *plVar14 = lVar9;
      *puVar15 = uVar17;
      uVar11 = *puVar18;
      uVar17 = uVar11 + 1;
    }
    else {
                    /* try { // try from 006029e8 to 007029fb has its CatchHandler @ 0060384c */
      lVar9 = *plVar14;
    }
    *puVar18 = uVar17;
                    /* try { // try from 00602a10 to 00702a1f has its CatchHandler @ 0060381c */
    *(char *)(lVar9 + uVar11) = (char)__c;
    plVar14 = *(long **)(param_1 + 0x10);
    lVar9 = *plVar14;
    *plVar14 = lVar9 + -1;
    if (lVar9 == 0) {
      __c = FUN_005f8650();
                    /* try { // try from 00602a40 to 00702a43 has its CatchHandler @ 00603bb8 */
    }
    else {
      pbVar10 = (byte *)plVar14[1];
      plVar14[1] = (long)(pbVar10 + 1);
      __c = (uint)*pbVar10;
    }
    *param_1 = __c;
    iVar5 = isalnum(__c);
    plVar14 = *(long **)(param_1 + 0x12);
    puVar18 = (ulong *)(plVar14 + 1);
                    /* try { // try from 00602a58 to 00702a5f has its CatchHandler @ 00603818 */
    uVar11 = *puVar18;
    puVar15 = (ulong *)(plVar14 + 2);
                    /* try { // try from 00602a60 to 00702a73 has its CatchHandler @ 00603814 */
    uVar8 = *puVar15;
    uVar17 = uVar11 + 1;
    bVar1 = uVar8 < uVar17;
                    /* try { // try from 00602a74 to 00702a87 has its CatchHandler @ 00603b80 */
  }
  if (bVar1) {
    if (0x7ffffffffffffffd < uVar8) {
                    /* try { // try from 00602a88 to 00702a97 has its CatchHandler @ 006037e4 */
      FUN_005ef46c(auStack_b8,*(long *)(param_1 + 0x14) + 0x18,0x50);
                    /* try { // try from 00602ab8 to 00702abb has its CatchHandler @ 00603b80 */
      FUN_005ef3d4(*(undefined8 *)(param_1 + 0xe),"%s:%d: %s",auStack_b8,param_1[1],
                   "lexical element too long");
                    /* WARNING: Subroutine does not return */
      FUN_005eb814(*(undefined8 *)(param_1 + 0xe),3);
    }
                    /* try { // try from 00602ad0 to 00702ad7 has its CatchHandler @ 00603eb4 */
    uVar17 = uVar8 * 2;
                    /* try { // try from 00602ad8 to 00702ae3 has its CatchHandler @ 00603e54 */
    if (uVar17 == 0xfffffffffffffffe) {
      lVar9 = FUN_005eede0();
    }
    else {
      lVar9 = FUN_005eed74(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar8,uVar17);
    }
    *plVar14 = lVar9;
    *puVar15 = uVar17;
    uVar11 = *puVar18;
    uVar17 = uVar11 + 1;
  }
  else {
    lVar9 = *plVar14;
  }
  *puVar18 = uVar17;
  *(undefined1 *)(lVar9 + uVar11) = 0;
  auVar4 = _DAT_0069b280;
  lVar9 = **(long **)(param_1 + 0x12);
  uVar17 = (*(long **)(param_1 + 0x12))[1];
  if (uVar17 == 0) goto LAB_00602cd0;
  uVar2 = (undefined1)param_1[0x16];
  uVar11 = uVar17;
  if (uVar17 < 0x10) {
LAB_00602cac:
    do {
      lVar6 = lVar9 + uVar11;
      uVar11 = uVar11 - 1;
      if (*(char *)(lVar6 + -1) == '.') {
        *(undefined1 *)(lVar6 + -1) = uVar2;
      }
    } while (uVar11 != 0);
  }
  else {
                    /* try { // try from 00602b2c to 00702b5b has its CatchHandler @ 006036b4 */
    uVar12 = uVar17 & 0xfffffffffffffff0;
    uVar11 = uVar17 - uVar12;
    puVar13 = (undefined1 *)(lVar9 + uVar17 + -8);
    uVar8 = uVar12;
    do {
      auVar19 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar13 + -8),auVar4);
      if (auVar19[0] == '.') {
        puVar13[7] = uVar2;
      }
      if (auVar19[1] == '.') {
        puVar13[6] = uVar2;
      }
      if (auVar19[2] == '.') {
        puVar13[5] = uVar2;
      }
      if (auVar19[3] == '.') {
        puVar13[4] = uVar2;
      }
                    /* try { // try from 00602b7c to 00702ba3 has its CatchHandler @ 00603e54 */
      if (auVar19[4] == '.') {
        puVar13[3] = uVar2;
      }
      if (auVar19[5] == '.') {
        puVar13[2] = uVar2;
      }
      if (auVar19[6] == '.') {
        puVar13[1] = uVar2;
      }
      if (auVar19[7] == '.') {
        *puVar13 = uVar2;
      }
      if (auVar19[8] == '.') {
        puVar13[-1] = uVar2;
      }
      if (auVar19[9] == '.') {
        puVar13[-2] = uVar2;
      }
      if (auVar19[10] == '.') {
        puVar13[-3] = uVar2;
      }
      if (auVar19[0xb] == '.') {
        puVar13[-4] = uVar2;
      }
      if (auVar19[0xc] == '.') {
        puVar13[-5] = uVar2;
      }
      if (auVar19[0xd] == '.') {
                    /* try { // try from 00602bec to 00702bff has its CatchHandler @ 006037b0 */
        puVar13[-6] = uVar2;
      }
      if (auVar19[0xe] == '.') {
        puVar13[-7] = uVar2;
      }
      if (auVar19[0xf] == '.') {
        puVar13[-8] = uVar2;
      }
      uVar8 = uVar8 - 0x10;
      puVar13 = puVar13 + -0x10;
    } while (uVar8 != 0);
    if (uVar17 != uVar12) goto LAB_00602cac;
  }
  lVar9 = **(long **)(param_1 + 0x12);
LAB_00602cd0:
  FUN_005eeefc(lVar9,param_2);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00632890
 * Function: FUN_00632890
 * Signature: undefined FUN_00632890(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined1  [16]
FUN_00632890(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  long lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  size_t sVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char *__s;
  undefined8 local_20;
  undefined8 uStack_18;
  long *local_10;
  uint local_8;
  undefined4 uStack_4;
  
  local_8 = (uint)param_3;
  uStack_4 = (undefined4)((ulong)param_3 >> 0x20);
  local_20 = param_4;
  uStack_18 = param_5;
  local_10 = param_2;
  plVar9 = (long *)FUN_0062d354(param_9 + 0xd0);
                    /* catch() { ... } // from try @ 00632830 with catch @ 006328ec */
  lVar1 = -(param_8 * 4 + 0x1eU & 0xfffffffffffffff0);
                    /* catch() { ... } // from try @ 006327e8 with catch @ 006328f4 */
  iVar5 = FUN_00632808(&local_10);
  iVar6 = FUN_00632808(&local_20);
                    /* try { // try from 00632918 to 0073293f has its CatchHandler @ 006329bc */
  if (((iVar5 == -1) != (iVar6 == -1)) && (cVar3 = FUN_00632808(&local_10), param_8 != 0)) {
    lVar13 = 0;
    uVar15 = 0;
    do {
                    /* try { // try from 0063296c to 00732993 has its CatchHandler @ 006329c8 */
      while ((**(char **)(param_7 + lVar13 * 8) != cVar3 &&
             (cVar4 = (**(code **)(*plVar9 + 0x10))(plVar9), cVar3 != cVar4))) {
        lVar13 = lVar13 + 1;
        if (lVar13 == param_8) goto LAB_00632984;
      }
      *(int *)(&stack0xffffffffffffff70 + uVar15 * 4 + lVar1) = (int)lVar13;
      lVar13 = lVar13 + 1;
      uVar15 = uVar15 + 1;
    } while (lVar13 != param_8);
LAB_00632984:
    uVar14 = 0;
joined_r0x00632990:
    if (1 < uVar15) {
                    /* try { // try from 00632994 to 00732a07 has its CatchHandler @ 006327b0 */
      uVar16 = 1;
      uVar10 = strlen(*(char **)(param_7 + (long)*(int *)(&stack0xffffffffffffff70 + lVar1) * 8));
      do {
        lVar13 = uVar16 * 4;
        uVar16 = uVar16 + 1;
        sVar11 = strlen(*(char **)(param_7 +
                                  (long)*(int *)(&stack0xffffffffffffff70 + lVar13 + lVar1) * 8));
                    /* catch() { ... } // from try @ 00632918 with catch @ 006329bc */
        if (sVar11 < uVar10) {
          uVar10 = sVar11;
        }
      } while (uVar16 < uVar15);
                    /* catch() { ... } // from try @ 0063296c with catch @ 006329c8 */
      if (local_10 != (long *)0x0) {
        if ((ulong)local_10[2] < (ulong)local_10[3]) {
          local_10[2] = local_10[2] + 1;
        }
        else {
                    /* try { // try from 00632ba8 to 00732bb3 has its CatchHandler @ 006331a4 */
          (**(code **)(*local_10 + 0x50))();
        }
        local_8 = 0xffffffff;
      }
                    /* catch() { ... } // from try @ 00632884 with catch @ 006329ec */
      uVar14 = uVar14 + 1;
      if (uVar10 <= uVar14) goto LAB_00632b50;
      iVar5 = FUN_00632808(&local_10);
                    /* try { // try from 00632a08 to 00732ba7 has its CatchHandler @ 00632a08
                       catch() { ... } // from try @ 00632a08 with catch @ 00632a08
                       catch() { ... } // from try @ 00632f70 with catch @ 00632a08
                       catch() { ... } // from try @ 006332f8 with catch @ 00632a08 */
      iVar6 = FUN_00632808(&local_20);
      if ((iVar5 == -1) == (iVar6 == -1)) goto LAB_00632b50;
      uVar16 = 0;
      do {
        while( true ) {
          uVar12 = (uint)*(byte *)(*(long *)(param_7 +
                                            (long)*(int *)(&stack0xffffffffffffff70 +
                                                          uVar16 * 4 + lVar1) * 8) + uVar14);
          if (local_10 == (long *)0x0) break;
          if (local_8 != 0xffffffff) {
            uVar8 = local_8 & 0xff;
            goto LAB_00632a30;
          }
          if ((byte *)local_10[2] < (byte *)local_10[3]) {
            uVar8 = (uint)*(byte *)local_10[2];
          }
          else {
            uVar8 = (**(code **)(*local_10 + 0x48))();
            if (uVar8 == 0xffffffff) {
              local_10 = (long *)0x0;
              uVar8 = 0xff;
              goto LAB_00632a30;
            }
          }
          local_8 = uVar8;
          if (uVar12 != (uVar8 & 0xff)) goto LAB_00632a38;
LAB_00632a94:
          uVar16 = uVar16 + 1;
          if (uVar15 <= uVar16) goto joined_r0x00632990;
        }
        uVar8 = 0xff;
LAB_00632a30:
        if (uVar12 == uVar8) goto LAB_00632a94;
LAB_00632a38:
        uVar15 = uVar15 - 1;
        *(undefined4 *)(&stack0xffffffffffffff70 + uVar16 * 4 + lVar1) =
             *(undefined4 *)(&stack0xffffffffffffff70 + uVar15 * 4 + lVar1);
      } while (uVar16 < uVar15);
      goto joined_r0x00632990;
    }
    if (uVar15 == 1) {
      if (local_10 != (long *)0x0) {
        if ((ulong)local_10[2] < (ulong)local_10[3]) {
          local_10[2] = local_10[2] + 1;
        }
        else {
          FUN_0062b4a0();
        }
        local_8 = 0xffffffff;
      }
      iVar5 = *(int *)(&stack0xffffffffffffff70 + lVar1);
      __s = *(char **)(param_7 + (long)iVar5 * 8);
      sVar11 = strlen(__s);
      while (uVar14 = uVar14 + 1, uVar14 < sVar11) {
        iVar6 = FUN_00632808(&local_10);
        iVar7 = FUN_00632808(&local_20);
        if (((iVar6 == -1) == (iVar7 == -1)) ||
           (cVar3 = __s[uVar14], cVar4 = FUN_00632808(&local_10), cVar3 != cVar4)) break;
        if (local_10 != (long *)0x0) {
          if ((ulong)local_10[2] < (ulong)local_10[3]) {
            local_10[2] = local_10[2] + 1;
          }
          else {
            FUN_0062b4a0();
          }
          local_8 = 0xffffffff;
        }
      }
      if (uVar14 == sVar11) {
        *param_6 = iVar5;
        goto LAB_00632b5c;
      }
    }
  }
LAB_00632b50:
  *param_10 = *param_10 | 4;
LAB_00632b5c:
  auVar2._8_4_ = local_8;
  auVar2._0_8_ = local_10;
  auVar2._12_4_ = uStack_4;
  return auVar2;
}



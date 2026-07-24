/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651bb0
 * Function: FUN_00651bb0
 * Signature: undefined FUN_00651bb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00651bb0(undefined8 *param_1,undefined4 param_2,byte *param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  bVar11 = *param_3;
  lVar9 = 0;
  uVar18 = 0;
  uVar17 = (ulong)bVar11;
  while ((long)uVar17 < (long)param_6 - (long)param_5 >> 2) {
    while( true ) {
      if ((char)bVar11 < '\x01') goto LAB_00651c04;
      param_6 = (undefined8 *)((long)param_6 + (ulong)bVar11 * -4);
      if (param_4 - 1U <= uVar18) break;
      uVar18 = uVar18 + 1;
      bVar11 = param_3[uVar18];
      uVar17 = (ulong)bVar11;
      if ((long)param_6 - (long)param_5 >> 2 <= (long)uVar17) goto LAB_00651c04;
    }
    lVar9 = lVar9 + 1;
  }
LAB_00651c04:
  if (param_5 == param_6) goto LAB_00651d94;
  puVar5 = (undefined8 *)((long)param_5 + 4);
  uVar14 = (ulong)((long)param_6 - (long)puVar5) >> 2;
  uVar17 = uVar14 + 1;
  puVar8 = param_1;
  if ((uVar17 < 9) || (param_1 < param_5 + 2 && param_5 < param_1 + 2)) {
    do {
      bVar3 = puVar5 != param_6;
      *(undefined4 *)puVar8 = *(undefined4 *)((long)puVar5 + -4);
                    /* try { // try from 00651ef8 to 00751f17 has its CatchHandler @ 00651f90 */
      puVar5 = (undefined8 *)((long)puVar5 + 4);
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (bVar3);
  }
  else {
                    /* try { // try from 00651c54 to 00751c5b has its CatchHandler @ 00651d44 */
    uVar14 = (uVar14 - 3 >> 2) + 1;
                    /* try { // try from 00651c5c to 00751d63 has its CatchHandler @ 0065197c */
    uVar15 = 0;
    puVar5 = param_1;
    puVar8 = param_5;
    do {
      uVar19 = *puVar8;
      uVar15 = uVar15 + 1;
      puVar5[1] = puVar8[1];
      *puVar5 = uVar19;
      puVar5 = puVar5 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar15 < uVar14);
    lVar7 = uVar14 * 0x10;
    if (((uVar17 != uVar14 * 4) &&
        (*(undefined4 *)(param_1 + uVar14 * 2) = *(undefined4 *)(param_5 + uVar14 * 2),
        param_6 != (undefined8 *)((long)param_5 + lVar7 + 4))) &&
       (*(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)((long)param_5 + lVar7 + 4),
       param_6 != param_5 + uVar14 * 2 + 1)) {
      *(undefined4 *)(param_1 + uVar14 * 2 + 1) = *(undefined4 *)(param_5 + uVar14 * 2 + 1);
    }
  }
  puVar5 = (undefined8 *)((long)param_1 + uVar17 * 4);
  lVar9 = lVar9 + -1;
  if (lVar9 == -1) {
LAB_00651e80:
    while (puVar8 = puVar5, uVar18 = uVar18 - 1, uVar18 != 0xffffffffffffffff) {
      *(undefined4 *)puVar8 = param_2;
      puVar5 = (undefined8 *)((long)puVar8 + 4);
      bVar11 = param_3[uVar18];
      if (bVar11 != 0) {
        puVar10 = puVar5;
        puVar16 = param_6;
        bVar4 = bVar11;
        if ((puVar5 < param_6 + 2 && param_6 < (undefined8 *)((long)puVar8 + 0x14U)) ||
           (uVar6 = (uint)bVar11, bVar11 < 9)) {
          do {
            bVar4 = bVar4 - 1;
            *(undefined4 *)puVar10 = *(undefined4 *)puVar16;
            puVar10 = (undefined8 *)((long)puVar10 + 4);
            puVar16 = (undefined8 *)((long)puVar16 + 4);
          } while (bVar4 != 0);
        }
        else {
                    /* try { // try from 00651df0 to 00751e17 has its CatchHandler @ 00651e28 */
          uVar13 = (uVar6 - 4 >> 2 & 0x3f) + 1;
          uVar12 = 0;
          uVar2 = uVar13 & 0x3f;
          uVar1 = uVar2 * 4;
          puVar8 = puVar5;
          puVar10 = param_6;
          do {
            uVar19 = *puVar10;
            uVar12 = uVar12 + 1;
                    /* try { // try from 00651e18 to 00751e3b has its CatchHandler @ 00651d98 */
            puVar8[1] = puVar10[1];
            *puVar8 = uVar19;
            puVar8 = puVar8 + 2;
            puVar10 = puVar10 + 2;
          } while ((uVar12 & 0xff) < uVar13);
                    /* catch() { ... } // from try @ 00651df0 with catch @ 00651e28 */
          lVar9 = (ulong)uVar1 * 4;
          if (uVar6 != uVar1) {
            uVar6 = uVar6 + uVar2 * -4 & 0xff;
            *(undefined4 *)((long)puVar5 + (ulong)uVar1 * 4) =
                 *(undefined4 *)((long)param_6 + (ulong)uVar1 * 4);
                    /* try { // try from 00651e5c to 00751edf has its CatchHandler @ 00651e5c
                       catch() { ... } // from try @ 00651e5c with catch @ 00651e5c
                       catch() { ... } // from try @ 00651f58 with catch @ 00651e5c */
            if ((uVar6 != 1) &&
               (*(undefined4 *)((long)puVar5 + lVar9 + 4) =
                     *(undefined4 *)((long)param_6 + lVar9 + 4), uVar6 != 2)) {
              *(undefined4 *)((long)puVar5 + lVar9 + 8) = *(undefined4 *)((long)param_6 + lVar9 + 8)
              ;
            }
          }
        }
        lVar9 = ((ulong)(byte)(bVar11 - 1) + 1) * 4;
        param_6 = (undefined8 *)((long)param_6 + lVar9);
        puVar5 = (undefined8 *)((long)puVar5 + lVar9);
      }
    }
    return;
  }
  *(undefined4 *)puVar5 = param_2;
  param_1 = (undefined8 *)((long)puVar5 + 4);
  uVar6 = (uint)param_3[uVar18];
  if (param_3[uVar18] == 0) goto LAB_00651d94;
  do {
    puVar8 = param_1;
    puVar10 = param_6;
    uVar13 = uVar6;
    if ((param_1 < param_6 + 2 && param_6 < (undefined8 *)((long)puVar5 + 0x14U)) || (uVar6 < 9)) {
      do {
        uVar12 = uVar13 - 1;
        *(undefined4 *)puVar8 = *(undefined4 *)puVar10;
        puVar8 = (undefined8 *)((long)puVar8 + 4);
        puVar10 = (undefined8 *)((long)puVar10 + 4);
        uVar13 = uVar12 & 0xff;
      } while ((uVar12 & 0xff) != 0);
    }
    else {
      uVar13 = (uVar6 - 4 >> 2 & 0x3f) + 1;
      uVar12 = 0;
      uVar2 = uVar13 & 0x3f;
      uVar1 = uVar2 * 4;
      puVar5 = param_1;
      puVar8 = param_6;
      do {
        uVar19 = *puVar8;
        uVar12 = uVar12 + 1;
        puVar5[1] = puVar8[1];
        *puVar5 = uVar19;
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 2;
      } while ((uVar12 & 0xff) < uVar13);
      lVar7 = (ulong)uVar1 * 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00651c54 with catch @ 00651d44
                        */
      if (uVar6 != uVar1) {
        uVar13 = uVar6 + uVar2 * -4 & 0xff;
        *(undefined4 *)((long)param_1 + (ulong)uVar1 * 4) =
             *(undefined4 *)((long)param_6 + (ulong)uVar1 * 4);
                    /* try { // try from 00651d64 to 00751d8b has its CatchHandler @ 00651d94 */
        if ((uVar13 != 1) &&
           (*(undefined4 *)((long)param_1 + lVar7 + 4) = *(undefined4 *)((long)param_6 + lVar7 + 4),
           uVar13 != 2)) {
          *(undefined4 *)((long)param_1 + lVar7 + 8) = *(undefined4 *)((long)param_6 + lVar7 + 8);
        }
      }
    }
    lVar7 = ((ulong)(byte)((char)uVar6 - 1) + 1) * 4;
                    /* try { // try from 00651d8c to 00751d97 has its CatchHandler @ 0065197c */
    param_6 = (undefined8 *)((long)param_6 + lVar7);
    param_1 = (undefined8 *)((long)param_1 + lVar7);
LAB_00651d94:
    do {
      puVar5 = param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00651d64 with catch @ 00651d94
                        */
      lVar9 = lVar9 + -1;
                    /* catch() { ... } // from try @ 00651e18 with catch @ 00651d98 */
      if (lVar9 == -1) goto LAB_00651e80;
      *(undefined4 *)puVar5 = param_2;
      param_1 = (undefined8 *)((long)puVar5 + 4);
      uVar6 = (uint)param_3[uVar18];
    } while (uVar6 == 0);
  } while( true );
}



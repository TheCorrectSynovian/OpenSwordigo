/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4b90
 * Function: FUN_005f4b90
 * Signature: undefined FUN_005f4b90(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005f4b90(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  double dVar12;
  
  uVar6 = *(uint *)(param_1 + 0x38);
  if ((uVar6 == 0) || (*(int *)(*(long *)(param_1 + 0x18) + (ulong)(uVar6 - 1) * 0x10 + 8) != 0)) {
    puVar7 = *(undefined8 **)(param_1 + 0x20);
                    /* try { // try from 005f4bb8 to 006f4bdf has its CatchHandler @ 005f4c50 */
    if (puVar7 == (undefined8 *)&LAB_0069a2a0) {
                    /* catch() { ... } // from try @ 005f4c84 with catch @ 005f4d04 */
                    /* catch() { ... } // from try @ 005f4b48 with catch @ 005f4d08 */
      return uVar6;
    }
    uVar2 = uVar6 + 1;
    uVar5 = uVar6;
    do {
      uVar10 = uVar2;
                    /* try { // try from 005f4be0 to 006f4c83 has its CatchHandler @ 005f4b14 */
      if (uVar10 - 1 < uVar6) {
        iVar8 = *(int *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar10 - 1) * 0x10 + 8);
      }
      else {
        dVar12 = (double)(int)uVar10;
        puVar11 = puVar7;
        if (uVar10 != 0) {
          uVar2 = (int)((ulong)dVar12 >> 0x20) + SUB84(dVar12,0);
          uVar1 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
          uVar3 = 0;
          if (uVar1 != 0) {
            uVar3 = uVar2 / uVar1;
          }
          puVar11 = puVar7 + (ulong)(uVar2 - uVar3 * uVar1) * 5;
        }
        do {
          if ((*(int *)(puVar11 + 3) == 3) && (puVar9 = puVar11, (double)puVar11[2] == dVar12))
          break;
          puVar11 = (undefined8 *)puVar11[4];
                    /* catch() { ... } // from try @ 005f4bb8 with catch @ 005f4c50 */
          puVar9 = &DAT_00699bc8;
        } while (puVar11 != (undefined8 *)0x0);
        iVar8 = *(int *)(puVar9 + 1);
      }
      if (iVar8 == 0) {
        if (uVar10 - uVar5 < 2) {
          return uVar5;
        }
        do {
                    /* try { // try from 005f4d68 to 006f4d73 has its CatchHandler @ 005f4d80 */
          uVar2 = uVar10 + uVar5 >> 1;
          if (uVar2 - 1 < uVar6) {
                    /* catch() { ... } // from try @ 005f4d68 with catch @ 005f4d80 */
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar2 - 1) * 0x10);
          }
          else {
            dVar12 = (double)uVar2;
            puVar11 = puVar7;
            if (uVar2 != 0) {
              uVar1 = (int)((ulong)dVar12 >> 0x20) + SUB84(dVar12,0);
                    /* try { // try from 005f4da4 to 006f4dcb has its CatchHandler @ 005f4dd4 */
              uVar3 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar1 / uVar3;
              }
              puVar11 = puVar7 + (ulong)(uVar1 - uVar4 * uVar3) * 5;
            }
            do {
                    /* try { // try from 005f4dcc to 006f4de7 has its CatchHandler @ 005f4d1c */
              if ((*(int *)(puVar11 + 3) == 3) && (puVar9 = puVar11, (double)puVar11[2] == dVar12))
              break;
                    /* catch() { ... } // from try @ 005f4da4 with catch @ 005f4dd4 */
              puVar11 = (undefined8 *)puVar11[4];
                    /* catch() { ... } // from try @ 005f4d34 with catch @ 005f4dd8 */
              puVar9 = &DAT_00699bc8;
            } while (puVar11 != (undefined8 *)0x0);
          }
                    /* try { // try from 005f4de8 to 006f4df3 has its CatchHandler @ 005f4df4 */
          if (*(int *)(puVar9 + 1) != 0) {
            uVar5 = uVar2;
            uVar2 = uVar10;
          }
          uVar10 = uVar2;
                    /* catch() { ... } // from try @ 005f4de8 with catch @ 005f4df4 */
                    /* try { // try from 005f4df8 to 006f4dfb has its CatchHandler @ 005f4e00 */
          if (uVar10 - uVar5 < 2) {
            return uVar5;
          }
        } while( true );
      }
                    /* catch() { ... } // from try @ 005f4b8c with catch @ 005f4c60 */
      uVar2 = uVar10 << 1;
      uVar5 = uVar10;
    } while (uVar10 << 1 < 0x7ffffffe);
    iVar8 = 1;
    do {
                    /* try { // try from 005f4c84 to 006f4cfb has its CatchHandler @ 005f4d04 */
      uVar5 = iVar8 - 1;
      if (uVar5 < uVar6) {
        puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar5 * 0x10);
      }
      else {
        dVar12 = (double)iVar8;
        puVar11 = puVar7;
        if (iVar8 != 0) {
                    /* catch() { ... } // from try @ 005f4b64 with catch @ 005f4cb0 */
          uVar2 = (int)((ulong)dVar12 >> 0x20) + SUB84(dVar12,0);
          uVar10 = (1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U | 1;
          uVar1 = 0;
          if (uVar10 != 0) {
            uVar1 = uVar2 / uVar10;
          }
          puVar11 = puVar7 + (ulong)(uVar2 - uVar1 * uVar10) * 5;
        }
        do {
          if ((*(int *)(puVar11 + 3) == 3) && (puVar9 = puVar11, (double)puVar11[2] == dVar12))
          break;
          puVar11 = (undefined8 *)puVar11[4];
          puVar9 = &DAT_00699bc8;
        } while (puVar11 != (undefined8 *)0x0);
      }
      iVar8 = iVar8 + 1;
                    /* try { // try from 005f4cfc to 006f4d1b has its CatchHandler @ 005f4b14 */
    } while (*(int *)(puVar9 + 1) != 0);
  }
  else {
    if (uVar6 < 2) {
                    /* catch() { ... } // from try @ 005f4e78 with catch @ 005f4e04
                       catch() { ... } // from try @ 005f4f10 with catch @ 005f4e04
                       catch() { ... } // from try @ 005f51c4 with catch @ 005f4e04 */
      return 0;
    }
    uVar5 = 0;
    do {
                    /* catch() { ... } // from try @ 005f4dcc with catch @ 005f4d1c */
      uVar2 = uVar5 + uVar6 >> 1;
                    /* try { // try from 005f4d34 to 006f4d3b has its CatchHandler @ 005f4dd8 */
      if (*(int *)(*(long *)(param_1 + 0x18) + (ulong)(uVar2 - 1) * 0x10 + 8) != 0) {
        uVar5 = uVar2;
        uVar2 = uVar6;
      }
      uVar6 = uVar2;
    } while (1 < uVar6 - uVar5);
  }
                    /* catch() { ... } // from try @ 005f4df8 with catch @ 005f4e00 */
  return uVar5;
}



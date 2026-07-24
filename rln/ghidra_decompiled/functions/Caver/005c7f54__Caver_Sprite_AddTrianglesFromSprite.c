/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7f54
 * Function: Caver::Sprite::AddTrianglesFromSprite
 * Signature: undefined __thiscall AddTrianglesFromSprite(Sprite * this, Sprite * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::AddTrianglesFromSprite(Caver::Sprite*) */

void __thiscall Caver::Sprite::AddTrianglesFromSprite(Sprite *this,Sprite *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  short sVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *pvVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
                    /* try { // try from 005c7f78 to 006c7f9f has its CatchHandler @ 005c80e8 */
  iVar17 = *(int *)(this + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c) + iVar17;
  lVar9 = (long)*(int *)(param_1 + 0x1c) + (long)*(int *)(this + 0x1c);
  if (*(int *)(this + 0x28) < iVar1) {
    iVar3 = *(int *)(this + 0x30);
    uVar7 = (ulong)(iVar3 * iVar1);
    if ((long)uVar7 < 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar5 = operator_new__(uVar7);
                    /* try { // try from 005c7fb0 to 006c7fc3 has its CatchHandler @ 005c80fc */
    if (iVar17 < 1) {
      pvVar16 = *(void **)(this + 0x38);
      *(void **)(this + 0x38) = pvVar5;
    }
    else {
      pvVar16 = *(void **)(this + 0x38);
                    /* try { // try from 005c7fc4 to 006c8057 has its CatchHandler @ 005c7dbc */
      iVar2 = iVar1;
      if (iVar17 <= iVar1) {
        iVar2 = iVar17;
      }
      memcpy(pvVar5,pvVar16,(long)(iVar3 * iVar2));
      *(void **)(this + 0x38) = pvVar5;
    }
    if (pvVar16 != (void *)0x0) {
      operator_delete__(pvVar16);
      pvVar5 = *(void **)(this + 0x38);
    }
    lVar10 = (long)pvVar5 + 0xc;
    *(int *)(this + 0x28) = iVar1;
    if (this[0x50] != (Sprite)0x0) {
      *(long *)(this + 0x40) = lVar10;
      lVar10 = (long)pvVar5 + 0x10;
    }
    *(long *)(this + 0x48) = lVar10;
  }
  iVar17 = (int)lVar9;
  if (*(int *)(this + 0x18) < iVar17) {
    if (iVar17 < 1) {
                    /* catch() { ... } // from try @ 005c7e70 with catch @ 005c8084 */
      pvVar5 = *(void **)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
    }
    else {
      uVar7 = lVar9 * 6;
      if (CARRY8(lVar9 * 3,lVar9 * 3)) {
        uVar7 = 0xffffffffffffffff;
      }
      pvVar16 = operator_new__(uVar7);
                    /* catch() { ... } // from try @ 005c7f30 with catch @ 005c8034 */
      iVar3 = *(int *)(this + 0x1c);
      if (iVar3 < 1) {
        pvVar5 = *(void **)(this + 0x20);
        *(void **)(this + 0x20) = pvVar16;
      }
      else {
        pvVar5 = *(void **)(this + 0x20);
        iVar2 = iVar17;
        if (iVar3 <= iVar17) {
          iVar2 = iVar3;
        }
                    /* try { // try from 005c8058 to 006c80cf has its CatchHandler @ 005c8150 */
        memcpy(pvVar16,pvVar5,
               -(ulong)((uint)(iVar2 * 3) >> 0x1f) & 0xfffffffe00000000 |
               (ulong)(uint)(iVar2 * 3) << 1);
        *(void **)(this + 0x20) = pvVar16;
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(int *)(this + 0x18) = iVar17;
  }
  memcpy((void *)(*(long *)(this + 0x38) + (long)*(int *)(this + 0x30) * (long)*(int *)(this + 0x2c)
                 ),*(void **)(param_1 + 0x38),
         (long)*(int *)(param_1 + 0x30) * (long)*(int *)(param_1 + 0x2c));
                    /* try { // try from 005c80d0 to 006c811f has its CatchHandler @ 005c7dbc */
                    /* catch() { ... } // from try @ 005c7df0 with catch @ 005c80d4 */
  if (*(int *)(param_1 + 0x1c) < 1) goto LAB_005c814c;
  lVar10 = (long)*(int *)(this + 0x1c);
  uVar8 = *(ulong *)(param_1 + 0x20);
  lVar9 = *(long *)(this + 0x20);
                    /* catch() { ... } // from try @ 005c7ee4 with catch @ 005c80e8
                       catch() { ... } // from try @ 005c7f78 with catch @ 005c80e8 */
  uVar4 = (long)*(int *)(param_1 + 0x1c) * 3;
                    /* catch() { ... } // from try @ 005c7e24 with catch @ 005c80ec
                       catch() { ... } // from try @ 005c7eb8 with catch @ 005c80ec */
  uVar7 = uVar4;
  if ((long)uVar4 < 2) {
    uVar7 = 1;
  }
                    /* catch() { ... } // from try @ 005c7fb0 with catch @ 005c80fc */
  sVar6 = (short)*(undefined4 *)(this + 0x2c);
  if (uVar7 < 0x10) {
LAB_005c8128:
    uVar12 = 0;
  }
  else {
    uVar12 = uVar4;
    if ((long)uVar4 < 2) {
      uVar12 = 1;
    }
    uVar15 = lVar9 + lVar10 * 6;
                    /* try { // try from 005c8120 to 006c8147 has its CatchHandler @ 005c8150 */
    if ((uVar15 < uVar8 + uVar12 * 2) && (uVar8 < lVar9 + (uVar12 + lVar10 * 3) * 2))
    goto LAB_005c8128;
    uVar12 = uVar7 & 0x7ffffffffffffff0;
    puVar13 = (undefined8 *)(uVar8 + 0x10);
    puVar14 = (undefined8 *)(uVar15 + 0x10);
    uVar15 = uVar12;
    do {
      uVar19 = puVar13[-1];
      uVar18 = puVar13[-2];
      uVar21 = puVar13[1];
      uVar20 = *puVar13;
      puVar13 = puVar13 + 4;
      uVar15 = uVar15 - 0x10;
                    /* try { // try from 005c8194 to 006c81a3 has its CatchHandler @ 005c8540 */
      puVar14[-1] = CONCAT26(sVar6 + (short)((ulong)uVar19 >> 0x30),
                             CONCAT24(sVar6 + (short)((ulong)uVar19 >> 0x20),
                                      CONCAT22(sVar6 + (short)((ulong)uVar19 >> 0x10),
                                               sVar6 + (short)uVar19)));
      puVar14[-2] = CONCAT26(sVar6 + (short)((ulong)uVar18 >> 0x30),
                             CONCAT24(sVar6 + (short)((ulong)uVar18 >> 0x20),
                                      CONCAT22(sVar6 + (short)((ulong)uVar18 >> 0x10),
                                               sVar6 + (short)uVar18)));
      puVar14[1] = CONCAT26(sVar6 + (short)((ulong)uVar21 >> 0x30),
                            CONCAT24(sVar6 + (short)((ulong)uVar21 >> 0x20),
                                     CONCAT22(sVar6 + (short)((ulong)uVar21 >> 0x10),
                                              sVar6 + (short)uVar21)));
      *puVar14 = CONCAT26(sVar6 + (short)((ulong)uVar20 >> 0x30),
                          CONCAT24(sVar6 + (short)((ulong)uVar20 >> 0x20),
                                   CONCAT22(sVar6 + (short)((ulong)uVar20 >> 0x10),
                                            sVar6 + (short)uVar20)));
      puVar14 = puVar14 + 4;
    } while (uVar15 != 0);
                    /* try { // try from 005c81a4 to 006c81cb has its CatchHandler @ 005c8154 */
    if (uVar7 == uVar12) goto LAB_005c814c;
  }
  do {
    lVar11 = uVar12 * 2;
    uVar12 = uVar12 + 1;
    *(short *)(lVar9 + lVar10 * 6 + lVar11) = sVar6 + *(short *)(uVar8 + lVar11);
                    /* try { // try from 005c8148 to 006c8153 has its CatchHandler @ 005c7dbc */
  } while ((long)uVar12 < (long)uVar4);
LAB_005c814c:
  *(int *)(this + 0x2c) = iVar1;
                    /* catch() { ... } // from try @ 005c8058 with catch @ 005c8150
                       catch() { ... } // from try @ 005c8120 with catch @ 005c8150 */
  *(int *)(this + 0x1c) = iVar17;
                    /* try { // try from 005c8154 to 006c8193 has its CatchHandler @ 005c8154
                       catch() { ... } // from try @ 005c8154 with catch @ 005c8154
                       catch() { ... } // from try @ 005c81a4 with catch @ 005c8154
                       catch() { ... } // from try @ 005c8388 with catch @ 005c8154
                       catch() { ... } // from try @ 005c84d0 with catch @ 005c8154
                       catch() { ... } // from try @ 005c85fc with catch @ 005c8154 */
  return;
}



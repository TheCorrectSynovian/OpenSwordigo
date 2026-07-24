/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b08d8
 * Function: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert
 * Signature: undefined __thiscall _M_fill_insert(vector<Caver::Vector2,std::allocator<Caver::Vector2>> * this, __normal_iterator param_1, ulong param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Vector2, std::allocator<Caver::Vector2>
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<Caver::Vector2*, std::vector<Caver::Vector2,
   std::allocator<Caver::Vector2> > >, unsigned long, Caver::Vector2 const&) */

void __thiscall
std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert
          (vector<Caver::Vector2,std::allocator<Caver::Vector2>> *this,undefined8 *param_2,
          ulong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
                    /* try { // try from 005b08dc to 006b0957 has its CatchHandler @ 005b0af8 */
  if (param_3 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(this + 8);
  if (param_3 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 3)) {
    uVar2 = *(undefined4 *)param_4;
    uVar3 = *(undefined4 *)((long)param_4 + 4);
    uVar10 = (long)puVar4 - (long)param_2 >> 3;
    if (uVar10 <= param_3) {
      uVar8 = param_3 - uVar10;
      if (uVar8 != 0) {
        puVar7 = puVar4;
        uVar15 = uVar8;
        if (7 < uVar8) {
          uVar12 = uVar8 & 0xfffffffffffffff8;
          puVar7 = puVar4 + 4;
          uVar15 = uVar12;
          do {
            uVar15 = uVar15 - 8;
            *(undefined4 *)(puVar7 + -4) = uVar2;
            *(undefined4 *)((long)puVar7 + -0x1c) = uVar3;
            *(undefined4 *)(puVar7 + -3) = uVar2;
            *(undefined4 *)((long)puVar7 + -0x14) = uVar3;
            *(undefined4 *)(puVar7 + -2) = uVar2;
            *(undefined4 *)((long)puVar7 + -0xc) = uVar3;
            *(undefined4 *)(puVar7 + -1) = uVar2;
            *(undefined4 *)((long)puVar7 + -4) = uVar3;
            *(undefined4 *)puVar7 = uVar2;
            *(undefined4 *)((long)puVar7 + 4) = uVar3;
            *(undefined4 *)(puVar7 + 1) = uVar2;
            *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
            *(undefined4 *)(puVar7 + 2) = uVar2;
            *(undefined4 *)((long)puVar7 + 0x14) = uVar3;
            *(undefined4 *)(puVar7 + 3) = uVar2;
            *(undefined4 *)((long)puVar7 + 0x1c) = uVar3;
            puVar7 = puVar7 + 8;
          } while (uVar15 != 0);
          puVar7 = puVar4 + uVar12;
          uVar15 = uVar8 - uVar12;
          if (uVar8 == uVar12) goto LAB_005b0db4;
        }
        do {
          *(undefined4 *)puVar7 = uVar2;
          *(undefined4 *)((long)puVar7 + 4) = uVar3;
          uVar15 = uVar15 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar15 != 0);
      }
LAB_005b0db4:
      puVar7 = puVar4 + uVar8;
      *(undefined8 **)(this + 8) = puVar7;
      if ((long)puVar4 - (long)param_2 == 0) {
        *(undefined8 **)(this + 8) = param_2 + param_3;
        return;
      }
      uVar12 = ((long)puVar4 - (long)param_2) - 8U >> 3;
                    /* catch() { ... } // from try @ 005b0fb0 with catch @ 005b0dcc
                       catch() { ... } // from try @ 005b1134 with catch @ 005b0dcc */
      uVar15 = uVar12 + 1;
      puVar5 = param_2;
      if (7 < uVar15) {
                    /* try { // try from 005b0ebc to 006b0ec7 has its CatchHandler @ 005b10dc */
        if (((undefined8 *)((long)param_2 + uVar12 * 8 + 4) <= puVar7 ||
             (undefined8 *)((long)puVar4 + ((uVar12 + param_3) - uVar10) * 8 + 4) <= param_2) &&
           (param_2 + uVar12 + 1 <= (undefined8 *)((long)puVar4 + uVar8 * 8 + 4) ||
            puVar4 + ((uVar12 + param_3 + 1) - uVar10) <= (undefined8 *)((long)param_2 + 4U))) {
          uVar8 = uVar15 & 0x3ffffffffffffff8;
                    /* try { // try from 005b0ecc to 006b0f47 has its CatchHandler @ 005b10e8 */
          puVar7 = puVar7 + uVar8;
          puVar5 = puVar4 + ((param_3 + 4) - uVar10);
          puVar14 = param_2 + 4;
          uVar10 = uVar8;
          do {
            uVar17 = puVar14[-4];
            uVar19 = puVar14[-1];
            uVar18 = puVar14[-2];
            uVar21 = puVar14[1];
            uVar20 = *puVar14;
            uVar23 = puVar14[3];
            uVar22 = puVar14[2];
            uVar10 = uVar10 - 8;
            puVar5[-3] = puVar14[-3];
            puVar5[-4] = uVar17;
            puVar5[-1] = uVar19;
            puVar5[-2] = uVar18;
            puVar5[1] = uVar21;
            *puVar5 = uVar20;
            puVar5[3] = uVar23;
            puVar5[2] = uVar22;
            puVar5 = puVar5 + 8;
            puVar14 = puVar14 + 8;
          } while (uVar10 != 0);
          puVar5 = param_2 + uVar8;
          if (uVar15 == uVar8) goto LAB_005b0dec;
        }
      }
      do {
        puVar14 = puVar5 + 1;
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
        puVar5 = puVar14;
      } while (puVar4 != puVar14);
LAB_005b0dec:
      uVar12 = uVar12 + 1;
      *(undefined8 **)(this + 8) = puVar4 + param_3;
      if (7 < uVar12) {
        uVar8 = uVar12 & 0x3ffffffffffffff8;
        puVar7 = param_2 + 4;
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 8;
          *(undefined4 *)(puVar7 + -4) = uVar2;
          *(undefined4 *)((long)puVar7 + -0x1c) = uVar3;
          *(undefined4 *)(puVar7 + -3) = uVar2;
          *(undefined4 *)((long)puVar7 + -0x14) = uVar3;
          *(undefined4 *)(puVar7 + -2) = uVar2;
          *(undefined4 *)((long)puVar7 + -0xc) = uVar3;
          *(undefined4 *)(puVar7 + -1) = uVar2;
          *(undefined4 *)((long)puVar7 + -4) = uVar3;
          *(undefined4 *)puVar7 = uVar2;
          *(undefined4 *)((long)puVar7 + 4) = uVar3;
          *(undefined4 *)(puVar7 + 1) = uVar2;
          *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
          *(undefined4 *)(puVar7 + 2) = uVar2;
          *(undefined4 *)((long)puVar7 + 0x14) = uVar3;
          *(undefined4 *)(puVar7 + 3) = uVar2;
          *(undefined4 *)((long)puVar7 + 0x1c) = uVar3;
          puVar7 = puVar7 + 8;
        } while (uVar10 != 0);
        param_2 = param_2 + uVar8;
        if (uVar12 == uVar8) {
          return;
        }
      }
      do {
        puVar7 = param_2 + 1;
        *(undefined4 *)param_2 = uVar2;
        *(undefined4 *)((long)param_2 + 4) = uVar3;
        param_2 = puVar7;
      } while (puVar7 != puVar4);
      return;
    }
    uVar15 = param_3 * 8 - 8;
    uVar8 = uVar15 >> 3;
                    /* try { // try from 005b0998 to 006b09bf has its CatchHandler @ 005b0a7c */
    puVar7 = puVar4 + -param_3;
    uVar10 = uVar8 + 1;
    puVar5 = puVar4;
    puVar14 = puVar7;
                    /* try { // try from 005b09c0 to 006b0b1b has its CatchHandler @ 005b07dc */
    if (((uVar10 < 8) || (CARRY8(uVar15,(ulong)((long)puVar4 + 4)))) ||
       (CARRY8(uVar15,(long)puVar4 + param_3 * -8 + 4))) {
LAB_005b0f18:
      do {
        puVar9 = puVar14 + 1;
        *puVar5 = *puVar14;
        puVar5 = puVar5 + 1;
        puVar14 = puVar9;
      } while (puVar4 != puVar9);
    }
    else {
      if ((puVar4 < (undefined8 *)((long)puVar4 + (uVar8 - param_3) * 8 + 4) &&
           puVar7 < (undefined8 *)((long)puVar4 + param_3 * 8 + -4)) ||
         ((undefined8 *)((long)puVar4 + 4U) < puVar4 + ((uVar8 + 1) - param_3) &&
          (undefined8 *)((long)puVar4 + param_3 * -8 + 4) < puVar4 + uVar8 + 1)) goto LAB_005b0f18;
      uVar15 = uVar10 & 0x3ffffffffffffff8;
      uVar8 = uVar15;
      do {
        puVar14 = puVar5 + -param_3;
        uVar17 = *puVar14;
        uVar19 = puVar14[3];
        uVar18 = puVar14[2];
        uVar21 = puVar14[5];
        uVar20 = puVar14[4];
        uVar23 = puVar14[7];
        uVar22 = puVar14[6];
        uVar8 = uVar8 - 8;
        puVar5[1] = puVar14[1];
        *puVar5 = uVar17;
        puVar5[3] = uVar19;
        puVar5[2] = uVar18;
        puVar5[5] = uVar21;
        puVar5[4] = uVar20;
        puVar5[7] = uVar23;
        puVar5[6] = uVar22;
                    /* catch() { ... } // from try @ 005b0998 with catch @ 005b0a7c */
        puVar5 = puVar5 + 8;
      } while (uVar8 != 0);
      puVar5 = puVar4 + uVar15;
      puVar14 = puVar7 + uVar15;
      if (uVar10 != uVar15) goto LAB_005b0f18;
    }
    uVar8 = (long)puVar7 - (long)param_2;
    *(undefined8 **)(this + 8) = puVar4 + param_3;
    if (0 < (long)uVar8) {
      uVar12 = uVar8 >> 3;
      puVar5 = puVar4;
      uVar15 = uVar12;
      if (0x3f < uVar8) {
        uVar13 = uVar12 - 1;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar13;
        if (((puVar4 + -1 + -uVar13 <= puVar4 + -1) && (SUB168(auVar1 * ZEXT816(8),8) == 0)) &&
           ((puVar4 + ~param_3 + -uVar13 <= puVar4 + ~param_3 &&
            ((puVar14 = (undefined8 *)((long)puVar4 + -4), puVar14 + -uVar13 <= puVar14 &&
             (uVar6 = (long)puVar4 + param_3 * -8 + -4, uVar6 + uVar13 * -8 <= uVar6)))))) {
          lVar16 = -2;
          if (uVar8 == 0) {
            lVar16 = -1;
          }
          uVar13 = lVar16 + param_3 + uVar12;
                    /* catch() { ... } // from try @ 005b0f88 with catch @ 005b106c */
          if (((undefined8 *)((long)puVar4 + param_3 * -8 + -4) <= puVar4 + (-2 - (lVar16 + uVar12))
               || puVar14 <= puVar4 + (-2 - uVar13)) &&
             (puVar7 <= (undefined8 *)((long)puVar4 + ~(lVar16 + uVar12) * 8 + -4) ||
              puVar4 <= (undefined8 *)((long)puVar4 + ~uVar13 * 8 + -4))) {
            uVar15 = uVar8 >> 3 & 7;
            lVar16 = uVar12 - uVar15;
            puVar5 = puVar4 + (uVar15 - uVar12);
            puVar7 = puVar7 + (uVar15 - uVar12);
            do {
                    /* catch() { ... } // from try @ 005b0ebc with catch @ 005b10dc */
              uVar17 = puVar4[-4 - param_3];
              uVar19 = puVar4[-1 - param_3];
              uVar18 = puVar4[-2 - param_3];
              uVar21 = puVar4[-7 - param_3];
              uVar20 = puVar4[-8 - param_3];
              uVar23 = puVar4[-5 - param_3];
              uVar22 = puVar4[-6 - param_3];
                    /* catch() { ... } // from try @ 005b0ecc with catch @ 005b10e8 */
              lVar16 = lVar16 + -8;
              puVar4[-3] = puVar4[-3 - param_3];
              puVar4[-4] = uVar17;
              puVar4[-1] = uVar19;
              puVar4[-2] = uVar18;
              puVar4[-7] = uVar21;
              puVar4[-8] = uVar20;
              puVar4[-5] = uVar23;
              puVar4[-6] = uVar22;
              puVar4 = puVar4 + -8;
            } while (lVar16 != 0);
            if (uVar15 == 0) goto LAB_005b0f68;
          }
        }
      }
      lVar16 = uVar15 + 1;
      do {
        puVar7 = puVar7 + -1;
        puVar5 = puVar5 + -1;
        lVar16 = lVar16 + -1;
        *puVar5 = *puVar7;
      } while (1 < lVar16);
    }
LAB_005b0f68:
    puVar4 = param_2;
    if (7 < uVar10) {
      uVar15 = uVar10 & 0x3ffffffffffffff8;
      puVar4 = param_2 + uVar15;
      puVar7 = param_2 + 4;
                    /* try { // try from 005b0f88 to 006b0faf has its CatchHandler @ 005b106c */
      uVar8 = uVar15;
      do {
        uVar8 = uVar8 - 8;
        *(undefined4 *)(puVar7 + -4) = uVar2;
        *(undefined4 *)((long)puVar7 + -0x1c) = uVar3;
        *(undefined4 *)(puVar7 + -3) = uVar2;
        *(undefined4 *)((long)puVar7 + -0x14) = uVar3;
        *(undefined4 *)(puVar7 + -2) = uVar2;
        *(undefined4 *)((long)puVar7 + -0xc) = uVar3;
        *(undefined4 *)(puVar7 + -1) = uVar2;
        *(undefined4 *)((long)puVar7 + -4) = uVar3;
        *(undefined4 *)puVar7 = uVar2;
        *(undefined4 *)((long)puVar7 + 4) = uVar3;
        *(undefined4 *)(puVar7 + 1) = uVar2;
        *(undefined4 *)((long)puVar7 + 0xc) = uVar3;
        *(undefined4 *)(puVar7 + 2) = uVar2;
        *(undefined4 *)((long)puVar7 + 0x14) = uVar3;
        *(undefined4 *)(puVar7 + 3) = uVar2;
        *(undefined4 *)((long)puVar7 + 0x1c) = uVar3;
        puVar7 = puVar7 + 8;
      } while (uVar8 != 0);
      if (uVar10 == uVar15) {
        return;
      }
    }
    do {
      puVar7 = puVar4 + 1;
                    /* try { // try from 005b0fb0 to 006b110b has its CatchHandler @ 005b0dcc */
      *(undefined4 *)puVar4 = uVar2;
      *(undefined4 *)((long)puVar4 + 4) = uVar3;
      puVar4 = puVar7;
    } while (puVar7 != param_2 + param_3);
    return;
  }
  lVar16 = *(long *)this;
  uVar10 = (long)puVar4 - lVar16 >> 3;
  if (0x1fffffffffffffff - uVar10 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("vector::_M_fill_insert");
  }
  uVar8 = param_3;
  if (param_3 <= uVar10) {
    uVar8 = uVar10;
  }
  uVar15 = 0x1fffffffffffffff;
  if (!CARRY8(uVar8,uVar10) && uVar8 + uVar10 >> 0x3d == 0) {
    uVar15 = uVar8 + uVar10;
  }
  if (uVar15 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar4 = operator_new(uVar15 << 3);
  }
  lVar16 = (long)param_2 - lVar16 >> 3;
  puVar7 = puVar4 + lVar16;
  uVar10 = param_3;
  if (param_3 < 8) {
LAB_005b0ac8:
    do {
      uVar10 = uVar10 - 1;
      *puVar7 = *param_4;
      puVar7 = puVar7 + 1;
    } while (uVar10 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 005b0b1c with catch @ 005b0bb0 */
    if ((puVar7 < (undefined8 *)((long)param_4 + 1U) &&
         param_4 < (undefined8 *)((long)(puVar4 + lVar16 + param_3) - 4U)) ||
       ((long)puVar7 + 4U < (long)param_4 + 5U &&
        (undefined8 *)((long)param_4 + 4U) < puVar4 + lVar16 + param_3)) goto LAB_005b0ac8;
    uVar2 = *(undefined4 *)param_4;
    uVar8 = param_3 & 0xfffffffffffffff8;
    puVar7 = puVar7 + uVar8;
    uVar3 = *(undefined4 *)((long)param_4 + 4);
    puVar5 = puVar4 + lVar16 + 4;
    uVar10 = uVar8;
    do {
      uVar10 = uVar10 - 8;
      *(undefined4 *)(puVar5 + -4) = uVar2;
      *(undefined4 *)((long)puVar5 + -0x1c) = uVar3;
      *(undefined4 *)(puVar5 + -3) = uVar2;
      *(undefined4 *)((long)puVar5 + -0x14) = uVar3;
      *(undefined4 *)(puVar5 + -2) = uVar2;
      *(undefined4 *)((long)puVar5 + -0xc) = uVar3;
      *(undefined4 *)(puVar5 + -1) = uVar2;
      *(undefined4 *)((long)puVar5 + -4) = uVar3;
      *(undefined4 *)puVar5 = uVar2;
      *(undefined4 *)((long)puVar5 + 4) = uVar3;
      *(undefined4 *)(puVar5 + 1) = uVar2;
      *(undefined4 *)((long)puVar5 + 0xc) = uVar3;
      *(undefined4 *)(puVar5 + 2) = uVar2;
      *(undefined4 *)((long)puVar5 + 0x14) = uVar3;
      *(undefined4 *)(puVar5 + 3) = uVar2;
      *(undefined4 *)((long)puVar5 + 0x1c) = uVar3;
      puVar5 = puVar5 + 8;
    } while (uVar10 != 0);
    uVar10 = param_3 - uVar8;
    if (uVar8 != param_3) goto LAB_005b0ac8;
  }
  puVar5 = *(undefined8 **)this;
  puVar7 = puVar4;
  if (puVar5 != param_2) {
                    /* catch() { ... } // from try @ 005b08cc with catch @ 005b0aec */
    uVar8 = (long)param_2 + (-8 - (long)puVar5);
    uVar10 = (uVar8 >> 3) + 1;
                    /* catch() { ... } // from try @ 005b08dc with catch @ 005b0af8 */
    puVar14 = puVar5;
    if (uVar10 < 8) {
LAB_005b0b08:
      do {
        puVar9 = puVar14 + 1;
        *puVar7 = *puVar14;
        puVar7 = puVar7 + 1;
        puVar14 = puVar9;
      } while (param_2 != puVar9);
    }
    else {
      uVar12 = uVar8 & 0xfffffffffffffff8;
      if ((puVar4 < (undefined8 *)((long)puVar5 + uVar12 + 4) &&
           puVar5 < (undefined8 *)((long)puVar4 + uVar12 + 4)) ||
         ((long)puVar4 + 4U < (long)puVar5 + uVar12 + 8 &&
          (undefined4 *)((long)puVar5 + 4U) < (undefined4 *)((long)puVar4 + uVar12 + 8)))
      goto LAB_005b0b08;
      uVar13 = uVar10 & 0x3ffffffffffffff8;
      puVar7 = puVar4 + uVar13;
      puVar14 = puVar5 + uVar13;
      puVar9 = puVar4 + 4;
      puVar11 = puVar5 + 4;
      uVar12 = uVar13;
      do {
        uVar17 = puVar11[-4];
        uVar19 = puVar11[-1];
        uVar18 = puVar11[-2];
        uVar21 = puVar11[1];
        uVar20 = *puVar11;
        uVar23 = puVar11[3];
        uVar22 = puVar11[2];
        uVar12 = uVar12 - 8;
        puVar9[-3] = puVar11[-3];
        puVar9[-4] = uVar17;
        puVar9[-1] = uVar19;
        puVar9[-2] = uVar18;
        puVar9[1] = uVar21;
        *puVar9 = uVar20;
        puVar9[3] = uVar23;
        puVar9[2] = uVar22;
        puVar9 = puVar9 + 8;
        puVar11 = puVar11 + 8;
      } while (uVar12 != 0);
      if (uVar10 != uVar13) goto LAB_005b0b08;
    }
                    /* try { // try from 005b0b1c to 006b0b43 has its CatchHandler @ 005b0bb0 */
    puVar7 = (undefined8 *)((long)puVar4 + (uVar8 & 0xfffffffffffffff8) + 8);
  }
  puVar9 = *(undefined8 **)(this + 8);
  puVar14 = puVar7 + param_3;
  if ((long)puVar9 - (long)param_2 == 0) goto LAB_005b0b6c;
  uVar8 = (long)puVar9 + (-8 - (long)param_2);
  uVar10 = (uVar8 >> 3) + 1;
                    /* try { // try from 005b0b44 to 006b0c1f has its CatchHandler @ 005b07dc */
  puVar11 = puVar14;
  if (uVar10 < 8) {
LAB_005b0b50:
    do {
      puVar7 = param_2 + 1;
      *puVar11 = *param_2;
      puVar11 = puVar11 + 1;
      param_2 = puVar7;
    } while (puVar9 != puVar7);
  }
  else {
    uVar12 = ((long)puVar9 - (long)param_2) - 8U >> 3;
    if ((puVar14 < (undefined8 *)((long)param_2 + uVar12 * 8 + 4) &&
         param_2 < (undefined8 *)((long)puVar7 + (uVar12 + param_3) * 8 + 4)) ||
       ((undefined8 *)((long)puVar7 + param_3 * 8 + 4) < param_2 + uVar12 + 1 &&
        (undefined8 *)((long)param_2 + 4U) < puVar7 + uVar12 + param_3 + 1)) goto LAB_005b0b50;
    uVar13 = uVar10 & 0x3ffffffffffffff8;
    puVar11 = param_2 + 4;
    param_2 = param_2 + uVar13;
    puVar7 = puVar7 + param_3 + 4;
    uVar12 = uVar13;
    do {
      uVar17 = puVar11[-4];
      uVar19 = puVar11[-1];
      uVar18 = puVar11[-2];
      uVar21 = puVar11[1];
      uVar20 = *puVar11;
      uVar23 = puVar11[3];
      uVar22 = puVar11[2];
      uVar12 = uVar12 - 8;
      puVar7[-3] = puVar11[-3];
      puVar7[-4] = uVar17;
      puVar7[-1] = uVar19;
      puVar7[-2] = uVar18;
      puVar7[1] = uVar21;
      *puVar7 = uVar20;
      puVar7[3] = uVar23;
      puVar7[2] = uVar22;
      puVar7 = puVar7 + 8;
      puVar11 = puVar11 + 8;
    } while (uVar12 != 0);
    puVar11 = puVar14 + uVar13;
    if (uVar10 != uVar13) goto LAB_005b0b50;
  }
  puVar14 = (undefined8 *)((long)puVar14 + (uVar8 & 0xfffffffffffffff8) + 8);
LAB_005b0b6c:
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  *(undefined8 **)this = puVar4;
  *(undefined8 **)(this + 8) = puVar14;
  *(undefined8 **)(this + 0x10) = puVar4 + uVar15;
  return;
}



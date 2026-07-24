/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c07cc
 * Function: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
 * Signature: undefined __thiscall operator=(vector<Caver::Vector2,std::allocator<Caver::Vector2>> * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Vector2, std::allocator<Caver::Vector2>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<Caver::Vector2, std::allocator<Caver::Vector2> > const&)
    */

vector<Caver::Vector2,std::allocator<Caver::Vector2>> * __thiscall
std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::operator=
          (vector<Caver::Vector2,std::allocator<Caver::Vector2>> *this,vector *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (param_1 == (vector *)this) {
    return this;
  }
  puVar10 = *(undefined8 **)param_1;
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar12 = *(undefined8 **)this;
  uVar13 = (long)puVar4 - (long)puVar10;
  uVar14 = (long)uVar13 >> 3;
  if (uVar14 <= (ulong)(*(long *)(this + 0x10) - (long)puVar12 >> 3)) {
    puVar3 = *(undefined8 **)(this + 8);
    uVar5 = (long)puVar3 - (long)puVar12;
    uVar6 = (long)uVar5 >> 3;
    if (uVar14 <= uVar6) {
      if (0 < (long)uVar13) {
        uVar6 = uVar13 >> 3;
        puVar4 = puVar12;
        if (0x3f < uVar13) {
          if (((undefined8 *)((long)puVar10 + uVar6 * 8 + -4) <= puVar12 ||
               (undefined8 *)((long)puVar12 + uVar6 * 8 + -4) <= puVar10) &&
             (puVar10 + uVar6 <= (undefined8 *)((long)puVar12 + 4U) ||
              puVar12 + uVar6 <= (undefined8 *)((long)puVar10 + 4U))) {
            uVar5 = uVar6 & 0x1ffffffffffffff8;
            lVar7 = 0;
            uVar13 = uVar5;
            do {
              puVar4 = (undefined8 *)((long)puVar10 + lVar7);
              uVar15 = *puVar4;
              uVar17 = puVar4[3];
              uVar16 = puVar4[2];
              uVar19 = puVar4[5];
              uVar18 = puVar4[4];
              uVar21 = puVar4[7];
              uVar20 = puVar4[6];
              puVar3 = (undefined8 *)((long)puVar12 + lVar7);
              uVar13 = uVar13 - 8;
              lVar7 = lVar7 + 0x40;
              puVar3[1] = puVar4[1];
              *puVar3 = uVar15;
              puVar3[3] = uVar17;
              puVar3[2] = uVar16;
              puVar3[5] = uVar19;
              puVar3[4] = uVar18;
              puVar3[7] = uVar21;
              puVar3[6] = uVar20;
            } while (uVar13 != 0);
            bVar1 = uVar6 == uVar5;
            uVar6 = uVar6 - uVar5;
            puVar4 = puVar12 + uVar5;
            puVar10 = puVar10 + uVar5;
            if (bVar1) goto LAB_003c0928;
          }
        }
        lVar7 = uVar6 + 1;
        do {
          lVar7 = lVar7 + -1;
          *puVar4 = *puVar10;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        } while (1 < lVar7);
      }
      goto LAB_003c0928;
    }
    puVar2 = puVar10 + uVar6;
    if (0 < (long)uVar5) {
      uVar13 = uVar5 >> 3;
      puVar8 = puVar12;
      puVar9 = puVar10;
      if (0x3f < uVar5) {
        if (((undefined8 *)((long)puVar10 + uVar13 * 8 + -4) <= puVar12 ||
             (undefined8 *)((long)puVar12 + uVar13 * 8 + -4) <= puVar10) &&
           (puVar10 + uVar13 <= (undefined8 *)((long)puVar12 + 4U) ||
            puVar12 + uVar13 <= (undefined8 *)((long)puVar10 + 4U))) {
          uVar11 = uVar13 & 0x1ffffffffffffff8;
          uVar5 = uVar11;
          puVar8 = puVar12 + 4;
          puVar9 = puVar10 + 4;
          do {
            uVar15 = puVar9[-4];
            uVar17 = puVar9[-1];
            uVar16 = puVar9[-2];
            uVar19 = puVar9[1];
            uVar18 = *puVar9;
            uVar21 = puVar9[3];
            uVar20 = puVar9[2];
            uVar5 = uVar5 - 8;
            puVar8[-3] = puVar9[-3];
            puVar8[-4] = uVar15;
            puVar8[-1] = uVar17;
            puVar8[-2] = uVar16;
            puVar8[1] = uVar19;
            *puVar8 = uVar18;
            puVar8[3] = uVar21;
            puVar8[2] = uVar20;
            puVar8 = puVar8 + 8;
            puVar9 = puVar9 + 8;
          } while (uVar5 != 0);
          bVar1 = uVar13 == uVar11;
          uVar13 = uVar13 - uVar11;
          puVar8 = puVar12 + uVar11;
          puVar9 = puVar10 + uVar11;
          if (bVar1) goto LAB_003c08c0;
        }
      }
      lVar7 = uVar13 + 1;
      do {
        lVar7 = lVar7 + -1;
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (1 < lVar7);
    }
LAB_003c08c0:
    if (puVar2 != puVar4) {
      uVar5 = (long)puVar4 + (~uVar6 * 8 - (long)puVar10) >> 3;
      uVar13 = uVar5 + 1;
      if (7 < uVar13) {
        if (((undefined8 *)((long)puVar10 + (uVar6 + uVar5) * 8 + 4) <= puVar3 ||
             (undefined8 *)((long)puVar3 + uVar5 * 8 + 4) <= puVar2) &&
           (puVar10 + uVar6 + uVar5 + 1 <= (undefined8 *)((long)puVar3 + 4U) ||
            puVar3 + uVar5 + 1 <= (undefined8 *)((long)puVar10 + uVar6 * 8 + 4))) {
          uVar5 = uVar13 & 0x3ffffffffffffff8;
          puVar8 = puVar3 + 4;
          puVar3 = puVar3 + uVar5;
          puVar2 = puVar2 + uVar5;
          puVar10 = puVar10 + uVar6 + 4;
          uVar6 = uVar5;
          do {
            uVar15 = puVar10[-4];
            uVar17 = puVar10[-1];
            uVar16 = puVar10[-2];
            uVar19 = puVar10[1];
            uVar18 = *puVar10;
            uVar21 = puVar10[3];
            uVar20 = puVar10[2];
            uVar6 = uVar6 - 8;
            puVar8[-3] = puVar10[-3];
            puVar8[-4] = uVar15;
            puVar8[-1] = uVar17;
            puVar8[-2] = uVar16;
            puVar8[1] = uVar19;
            *puVar8 = uVar18;
            puVar8[3] = uVar21;
            puVar8[2] = uVar20;
            puVar8 = puVar8 + 8;
            puVar10 = puVar10 + 8;
          } while (uVar6 != 0);
          if (uVar13 == uVar5) goto LAB_003c0928;
        }
      }
      do {
        puVar10 = puVar2 + 1;
        *puVar3 = *puVar2;
        puVar2 = puVar10;
        puVar3 = puVar3 + 1;
      } while (puVar4 != puVar10);
    }
    goto LAB_003c0928;
  }
  if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00665294();
  }
  puVar12 = operator_new(uVar13);
  if (puVar10 != puVar4) {
    uVar6 = (uVar13 - 8 >> 3) + 1;
    puVar3 = puVar12;
    if (7 < uVar6) {
      uVar13 = uVar13 - 8 & 0xfffffffffffffff8;
      if (((undefined8 *)((long)puVar10 + uVar13 + 4) <= puVar12 ||
           (undefined8 *)((long)puVar12 + (uVar13 | 4)) <= puVar10) &&
         ((long)puVar10 + uVar13 + 8 <= (long)puVar12 + 4U ||
          (long)puVar12 + uVar13 + 8 <= (long)puVar10 + 4U)) {
        uVar5 = uVar6 & 0x3ffffffffffffff8;
        puVar3 = puVar12 + 4;
        puVar2 = puVar10 + 4;
        uVar13 = uVar5;
        do {
          uVar15 = puVar2[-4];
          uVar17 = puVar2[-1];
          uVar16 = puVar2[-2];
          uVar19 = puVar2[1];
          uVar18 = *puVar2;
          uVar21 = puVar2[3];
          uVar20 = puVar2[2];
          uVar13 = uVar13 - 8;
          puVar3[-3] = puVar2[-3];
          puVar3[-4] = uVar15;
          puVar3[-1] = uVar17;
          puVar3[-2] = uVar16;
          puVar3[1] = uVar19;
          *puVar3 = uVar18;
          puVar3[3] = uVar21;
          puVar3[2] = uVar20;
          puVar3 = puVar3 + 8;
          puVar2 = puVar2 + 8;
        } while (uVar13 != 0);
        puVar3 = puVar12 + uVar5;
        puVar10 = puVar10 + uVar5;
        if (uVar6 == uVar5) goto LAB_003c0850;
      }
    }
    do {
      puVar2 = puVar10 + 1;
      *puVar3 = *puVar10;
      puVar3 = puVar3 + 1;
      puVar10 = puVar2;
    } while (puVar4 != puVar2);
  }
LAB_003c0850:
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 0x10) = puVar12 + uVar14;
LAB_003c0928:
  *(undefined8 **)(this + 8) = puVar12 + uVar14;
  return this;
}



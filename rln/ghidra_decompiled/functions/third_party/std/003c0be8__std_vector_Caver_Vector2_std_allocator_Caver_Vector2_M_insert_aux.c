/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c0be8
 * Function: std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::Vector2,std::allocator<Caver::Vector2>> * this, __normal_iterator param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::Vector2, std::allocator<Caver::Vector2>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Vector2*, std::vector<Caver::Vector2,
   std::allocator<Caver::Vector2> > >, Caver::Vector2 const&) */

void __thiscall
std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_insert_aux
          (vector<Caver::Vector2,std::allocator<Caver::Vector2>> *this,undefined8 *param_2,
          undefined8 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 != *(undefined8 **)(this + 0x10)) {
    puVar15 = puVar5 + -1;
    *puVar5 = *puVar15;
    *(undefined8 **)(this + 8) = puVar5 + 1;
    uVar2 = *(undefined4 *)param_3;
    uVar3 = *(undefined4 *)((long)param_3 + 4);
    uVar7 = (long)puVar15 - (long)param_2;
    if (0 < (long)uVar7) {
      uVar10 = uVar7 >> 3;
      if (0x1f < uVar7) {
        uVar7 = uVar7 >> 3 & 3;
        lVar8 = uVar10 - uVar7;
        lVar11 = uVar7 - uVar10;
        puVar15 = puVar15 + lVar11;
        puVar4 = puVar5 + -5;
        do {
          lVar8 = lVar8 + -4;
          puVar4[4] = puVar4[3];
          puVar4[3] = puVar4[2];
          puVar4[2] = puVar4[1];
          puVar4[1] = *puVar4;
          puVar4 = puVar4 + -4;
        } while (lVar8 != 0);
        uVar10 = uVar7;
        puVar5 = puVar5 + lVar11;
        if (uVar7 == 0) goto LAB_003c0cfc;
      }
      lVar8 = uVar10 + 1;
      do {
        puVar5 = puVar5 + -1;
        puVar15 = puVar15 + -1;
        lVar8 = lVar8 + -1;
        *puVar5 = *puVar15;
      } while (1 < lVar8);
    }
LAB_003c0cfc:
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((long)param_2 + 4) = uVar3;
    return;
  }
  puVar15 = *(undefined8 **)this;
  uVar10 = (long)puVar5 - (long)puVar15 >> 3;
  uVar7 = uVar10;
  if ((long)puVar5 - (long)puVar15 == 0) {
    uVar7 = 1;
  }
  uVar1 = 0x1fffffffffffffff;
  if (!CARRY8(uVar7,uVar10) && uVar7 + uVar10 >> 0x3d == 0) {
    uVar1 = uVar7 + uVar10;
  }
  if (uVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
    puVar5 = puVar15;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar4 = operator_new(uVar1 << 3);
    puVar5 = *(undefined8 **)this;
  }
  puVar4[(long)param_2 - (long)puVar15 >> 3] = *param_3;
  puVar15 = puVar4;
  if (puVar5 != param_2) {
    uVar10 = (long)param_2 + (-8 - (long)puVar5);
    uVar7 = (uVar10 >> 3) + 1;
    puVar9 = puVar5;
    if (uVar7 < 8) {
LAB_003c0d48:
      do {
        puVar6 = puVar9 + 1;
        *puVar15 = *puVar9;
        puVar15 = puVar15 + 1;
        puVar9 = puVar6;
      } while (param_2 != puVar6);
    }
    else {
      uVar13 = uVar10 & 0xfffffffffffffff8;
      if ((puVar4 < (undefined8 *)((long)puVar5 + uVar13 + 4) &&
           puVar5 < (undefined8 *)((long)puVar4 + uVar13 + 4)) ||
         ((long)puVar4 + 4U < (long)puVar5 + uVar13 + 8 &&
          (undefined4 *)((long)puVar5 + 4U) < (undefined4 *)((long)puVar4 + uVar13 + 8)))
      goto LAB_003c0d48;
      uVar14 = uVar7 & 0x3ffffffffffffff8;
      puVar15 = puVar4 + uVar14;
      puVar9 = puVar5 + uVar14;
      puVar6 = puVar4 + 4;
      puVar12 = puVar5 + 4;
      uVar13 = uVar14;
      do {
        uVar16 = puVar12[-4];
        uVar18 = puVar12[-1];
        uVar17 = puVar12[-2];
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        uVar22 = puVar12[3];
        uVar21 = puVar12[2];
        uVar13 = uVar13 - 8;
        puVar6[-3] = puVar12[-3];
        puVar6[-4] = uVar16;
        puVar6[-1] = uVar18;
        puVar6[-2] = uVar17;
        puVar6[1] = uVar20;
        *puVar6 = uVar19;
        puVar6[3] = uVar22;
        puVar6[2] = uVar21;
        puVar6 = puVar6 + 8;
        puVar12 = puVar12 + 8;
      } while (uVar13 != 0);
      if (uVar7 != uVar14) goto LAB_003c0d48;
    }
    puVar15 = (undefined8 *)((long)puVar4 + (uVar10 & 0xfffffffffffffff8) + 8);
  }
  puVar6 = *(undefined8 **)(this + 8);
  puVar9 = puVar15 + 1;
  if ((long)puVar6 - (long)param_2 == 0) goto LAB_003c0dac;
  uVar10 = (long)puVar6 + (-8 - (long)param_2);
  uVar7 = (uVar10 >> 3) + 1;
  puVar12 = puVar9;
  if (uVar7 < 8) {
LAB_003c0d90:
    do {
      puVar15 = param_2 + 1;
      *puVar12 = *param_2;
      puVar12 = puVar12 + 1;
      param_2 = puVar15;
    } while (puVar6 != puVar15);
  }
  else {
    uVar13 = ((long)puVar6 - (long)param_2) - 8U & 0xfffffffffffffff8;
    if ((puVar9 < (undefined8 *)((long)param_2 + uVar13 + 4) &&
         param_2 < (undefined8 *)((long)puVar15 + uVar13 + 0xc)) ||
       ((long)puVar15 + 0xcU < (long)param_2 + uVar13 + 8 &&
        (undefined4 *)((long)param_2 + 4U) < (undefined4 *)((long)puVar15 + uVar13 + 0x10)))
    goto LAB_003c0d90;
    uVar14 = uVar7 & 0x3ffffffffffffff8;
    puVar12 = param_2 + 4;
    param_2 = param_2 + uVar14;
    puVar15 = puVar15 + 5;
    uVar13 = uVar14;
    do {
      uVar16 = puVar12[-4];
      uVar18 = puVar12[-1];
      uVar17 = puVar12[-2];
      uVar20 = puVar12[1];
      uVar19 = *puVar12;
      uVar22 = puVar12[3];
      uVar21 = puVar12[2];
      uVar13 = uVar13 - 8;
      puVar15[-3] = puVar12[-3];
      puVar15[-4] = uVar16;
      puVar15[-1] = uVar18;
      puVar15[-2] = uVar17;
      puVar15[1] = uVar20;
      *puVar15 = uVar19;
      puVar15[3] = uVar22;
      puVar15[2] = uVar21;
      puVar15 = puVar15 + 8;
      puVar12 = puVar12 + 8;
    } while (uVar13 != 0);
    puVar12 = puVar9 + uVar14;
    if (uVar7 != uVar14) goto LAB_003c0d90;
  }
  puVar9 = (undefined8 *)((long)puVar9 + (uVar10 & 0xfffffffffffffff8) + 8);
LAB_003c0dac:
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  *(undefined8 **)this = puVar4;
  *(undefined8 **)(this + 8) = puVar9;
  *(undefined8 **)(this + 0x10) = puVar4 + uVar1;
  return;
}



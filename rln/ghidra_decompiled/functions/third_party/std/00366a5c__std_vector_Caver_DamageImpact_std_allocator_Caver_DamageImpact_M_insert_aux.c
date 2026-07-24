/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366a5c
 * Function: std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>> * this, __normal_iterator param_1, DamageImpact * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::DamageImpact, std::allocator<Caver::DamageImpact>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::DamageImpact*,
   std::vector<Caver::DamageImpact, std::allocator<Caver::DamageImpact> > >, Caver::DamageImpact
   const&) */

void __thiscall
std::vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>>::_M_insert_aux
          (vector<Caver::DamageImpact,std::allocator<Caver::DamageImpact>> *this,undefined8 *param_2
          ,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  puVar23 = *(undefined8 **)(this + 8);
  if (puVar23 == *(undefined8 **)(this + 0x10)) {
    lVar14 = *(long *)this;
    lVar12 = (long)puVar23 - lVar14;
    uVar15 = lVar12 >> 6;
    uVar13 = uVar15;
    if (lVar12 == 0) {
      uVar13 = 1;
    }
    uVar2 = 0x3ffffffffffffff;
    if (!CARRY8(uVar13,uVar15) && uVar13 + uVar15 >> 0x3a == 0) {
      uVar2 = uVar13 + uVar15;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      pvVar9 = operator_new(uVar2 << 6);
    }
    puVar23 = (undefined8 *)((long)pvVar9 + ((long)param_2 - lVar14 >> 6) * 0x40);
    *puVar23 = *param_3;
    lVar12 = param_3[1];
    puVar23[1] = lVar12;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
    uVar24 = param_3[2];
    puVar23[3] = param_3[3];
    puVar23[2] = uVar24;
    *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(param_3 + 5);
    puVar23[4] = param_3[4];
    uVar24 = *(undefined8 *)((long)param_3 + 0x2c);
    *(undefined8 *)((long)puVar23 + 0x34) = *(undefined8 *)((long)param_3 + 0x34);
    *(undefined8 *)((long)puVar23 + 0x2c) = uVar24;
    puVar23 = *(undefined8 **)this;
    pvVar18 = pvVar9;
    if (puVar23 != param_2) {
      lVar12 = 0;
      do {
        puVar22 = (undefined8 *)((long)puVar23 + lVar12);
        puVar19 = (undefined8 *)((long)pvVar9 + lVar12);
        *puVar19 = *puVar22;
        lVar14 = puVar22[1];
        puVar19[1] = lVar14;
        if (lVar14 != 0) {
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        }
        lVar12 = lVar12 + 0x40;
        puVar19[2] = puVar22[2];
        puVar19[3] = puVar22[3];
        *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(puVar22 + 5);
        puVar19[4] = puVar22[4];
        uVar24 = *(undefined8 *)((long)puVar22 + 0x2c);
        *(undefined8 *)((long)puVar19 + 0x34) = *(undefined8 *)((long)puVar22 + 0x34);
        *(undefined8 *)((long)puVar19 + 0x2c) = uVar24;
      } while (puVar22 + 8 != param_2);
      pvVar18 = (void *)((long)pvVar9 +
                        ((long)param_2 + (-0x40 - (long)puVar23) & 0xffffffffffffffc0U) + 0x40);
    }
    puVar16 = *(undefined8 **)(this + 8);
    puVar23 = (undefined8 *)((long)pvVar18 + 0x40);
    puVar22 = puVar23;
    puVar19 = param_2;
    if (puVar16 != param_2) {
      do {
        *puVar22 = *puVar19;
        lVar12 = puVar19[1];
        puVar22[1] = lVar12;
        if (lVar12 != 0) {
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        }
        puVar22[2] = puVar19[2];
        puVar22[3] = puVar19[3];
        *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(puVar19 + 5);
        puVar22[4] = puVar19[4];
        uVar24 = *(undefined8 *)((long)puVar19 + 0x2c);
        puVar1 = puVar19 + 8;
        *(undefined8 *)((long)puVar22 + 0x34) = *(undefined8 *)((long)puVar19 + 0x34);
        *(undefined8 *)((long)puVar22 + 0x2c) = uVar24;
        puVar22 = puVar22 + 8;
        puVar19 = puVar1;
      } while (puVar1 != puVar16);
      lVar12 = -0x40 - (long)param_2;
      param_2 = *(undefined8 **)(this + 8);
      puVar23 = (undefined8 *)
                ((long)puVar23 + ((long)puVar16 + lVar12 & 0xffffffffffffffc0U) + 0x40);
    }
    puVar22 = *(undefined8 **)this;
    if (puVar22 != param_2) {
      do {
        plVar10 = (long *)puVar22[1];
        if ((plVar10 != (long *)0x0) &&
           (iVar6 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar6, iVar6 == 0)) {
          (**(code **)(*plVar10 + 8))();
        }
        puVar22 = puVar22 + 8;
      } while (param_2 != puVar22);
      param_2 = *(undefined8 **)this;
    }
    if (param_2 != (undefined8 *)0x0) {
      operator_delete(param_2);
    }
    *(void **)this = pvVar9;
    *(undefined8 **)(this + 8) = puVar23;
    *(void **)(this + 0x10) = (void *)((long)pvVar9 + uVar2 * 0x40);
  }
  else {
    lVar12 = puVar23[-7];
    *puVar23 = puVar23[-8];
    puVar23[1] = lVar12;
    if (lVar12 != 0) {
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    }
    puVar23[3] = puVar23[-5];
    puVar23[2] = puVar23[-6];
    *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar23 + -3);
    puVar23[4] = puVar23[-4];
    *(undefined8 *)((long)puVar23 + 0x34) = *(undefined8 *)((long)puVar23 + -0xc);
    *(undefined8 *)((long)puVar23 + 0x2c) = *(undefined8 *)((long)puVar23 + -0x14);
    lVar12 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar12 + 0x40;
    uVar24 = *param_3;
    plVar10 = (long *)param_3[1];
    if (plVar10 != (long *)0x0) {
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    }
    uVar5 = *(undefined4 *)(param_3 + 5);
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar23 = (undefined8 *)(lVar12 + -0x40);
    uVar13 = (long)puVar23 - (long)param_2;
    uVar17 = param_3[4];
    uVar20 = *(undefined8 *)((long)param_3 + 0x2c);
    uVar21 = *(undefined8 *)((long)param_3 + 0x34);
    if (0 < (long)uVar13) {
      lVar12 = (uVar13 >> 6) + 1;
      do {
        lVar14 = puVar23[-7];
        *puVar23 = puVar23[-8];
        if (lVar14 != 0) {
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        }
        plVar8 = (long *)puVar23[1];
        puVar23[1] = lVar14;
        if ((plVar8 != (long *)0x0) &&
           (iVar6 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar6, iVar6 == 0)) {
          (**(code **)(*plVar8 + 8))();
        }
        lVar12 = lVar12 + -1;
        puVar23[3] = puVar23[-5];
        puVar23[2] = puVar23[-6];
        puVar23[4] = puVar23[-4];
        *(undefined4 *)(puVar23 + 5) = *(undefined4 *)(puVar23 + -3);
        *(undefined8 *)((long)puVar23 + 0x34) = *(undefined8 *)((long)puVar23 + -0xc);
        *(undefined8 *)((long)puVar23 + 0x2c) = *(undefined8 *)((long)puVar23 + -0x14);
        puVar23 = puVar23 + -8;
      } while (1 < lVar12);
    }
    *param_2 = uVar24;
    if (plVar10 != (long *)0x0) {
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    }
    plVar8 = (long *)param_2[1];
    param_2[1] = plVar10;
    if ((plVar8 != (long *)0x0) &&
       (iVar6 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*plVar8 + 8))();
    }
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined4 *)(param_2 + 5) = uVar5;
    *(undefined8 *)((long)param_2 + 0x2c) = uVar20;
    *(undefined8 *)((long)param_2 + 0x34) = uVar21;
    param_2[4] = uVar17;
    if ((plVar10 != (long *)0x0) &&
       (iVar6 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar6, iVar6 == 0)) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if (*(long *)(lVar7 + 0x28) == lVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054a21c
 * Function: std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>> * this, __normal_iterator param_1, EdgeInfo * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MeshOptimizer::EdgeInfo, std::allocator<Caver::MeshOptimizer::EdgeInfo>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshOptimizer::EdgeInfo*,
   std::vector<Caver::MeshOptimizer::EdgeInfo, std::allocator<Caver::MeshOptimizer::EdgeInfo> > >,
   Caver::MeshOptimizer::EdgeInfo const&) */

void __thiscall
std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>::
_M_insert_aux(vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
              *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = *(undefined8 **)(this + 8);
  if (puVar8 != *(undefined8 **)(this + 0x10)) {
    *puVar8 = puVar8[-1];
    lVar7 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar7 + 8;
    uVar4 = *param_3;
    puVar8 = (undefined8 *)(lVar7 + -8);
    uVar9 = (long)puVar8 - (long)param_2;
    if (0 < (long)uVar9) {
      lVar7 = (uVar9 >> 3) + 1;
      do {
        lVar7 = lVar7 + -1;
        *puVar8 = puVar8[-1];
        puVar8 = puVar8 + -1;
      } while (1 < lVar7);
    }
    *param_2 = uVar4;
    return;
  }
  puVar13 = *(undefined8 **)this;
  uVar5 = (long)puVar8 - (long)puVar13 >> 3;
  uVar9 = uVar5;
  if ((long)puVar8 - (long)puVar13 == 0) {
    uVar9 = 1;
  }
  uVar1 = 0x1fffffffffffffff;
  if (!CARRY8(uVar9,uVar5) && uVar9 + uVar5 >> 0x3d == 0) {
    uVar1 = uVar9 + uVar5;
  }
  if (uVar1 == 0) {
    puVar3 = (undefined8 *)0x0;
    puVar8 = puVar13;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar3 = operator_new(uVar1 << 3);
    puVar8 = *(undefined8 **)this;
  }
  puVar3[(long)param_2 - (long)puVar13 >> 3] = *param_3;
  puVar13 = puVar3;
  if (puVar8 != param_2) {
    uVar5 = (long)param_2 + (-8 - (long)puVar8);
    uVar9 = (uVar5 >> 3) + 1;
    if ((uVar9 < 4) ||
       ((lVar7 = (uVar5 & 0xfffffffffffffff8) + 8, puVar3 < (undefined8 *)((long)puVar8 + lVar7) &&
        (puVar8 < (undefined8 *)((long)puVar3 + lVar7))))) {
LAB_0054a398:
      do {
        puVar6 = puVar8 + 1;
        *puVar13 = *puVar8;
        puVar13 = puVar13 + 1;
        puVar8 = puVar6;
      } while (param_2 != puVar6);
    }
    else {
      uVar12 = uVar9 & 0x3ffffffffffffffc;
      puVar13 = puVar8 + 2;
      puVar8 = puVar8 + uVar12;
      puVar6 = puVar3 + 2;
      uVar10 = uVar12;
      do {
        puVar11 = puVar13 + -1;
        uVar4 = puVar13[-2];
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar10 = uVar10 - 4;
        puVar6[-1] = *puVar11;
        puVar6[-2] = uVar4;
        puVar6[1] = uVar15;
        *puVar6 = uVar14;
        puVar6 = puVar6 + 4;
      } while (uVar10 != 0);
      puVar13 = puVar3 + uVar12;
      if (uVar9 != uVar12) goto LAB_0054a398;
    }
    puVar13 = (undefined8 *)((long)puVar3 + (uVar5 & 0xfffffffffffffff8) + 8);
  }
  puVar6 = *(undefined8 **)(this + 8);
  puVar8 = puVar13 + 1;
  if ((long)puVar6 - (long)param_2 == 0) goto LAB_0054a470;
  uVar5 = (long)puVar6 + (-8 - (long)param_2);
  uVar9 = (uVar5 >> 3) + 1;
  puVar11 = puVar8;
  if ((uVar9 < 4) ||
     ((uVar10 = ((long)puVar6 - (long)param_2) - 8U & 0xfffffffffffffff8,
      puVar8 < (undefined8 *)((long)param_2 + uVar10 + 8) &&
      (param_2 < (undefined8 *)((long)puVar13 + uVar10 + 0x10))))) {
LAB_0054a454:
    do {
      puVar13 = param_2 + 1;
      *puVar11 = *param_2;
      puVar11 = puVar11 + 1;
      param_2 = puVar13;
    } while (puVar6 != puVar13);
  }
  else {
    uVar12 = uVar9 & 0x3ffffffffffffffc;
    puVar11 = param_2 + 2;
    param_2 = param_2 + uVar12;
    puVar13 = puVar13 + 3;
    uVar10 = uVar12;
    do {
      puVar2 = puVar11 + -1;
      uVar4 = puVar11[-2];
      uVar15 = puVar11[1];
      uVar14 = *puVar11;
      puVar11 = puVar11 + 4;
      uVar10 = uVar10 - 4;
      puVar13[-1] = *puVar2;
      puVar13[-2] = uVar4;
      puVar13[1] = uVar15;
      *puVar13 = uVar14;
      puVar13 = puVar13 + 4;
    } while (uVar10 != 0);
    puVar11 = puVar8 + uVar12;
    if (uVar9 != uVar12) goto LAB_0054a454;
  }
  puVar8 = (undefined8 *)((long)puVar8 + (uVar5 & 0xfffffffffffffff8) + 8);
LAB_0054a470:
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 **)this = puVar3;
  *(undefined8 **)(this + 8) = puVar8;
  *(undefined8 **)(this + 0x10) = puVar3 + uVar1;
  return;
}



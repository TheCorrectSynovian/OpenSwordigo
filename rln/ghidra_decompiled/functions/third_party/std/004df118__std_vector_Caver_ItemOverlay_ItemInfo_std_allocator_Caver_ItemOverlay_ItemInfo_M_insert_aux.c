/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004df118
 * Function: std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>> * this, __normal_iterator param_1, ItemInfo * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::ItemOverlay::ItemInfo, std::allocator<Caver::ItemOverlay::ItemInfo>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ItemOverlay::ItemInfo*,
   std::vector<Caver::ItemOverlay::ItemInfo, std::allocator<Caver::ItemOverlay::ItemInfo> > >,
   Caver::ItemOverlay::ItemInfo const&) */

void __thiscall
std::vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>::
_M_insert_aux(vector<Caver::ItemOverlay::ItemInfo,std::allocator<Caver::ItemOverlay::ItemInfo>>
              *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004df10c with catch @ 004df11c
                        */
                    /* catch() { ... } // from try @ 004df16c with catch @ 004df120
                       catch() { ... } // from try @ 004df1b0 with catch @ 004df120 */
  puVar7 = *(undefined8 **)(this + 8);
  if (puVar7 == *(undefined8 **)(this + 0x10)) {
    lVar11 = *(long *)this;
    lVar10 = (long)puVar7 - lVar11;
    uVar9 = (lVar10 >> 3) * -0x5555555555555555;
    uVar2 = uVar9;
    if (lVar10 == 0) {
      uVar2 = 1;
    }
    uVar1 = 0xaaaaaaaaaaaaaaa;
    if (!CARRY8(uVar2,uVar9) && uVar2 + uVar9 < 0xaaaaaaaaaaaaaab) {
      uVar1 = uVar2 + uVar9;
    }
    if (uVar1 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar7 = operator_new(uVar1 * 0x18);
    }
    lVar10 = (long)param_2 - lVar11 >> 3;
    puVar7[lVar10] = *param_3;
    lVar11 = param_3[1];
    (puVar7 + lVar10)[1] = lVar11;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
    }
    *(undefined4 *)(puVar7 + lVar10 + 2) = *(undefined4 *)(param_3 + 2);
    puVar14 = *(undefined8 **)this;
    puVar6 = puVar7;
    for (puVar15 = puVar14; puVar15 != param_2; puVar15 = puVar15 + 3) {
      *puVar6 = *puVar15;
      lVar10 = puVar15[1];
      puVar6[1] = lVar10;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
      }
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar15 + 2);
      puVar6 = puVar6 + 3;
    }
    puVar15 = *(undefined8 **)(this + 8);
    for (; puVar5 = puVar6 + 3, puVar15 != param_2; param_2 = param_2 + 3) {
      *puVar5 = *param_2;
      lVar10 = param_2[1];
      puVar6[4] = lVar10;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
      }
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(param_2 + 2);
      puVar6 = puVar5;
    }
    if (puVar14 != puVar15) {
      do {
        plVar12 = (long *)puVar14[1];
        if ((plVar12 != (long *)0x0) &&
           (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          lVar10 = plVar12[2];
          plVar12[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        puVar14 = puVar14 + 3;
      } while (puVar15 != puVar14);
      puVar14 = *(undefined8 **)this;
    }
    if (puVar14 != (undefined8 *)0x0) {
      operator_delete(puVar14);
    }
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar5;
    *(undefined8 **)(this + 0x10) = puVar7 + uVar1 * 3;
  }
  else {
    puVar15 = puVar7 + -3;
    lVar10 = puVar7[-2];
    *puVar7 = *puVar15;
    puVar7[1] = lVar10;
    if (lVar10 != 0) {
                    /* try { // try from 004df164 to 005df16b has its CatchHandler @ 004df1a4 */
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
                    /* try { // try from 004df16c to 005df1a7 has its CatchHandler @ 004df120 */
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar7 + -1);
    *(undefined8 **)(this + 8) = puVar7 + 3;
    uVar3 = *param_3;
    plVar12 = (long *)param_3[1];
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
    uVar4 = *(undefined4 *)(param_3 + 2);
    if (0 < (long)puVar15 - (long)param_2) {
                    /* catch() { ... } // from try @ 004df164 with catch @ 004df1a4 */
                    /* try { // try from 004df1a8 to 005df1af has its CatchHandler @ 004df1b8 */
      lVar10 = (ulong)((long)puVar15 - (long)param_2) / 0x18 + 1;
                    /* try { // try from 004df1b0 to 005df1bb has its CatchHandler @ 004df120 */
      do {
        uVar8 = puVar15[-3];
                    /* catch() { ... } // from try @ 004df1a8 with catch @ 004df1b8 */
        lVar11 = puVar15[-2];
        if (lVar11 != 0) {
                    /* catch() { ... } // from try @ 004df1d4 with catch @ 004df1c0 */
          *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
        }
        plVar13 = (long *)puVar15[1];
                    /* try { // try from 004df1d0 to 005df1d3 has its CatchHandler @ 004df1e4 */
        *puVar15 = uVar8;
        puVar15[1] = lVar11;
                    /* try { // try from 004df1d4 to 005df1f7 has its CatchHandler @ 004df1c0 */
                    /* catch() { ... } // from try @ 004df1d0 with catch @ 004df1e4 */
        if ((plVar13 != (long *)0x0) &&
           (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          lVar11 = plVar13[2];
          plVar13[2] = lVar11 + -1;
          if (lVar11 + -1 == 0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        lVar10 = lVar10 + -1;
        *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar15 + -1);
        puVar15 = puVar15 + -3;
      } while (1 < lVar10);
    }
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
    plVar13 = (long *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = plVar12;
    if ((plVar13 != (long *)0x0) &&
       (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar10 = plVar13[2];
      plVar13[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    *(undefined4 *)(param_2 + 2) = uVar4;
    if ((plVar12 != (long *)0x0) &&
       (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar10 = plVar12[2];
      plVar12[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004df2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12);
        return;
      }
    }
  }
  return;
}



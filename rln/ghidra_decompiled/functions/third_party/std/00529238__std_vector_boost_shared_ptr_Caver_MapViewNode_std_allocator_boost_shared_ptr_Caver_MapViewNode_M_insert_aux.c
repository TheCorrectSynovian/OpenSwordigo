/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00529238
 * Function: std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>> * this, __normal_iterator param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::MapViewNode>,
   std::allocator<boost::shared_ptr<Caver::MapViewNode> >
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,
   std::vector<boost::shared_ptr<Caver::MapViewNode>,
   std::allocator<boost::shared_ptr<Caver::MapViewNode> > > >, boost::shared_ptr<Caver::MapViewNode>
   const&) */

void __thiscall
std::
vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
::_M_insert_aux(vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>
                *this,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar14 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00529220 with catch @ 00529258 */
  if (puVar14 == *(undefined8 **)(this + 0x10)) {
    lVar10 = *(long *)this;
                    /* catch() { ... } // from try @ 005293d4 with catch @ 005293e8 */
    lVar9 = (long)puVar14 - lVar10;
    uVar5 = lVar9 >> 4;
    uVar2 = uVar5;
    if (lVar9 == 0) {
      uVar2 = 1;
    }
    uVar1 = 0xfffffffffffffff;
    if (!CARRY8(uVar2,uVar5) && uVar2 + uVar5 >> 0x3c == 0) {
      uVar1 = uVar2 + uVar5;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      pvVar4 = operator_new(uVar1 << 4);
    }
    puVar14 = (undefined8 *)((long)pvVar4 + ((long)param_2 - lVar10 >> 4) * 0x10);
    *puVar14 = *param_3;
    lVar9 = param_3[1];
    puVar14[1] = lVar9;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    puVar14 = *(undefined8 **)this;
    pvVar6 = pvVar4;
    if (puVar14 != param_2) {
      lVar9 = 0;
      do {
        puVar15 = (undefined8 *)((long)puVar14 + lVar9);
        *(undefined8 *)((long)pvVar4 + lVar9) = *puVar15;
        lVar10 = puVar15[1];
        ((undefined8 *)((long)pvVar4 + lVar9))[1] = lVar10;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
        }
        lVar9 = lVar9 + 0x10;
      } while (puVar15 + 2 != param_2);
      pvVar6 = (void *)((long)pvVar4 +
                       ((long)param_2 + (-0x10 - (long)puVar14) & 0xfffffffffffffff0U) + 0x10);
    }
    puVar16 = *(undefined8 **)(this + 8);
    puVar15 = (undefined8 *)((long)pvVar6 + 0x10);
    puVar8 = puVar15;
    puVar11 = param_2;
    if (puVar16 != param_2) {
      do {
        *puVar8 = *puVar11;
        lVar9 = puVar11[1];
        puVar8[1] = lVar9;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
        }
        puVar11 = puVar11 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar11 != puVar16);
      puVar15 = (undefined8 *)
                ((long)puVar15 +
                ((long)puVar16 + (-0x10 - (long)param_2) & 0xfffffffffffffff0U) + 0x10);
    }
    if (puVar14 != puVar16) {
      do {
        plVar12 = (long *)puVar14[1];
        if ((plVar12 != (long *)0x0) &&
           (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0)) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          lVar9 = plVar12[2];
          plVar12[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        puVar14 = puVar14 + 2;
      } while (puVar16 != puVar14);
      puVar14 = *(undefined8 **)this;
    }
    if (puVar14 != (undefined8 *)0x0) {
      operator_delete(puVar14);
    }
    *(void **)this = pvVar4;
    *(undefined8 **)(this + 8) = puVar15;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x10);
  }
  else {
    puVar15 = puVar14 + -2;
    lVar9 = puVar14[-1];
    *puVar14 = *puVar15;
    puVar14[1] = lVar9;
    if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 005292c0 with catch @ 00529280 */
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    *(undefined8 **)(this + 8) = puVar14 + 2;
    uVar3 = *param_3;
    plVar12 = (long *)param_3[1];
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
                    /* try { // try from 005292a4 to 006292a7 has its CatchHandler @ 005292b4 */
    if (0 < (long)puVar15 - (long)param_2) {
                    /* catch() { ... } // from try @ 005292a4 with catch @ 005292b4 */
      lVar9 = ((ulong)((long)puVar15 - (long)param_2) >> 4) + 1;
                    /* try { // try from 005292b8 to 006292bf has its CatchHandler @ 005292c8 */
      do {
        uVar7 = puVar15[-2];
                    /* try { // try from 005292c0 to 006292cb has its CatchHandler @ 00529280 */
        lVar10 = puVar15[-1];
        if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 005292b8 with catch @ 005292c8 */
                    /* try { // try from 005292cc to 0062934f has its CatchHandler @ 005292cc
                       catch(type#1 @ 00000000) { ... } // from try @ 005292cc with catch @ 005292cc
                       catch(type#1 @ 00000000) { ... } // from try @ 0052936c with catch @ 005292cc
                       catch(type#1 @ 00000000) { ... } // from try @ 00529390 with catch @ 005292cc
                        */
          *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
        }
        plVar13 = (long *)puVar15[1];
        *puVar15 = uVar7;
        puVar15[1] = lVar10;
        if ((plVar13 != (long *)0x0) &&
           (lVar10 = plVar13[1], plVar13[1] = lVar10 + -1, lVar10 + -1 == 0)) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          lVar10 = plVar13[2];
          plVar13[2] = lVar10 + -1;
          if (lVar10 + -1 == 0) {
            (**(code **)(*plVar13 + 0x18))(plVar13);
          }
        }
        lVar9 = lVar9 + -1;
        puVar15 = puVar15 + -2;
      } while (1 < lVar9);
    }
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
    plVar13 = (long *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = plVar12;
                    /* try { // try from 00529350 to 0062936b has its CatchHandler @ 00529384 */
    if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* try { // try from 0052936c to 00629387 has its CatchHandler @ 005292cc */
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00529350 with catch @ 00529384
                        */
                    /* try { // try from 00529388 to 0062938f has its CatchHandler @ 00529398 */
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
                    /* try { // try from 00529390 to 0062939b has its CatchHandler @ 005292cc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00529388 with catch @ 00529398
                        */
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
                    /* catch() { ... } // from try @ 005293d8 with catch @ 005293b4 */
      plVar12[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
                    /* try { // try from 005293d4 to 006293d7 has its CatchHandler @ 005293e8 */
                    /* try { // try from 005293d8 to 006293fb has its CatchHandler @ 005293b4 */
                    /* WARNING: Could not recover jumptable at 0x005293e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12);
        return;
      }
    }
  }
  return;
}



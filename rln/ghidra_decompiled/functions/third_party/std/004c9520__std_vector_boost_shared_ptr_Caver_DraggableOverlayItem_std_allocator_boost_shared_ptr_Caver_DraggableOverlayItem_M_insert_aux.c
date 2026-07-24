/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c9520
 * Function: std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>> * this, __normal_iterator param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>,
   std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem> >
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::DraggableOverlayItem>*,
   std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>,
   std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem> > > >,
   boost::shared_ptr<Caver::DraggableOverlayItem> const&) */

void __thiscall
std::
vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>
::_M_insert_aux(vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>
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
  if (puVar14 == *(undefined8 **)(this + 0x10)) {
    lVar10 = *(long *)this;
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
                    /* try { // try from 004c9828 to 005c9893 has its CatchHandler @ 004c9828
                       catch() { ... } // from try @ 004c9828 with catch @ 004c9828
                       catch() { ... } // from try @ 004c9b3c with catch @ 004c9828 */
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
                    /* try { // try from 004c9568 to 005c957b has its CatchHandler @ 004c9678 */
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    *(undefined8 **)(this + 8) = puVar14 + 2;
    uVar3 = *param_3;
    plVar12 = (long *)param_3[1];
                    /* try { // try from 004c957c to 005c9593 has its CatchHandler @ 004c9614 */
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
                    /* try { // try from 004c9594 to 005c96a3 has its CatchHandler @ 004c94c0 */
    if (0 < (long)puVar15 - (long)param_2) {
      lVar9 = ((ulong)((long)puVar15 - (long)param_2) >> 4) + 1;
      do {
        uVar7 = puVar15[-2];
        lVar10 = puVar15[-1];
        if (lVar10 != 0) {
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c957c with catch @ 004c9614
                        */
        puVar15 = puVar15 + -2;
      } while (1 < lVar9);
    }
    if (plVar12 != (long *)0x0) {
      plVar12[1] = plVar12[1] + 1;
    }
    plVar13 = (long *)param_2[1];
    *param_2 = uVar3;
    param_2[1] = plVar12;
    if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar9 = plVar13[2];
      plVar13[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c9568 with catch @ 004c9678
                        */
    if ((plVar12 != (long *)0x0) && (lVar9 = plVar12[1], plVar12[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar9 = plVar12[2];
      plVar12[2] = lVar9 + -1;
                    /* try { // try from 004c96a4 to 005c96af has its CatchHandler @ 004c96b8 */
      if (lVar9 + -1 == 0) {
                    /* try { // try from 004c96b0 to 005c96bb has its CatchHandler @ 004c94c0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004c96a4 with catch @ 004c96b8
                        */
                    /* WARNING: Could not recover jumptable at 0x004c96c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12);
        return;
      }
    }
  }
                    /* try { // try from 004c9894 to 005c98a7 has its CatchHandler @ 004ca044 */
  return;
}



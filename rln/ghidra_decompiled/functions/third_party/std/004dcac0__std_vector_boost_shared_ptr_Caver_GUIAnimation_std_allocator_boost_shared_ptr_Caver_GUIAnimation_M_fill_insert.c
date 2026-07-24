/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dcac0
 * Function: std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert
 * Signature: undefined __thiscall _M_fill_insert(vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>> * this, __normal_iterator param_1, ulong param_2, shared_ptr * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::GUIAnimation>,
   std::allocator<boost::shared_ptr<Caver::GUIAnimation> >
   >::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,
   std::vector<boost::shared_ptr<Caver::GUIAnimation>,
   std::allocator<boost::shared_ptr<Caver::GUIAnimation> > > >, unsigned long,
   boost::shared_ptr<Caver::GUIAnimation> const&) */

void __thiscall
std::
vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>
::_M_fill_insert(vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>
                 *this,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  
                    /* catch() { ... } // from try @ 004dc8ac with catch @ 004dcacc */
                    /* catch() { ... } // from try @ 004dc84c with catch @ 004dcae0 */
                    /* try { // try from 004dcae4 to 005dcaeb has its CatchHandler @ 004dcaf4 */
  if (param_3 != 0) {
                    /* try { // try from 004dcaec to 005dcaf7 has its CatchHandler @ 004dc804 */
    puVar15 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 004dcae4 with catch @ 004dcaf4 */
                    /* catch() { ... } // from try @ 004dcb4c with catch @ 004dcaf8
                       catch() { ... } // from try @ 004dcbf4 with catch @ 004dcaf8 */
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar15 >> 4) < param_3) {
      lVar16 = *(long *)this;
      uVar8 = (long)puVar15 - lVar16 >> 4;
      if (0xfffffffffffffff - uVar8 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_0066554c("vector::_M_fill_insert");
      }
                    /* try { // try from 004dcb1c to 005dcb1f has its CatchHandler @ 004dcb88 */
      uVar1 = param_3;
      if (param_3 <= uVar8) {
        uVar1 = uVar8;
      }
      uVar2 = 0xfffffffffffffff;
      if (!CARRY8(uVar1,uVar8) && uVar1 + uVar8 >> 0x3c == 0) {
        uVar2 = uVar1 + uVar8;
      }
                    /* try { // try from 004dcb44 to 005dcb4b has its CatchHandler @ 004dcbe8 */
      if (uVar2 == 0) {
        pvVar5 = (void *)0x0;
      }
      else {
                    /* try { // try from 004dcb4c to 005dcbaf has its CatchHandler @ 004dcaf8 */
        if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00665294();
        }
        pvVar5 = operator_new(uVar2 << 4);
      }
      puVar15 = (undefined8 *)((long)pvVar5 + ((long)param_2 - lVar16 >> 4) * 0x10);
      uVar8 = param_3;
      do {
        *puVar15 = *param_4;
        lVar16 = param_4[1];
        puVar15[1] = lVar16;
        if (lVar16 != 0) {
          *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
        }
        uVar8 = uVar8 - 1;
        puVar15 = puVar15 + 2;
      } while (uVar8 != 0);
                    /* catch() { ... } // from try @ 004dce0c with catch @ 004dcdf8 */
      puVar15 = *(undefined8 **)this;
      pvVar7 = pvVar5;
      if (puVar15 != param_2) {
                    /* try { // try from 004dce08 to 005dce0b has its CatchHandler @ 004dce1c */
        lVar16 = 0;
                    /* try { // try from 004dce0c to 005dce2f has its CatchHandler @ 004dcdf8 */
        do {
          puVar9 = (undefined8 *)((long)puVar15 + lVar16);
                    /* catch() { ... } // from try @ 004dce08 with catch @ 004dce1c */
          *(undefined8 *)((long)pvVar5 + lVar16) = *puVar9;
          lVar11 = puVar9[1];
          ((undefined8 *)((long)pvVar5 + lVar16))[1] = lVar11;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
          }
          lVar16 = lVar16 + 0x10;
        } while (puVar9 + 2 != param_2);
        pvVar7 = (void *)((long)pvVar5 +
                         ((long)param_2 + (-0x10 - (long)puVar15) & 0xfffffffffffffff0U) + 0x10);
      }
      puVar17 = *(undefined8 **)(this + 8);
      puVar6 = (undefined8 *)((long)pvVar7 + param_3 * 0x10);
      puVar10 = puVar6;
      puVar9 = param_2;
      if (puVar17 != param_2) {
        do {
          *puVar10 = *puVar9;
          lVar16 = puVar9[1];
          puVar10[1] = lVar16;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
          }
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 2;
        } while (puVar9 != puVar17);
        puVar6 = (undefined8 *)
                 ((long)puVar6 +
                 ((long)puVar17 + (-0x10 - (long)param_2) & 0xfffffffffffffff0U) + 0x10);
      }
      if (puVar15 != puVar17) {
        do {
          plVar12 = (long *)puVar15[1];
          if ((plVar12 != (long *)0x0) &&
             (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0)) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            lVar16 = plVar12[2];
            plVar12[2] = lVar16 + -1;
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar12 + 0x18))(plVar12);
            }
          }
          puVar15 = puVar15 + 2;
        } while (puVar17 != puVar15);
        puVar15 = *(undefined8 **)this;
      }
      if (puVar15 != (undefined8 *)0x0) {
        operator_delete(puVar15);
      }
      *(void **)this = pvVar5;
      *(undefined8 **)(this + 8) = puVar6;
      *(void **)(this + 0x10) = (void *)((long)pvVar5 + uVar2 * 0x10);
    }
    else {
      uVar3 = *param_4;
      plVar12 = (long *)param_4[1];
      if (plVar12 != (long *)0x0) {
        plVar12[1] = plVar12[1] + 1;
      }
      uVar8 = (long)puVar15 - (long)param_2 >> 4;
      lVar16 = uVar8 - param_3;
      if (uVar8 < param_3 || lVar16 == 0) {
        puVar9 = puVar15;
        lVar11 = param_3 - uVar8;
        while (lVar11 != 0) {
          *puVar9 = uVar3;
          puVar9[1] = plVar12;
          if (plVar12 != (long *)0x0) {
            plVar12[1] = plVar12[1] + 1;
          }
          puVar9 = puVar9 + 2;
          lVar16 = lVar16 + 1;
          lVar11 = lVar16;
        }
        puVar6 = puVar15 + (param_3 - uVar8) * 2;
        *(undefined8 **)(this + 8) = puVar6;
        puVar9 = param_2;
        if (puVar15 == param_2) {
          *(undefined8 **)(this + 8) = param_2 + param_3 * 2;
        }
        else {
          do {
            *puVar6 = *puVar9;
            lVar16 = puVar9[1];
            puVar6[1] = lVar16;
            if (lVar16 != 0) {
              *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 1;
            }
            puVar9 = puVar9 + 2;
            puVar6 = puVar6 + 2;
          } while (puVar9 != puVar15);
          *(undefined8 **)(this + 8) = puVar15 + param_3 * 2;
          do {
            if (plVar12 != (long *)0x0) {
              plVar12[1] = plVar12[1] + 1;
            }
            plVar14 = (long *)param_2[1];
            *param_2 = uVar3;
            param_2[1] = plVar12;
            if ((plVar14 != (long *)0x0) &&
               (lVar16 = plVar14[1], plVar14[1] = lVar16 + -1, lVar16 + -1 == 0)) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              lVar16 = plVar14[2];
              plVar14[2] = lVar16 + -1;
              if (lVar16 + -1 == 0) {
                (**(code **)(*plVar14 + 0x18))(plVar14);
              }
            }
            param_2 = param_2 + 2;
          } while (param_2 != puVar15);
        }
      }
      else {
                    /* catch() { ... } // from try @ 004dcb1c with catch @ 004dcb88 */
        lVar16 = 0;
        do {
          puVar9 = (undefined8 *)((long)puVar15 + lVar16 + param_3 * -0x10);
          *(undefined8 *)((long)puVar15 + lVar16) = *puVar9;
          lVar11 = puVar9[1];
          ((undefined8 *)((long)puVar15 + lVar16))[1] = lVar11;
          if (lVar11 != 0) {
                    /* try { // try from 004dcbb0 to 005dcbb3 has its CatchHandler @ 004dcbe4 */
            *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
          }
          lVar16 = lVar16 + 0x10;
        } while (param_3 * -0x10 + lVar16 != 0);
        uVar8 = (long)puVar15 + (param_3 * -0x10 - (long)param_2);
        *(undefined8 **)(this + 8) = puVar15 + param_3 * 2;
        if (0 < (long)uVar8) {
          plVar14 = puVar15 + -1;
                    /* catch() { ... } // from try @ 004dcbb0 with catch @ 004dcbe4 */
          lVar16 = (uVar8 >> 4) + 1;
                    /* catch() { ... } // from try @ 004dcb44 with catch @ 004dcbe8 */
          do {
                    /* try { // try from 004dcbec to 005dcbf3 has its CatchHandler @ 004dcbfc */
            lVar11 = (plVar14 + param_3 * -2)[-1];
            lVar4 = plVar14[param_3 * -2];
                    /* try { // try from 004dcbf4 to 005dcbff has its CatchHandler @ 004dcaf8 */
            if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 004dcbec with catch @ 004dcbfc */
              *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
            }
            plVar13 = (long *)*plVar14;
            plVar14[-1] = lVar11;
            *plVar14 = lVar4;
            if ((plVar13 != (long *)0x0) &&
               (lVar11 = plVar13[1], plVar13[1] = lVar11 + -1, lVar11 + -1 == 0)) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              lVar11 = plVar13[2];
              plVar13[2] = lVar11 + -1;
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar13 + 0x18))(plVar13);
              }
            }
            lVar16 = lVar16 + -1;
            plVar14 = plVar14 + -2;
          } while (1 < lVar16);
        }
        puVar15 = param_2 + param_3 * 2;
        do {
          if (plVar12 != (long *)0x0) {
            plVar12[1] = plVar12[1] + 1;
          }
          plVar14 = (long *)param_2[1];
          *param_2 = uVar3;
          param_2[1] = plVar12;
          if ((plVar14 != (long *)0x0) &&
             (lVar16 = plVar14[1], plVar14[1] = lVar16 + -1, lVar16 + -1 == 0)) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            lVar16 = plVar14[2];
            plVar14[2] = lVar16 + -1;
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
          }
          param_2 = param_2 + 2;
        } while (param_2 != puVar15);
      }
      if ((plVar12 != (long *)0x0) &&
         (lVar16 = plVar12[1], plVar12[1] = lVar16 + -1, lVar16 + -1 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar16 = plVar12[2];
        plVar12[2] = lVar16 + -1;
        if (lVar16 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004dcfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x18))(plVar12);
          return;
        }
      }
    }
  }
  return;
}



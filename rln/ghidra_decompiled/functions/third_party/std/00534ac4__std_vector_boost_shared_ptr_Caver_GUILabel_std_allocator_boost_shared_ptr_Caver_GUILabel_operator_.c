/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00534ac4
 * Function: std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::operator=
 * Signature: undefined __thiscall operator=(vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<boost::shared_ptr<Caver::GUILabel>, std::allocator<boost::shared_ptr<Caver::GUILabel>
   > >::TEMPNAMEPLACEHOLDERVALUE(std::vector<boost::shared_ptr<Caver::GUILabel>,
   std::allocator<boost::shared_ptr<Caver::GUILabel> > > const&) */

vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>> *
__thiscall
std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::
operator=(vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>
          *this,vector *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_1 != (vector *)this) {
    puVar11 = *(undefined8 **)param_1;
    puVar14 = *(undefined8 **)(param_1 + 8);
    puVar13 = *(undefined8 **)this;
    uVar3 = (long)puVar14 - (long)puVar11;
    uVar12 = (long)uVar3 >> 4;
    if ((ulong)(*(long *)(this + 0x10) - (long)puVar13 >> 4) < uVar12) {
      if (uVar12 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      puVar4 = operator_new(uVar3);
      puVar13 = puVar4;
      for (; puVar11 != puVar14; puVar11 = puVar11 + 2) {
        *puVar13 = *puVar11;
        lVar7 = puVar11[1];
        puVar13[1] = lVar7;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
        }
        puVar13 = puVar13 + 2;
      }
      pvVar9 = *(void **)this;
      pvVar2 = *(void **)(this + 8);
      if (pvVar9 != pvVar2) {
        do {
          plVar10 = *(long **)((long)pvVar9 + 8);
          if ((plVar10 != (long *)0x0) &&
             (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            lVar7 = plVar10[2];
            plVar10[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          pvVar9 = (void *)((long)pvVar9 + 0x10);
        } while (pvVar2 != pvVar9);
        pvVar9 = *(void **)this;
      }
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(undefined8 **)this = puVar4;
      *(undefined8 **)(this + 0x10) = puVar4 + uVar12 * 2;
    }
    else {
      puVar4 = *(undefined8 **)(this + 8);
      uVar8 = (long)puVar4 - (long)puVar13;
      uVar5 = (long)uVar8 >> 4;
      if (uVar5 < uVar12) {
        if (0 < (long)uVar8) {
          lVar7 = (uVar8 >> 4) + 1;
          do {
            uVar1 = *puVar11;
            lVar6 = puVar11[1];
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
            }
            plVar10 = (long *)puVar13[1];
            *puVar13 = uVar1;
            puVar13[1] = lVar6;
            if ((plVar10 != (long *)0x0) &&
               (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              lVar6 = plVar10[2];
              plVar10[2] = lVar6 + -1;
              if (lVar6 + -1 == 0) {
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
            }
            lVar7 = lVar7 + -1;
            puVar11 = puVar11 + 2;
            puVar13 = puVar13 + 2;
          } while (1 < lVar7);
          puVar4 = *(undefined8 **)(this + 8);
          puVar11 = *(undefined8 **)param_1;
          puVar14 = *(undefined8 **)(param_1 + 8);
          uVar5 = (long)puVar4 - *(long *)this >> 4;
        }
        for (puVar11 = puVar11 + uVar5 * 2; puVar11 != puVar14; puVar11 = puVar11 + 2) {
          *puVar4 = *puVar11;
          lVar7 = puVar11[1];
          puVar4[1] = lVar7;
          if (lVar7 != 0) {
            *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
          }
          puVar4 = puVar4 + 2;
        }
      }
      else {
        if (0 < (long)uVar3) {
          lVar7 = (uVar3 >> 4) + 1;
          do {
            uVar1 = *puVar11;
            lVar6 = puVar11[1];
            if (lVar6 != 0) {
              *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
            }
            plVar10 = (long *)puVar13[1];
            *puVar13 = uVar1;
            puVar13[1] = lVar6;
            if ((plVar10 != (long *)0x0) &&
               (lVar6 = plVar10[1], plVar10[1] = lVar6 + -1, lVar6 + -1 == 0)) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              lVar6 = plVar10[2];
              plVar10[2] = lVar6 + -1;
              if (lVar6 + -1 == 0) {
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
            }
            lVar7 = lVar7 + -1;
            puVar13 = puVar13 + 2;
            puVar11 = puVar11 + 2;
          } while (1 < lVar7);
          puVar4 = *(undefined8 **)(this + 8);
        }
        for (; puVar13 != puVar4; puVar13 = puVar13 + 2) {
          plVar10 = (long *)puVar13[1];
          if ((plVar10 != (long *)0x0) &&
             (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            lVar7 = plVar10[2];
            plVar10[2] = lVar7 + -1;
            if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 00534db8 with catch @ 00534d88 */
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
        }
      }
    }
                    /* try { // try from 00534da4 to 00634db7 has its CatchHandler @ 00534ddc */
    *(ulong *)(this + 8) = *(long *)this + uVar12 * 0x10;
  }
                    /* try { // try from 00534db8 to 00634ddf has its CatchHandler @ 00534d88 */
  return this;
}


